#include "pch.h"

#include "GUI.h"
#include "Custom.h"

#include "../Utils/Console/Console.hpp"
#include "../Unreal.h"

#include "Watermark.h"
#include "../Features/SpeedHack.h"
#include "../Features/GodMode.h"
#include "../Features/WeaponStuff.h"

inline std::unique_ptr<Unreal> unreal;

bool bWatermark = true;
bool bWatermarkFPS = true;

inline std::unique_ptr<SpeedHack> speedHack;
inline std::unique_ptr<GodMode> godMode;
inline std::unique_ptr<WeaponStuff> weaponStuff;

bool bESP = true;
bool bTeamESP = false;
bool bNameESP = true;
bool bESPVisibleOnly = false;
bool bDrawBones = false;
bool bAimbot = true;
bool bAimVisibleOnly = true;
float fSmoothing = 1.f;
bool bHealthBar = true;
bool bShieldBar = true;

ImU32 Black = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 0.f, 1.f });
ImU32 White = ImGui::ColorConvertFloat4ToU32({ 1.f, 1.f, 1.f, 1.f });

ImU32 Red = ImGui::ColorConvertFloat4ToU32({ 1.f, 0.f, 0.f, 1.f });
ImU32 Green = ImGui::ColorConvertFloat4ToU32({ 0.f, 1.f, 0.f, 1.f });
ImU32 Blue = ImGui::ColorConvertFloat4ToU32({ 0.f, 0.f, 1.f, 1.f });

ImU32 Cyan = ImGui::ColorConvertFloat4ToU32({ 0.f, 1.f, 1.f, 1.f });

void GUI::Render()
{
	if (bWatermark)
		showWatermark(bWatermarkFPS, "OmegaWare.xyz (Borderlands 3)", ImVec4(255, 255, 255, 255), ImVec4(255, 255, 255, 0));

	if (bMenuOpen)
	{
		ImGui::SetNextWindowSize(ImVec2(WIDTH, HEIGHT));
		ImGui::Begin("OmegaWare.xyz (Borderlands 3)", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse);

		ImGui::BeginChild("Cheat", ImVec2(ImGui::GetContentRegionAvail().x / 3, ImGui::GetContentRegionAvail().y / 2), true);
		{
			ImGui::Text("Cheat");

			if (ImGui::Button("Unload"))
				bShouldRun = false;
			ImGui::SameLine();
			if (ImGui::Button(con->GetVisibility() ? "Hide Console" : "Show Console"))
				con->ToggleVisibility();

			//ImGui::Checkbox("Extra Debug Info", &bExtraDebug);

			ImGui::Checkbox("Watermark", &bWatermark);
			if (bWatermark)
				ImGui::Checkbox("Watermark FPS", &bWatermarkFPS);
		}
		ImGui::EndChild();
		ImGui::SameLine();
		ImGui::BeginChild("PlayerModifiers", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y / 2), true);
		{
			ImGui::Text("Player Modifiers");

			godMode.get()->DrawMenuItems();
			speedHack.get()->DrawMenuItems();
		}
		ImGui::EndChild();
		ImGui::SameLine();
		ImGui::BeginChild("WeaponModifiers", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y / 2), true);
		{
			ImGui::Text("Weapon Modifiers");

			weaponStuff.get()->DrawMenuItems();
		}
		ImGui::EndChild();

		ImGui::BeginChild("ESP", ImVec2(ImGui::GetContentRegionAvail().x / 3, ImGui::GetContentRegionAvail().y), true);
		{
			ImGui::Text("ESP");

			ImGui::Checkbox("ESP", &bESP);
			ImGui::SameLine();
			ImGui::Checkbox("Team", &bTeamESP);

			ImGui::Checkbox("Names", &bNameESP);
			ImGui::SameLine();
			ImGui::Checkbox("Visible Only", &bESPVisibleOnly);

			ImGui::Checkbox("Health Bar", &bHealthBar);
			ImGui::Checkbox("Shield Bar", &bShieldBar);

			ImGui::Spacing();

			ImGui::Checkbox("Draw Bone IDs", &bDrawBones);
		}
		ImGui::EndChild();
		ImGui::SameLine();
		ImGui::BeginChild("Aimbot", ImVec2(ImGui::GetContentRegionAvail().x / 2, ImGui::GetContentRegionAvail().y), true);
		{
			ImGui::Text("Aimbot");

			ImGui::Checkbox("Aimbot", &bAimbot);
			ImGui::SameLine();
			ImGui::Checkbox("Visible Only", &bAimVisibleOnly);

			ImGui::Text("Smoothing Factor");
			ImGui::SliderFloat("##Smoothing Factor", &fSmoothing, 1.f, 10.f);
		}
		ImGui::EndChild();

		ImGui::End();
	}

	/*ImVec2 cursorPos = ImGui::GetCursorPos();
	std::stringstream ss;
	ss << "X: " << cursorPos.x << " Y: " << cursorPos.y;
	Log("CursorPos", ss.str());*/

	//
	//	Other Render Stuff
	//
	if (!(*CG::UWorld::GWorld))
	{			
		return;
	}

	auto pUnreal = unreal.get();
	pUnreal->Refresh();

	CG::FVector CameraLocation = { 0.f, 0.f, 0.f };
	CG::FRotator CameraRotation = { 0.f, 0.f, 0.f };


	// Neto to fix crash here when loading from main menu
	if (pUnreal->PlayerCameraManager && pUnreal->PlayerCameraManager->VfTable)
	{
		CameraLocation = pUnreal->PlayerCameraManager->GetCameraLocation();
		CameraRotation = pUnreal->PlayerCameraManager->GetCameraRotation();
	}

	auto CVADist = FLT_MAX;
	CG::AOakCharacter* CVA;
	CG::FRotator CVAAngle;

	for (int i = 0; i < (**CG::UWorld::GWorld).Levels.Count(); i++)
	{
		CG::ULevel* Level = (**CG::UWorld::GWorld).Levels[i];
		if (Level != nullptr)
		{
			if (!Level->NearActors.Data() || !Level->NearActors.Count())
				continue;

			for (int j = 0; j < Level->NearActors.Count(); j++)
			{
				auto Actor = Level->NearActors[j];

				if (Actor && Actor->IsA(CG::AOakCharacter::StaticClass()))
				{
					auto Target = (CG::AOakCharacter*)Actor;

					if (!Target || !pUnreal->BL3Player)
						continue;

					if (Target == pUnreal->BL3Player)
						continue;

					bool bIsVisible = pUnreal->PlayerController->LineOfSightTo(Target, { 0.f, 0.f, 0.f }, false);

					// IsDead check
					if (Target->DeathType != CG::EDeathType::None)
						continue;

					if (!bTeamESP && (Target->GetTeam() == pUnreal->BL3Player->GetTeam()))
						continue;

					if (!bTeamESP && !Target->IsA(CG::ABPChar_Enemy_C::StaticClass()))
						continue;

					if (Target->IsA(CG::ABPChar_Enemy_C::StaticClass()))
					{
						auto AIBalanceState = ((CG::ABPChar_Enemy_C*)Target)->AIBalanceState;

						if (AIBalanceState)
						{
							if (AIBalanceState->bIsAnointed)
							{
								//uint8_t a = static_cast<std::underlying_type_t<CG::EAnointedDeathState>>(AIBalanceState->AnointedDeathState);
								//std::cout << std::dec << unsigned(a) << std::endl;

								if (AIBalanceState->AnointedDeathState != CG::EAnointedDeathState::PreFreeze)
									continue;
							}
						}
						else
							continue;
					}

					CG::FVector Origin;
					CG::FVector BoxExtent;
					Target->GetActorBounds(true, &Origin, &BoxExtent);

					CG::FVector HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(40));;	// 14 for most
					for (int k = 0; k < Target->Mesh->GetNumBones(); k++)
					{
						if (Target->Mesh->GetBoneName(k).GetName() == "Head")
							HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));
					}

					if (Target->IsA(CG::ABPChar_Enemy_C::StaticClass()))
					{
						CG::FRotator Res = pUnreal->MathLibrary->STATIC_FindLookAtRotation(CameraLocation, HeadBone);

						float DiffY = Res.Pitch - CameraRotation.Pitch;
						float DiffX = Res.Yaw - CameraRotation.Yaw;

						float Distance = sqrt((DiffY * DiffY) + (DiffX * DiffX));

						if ((bAimVisibleOnly && bIsVisible) || !bAimVisibleOnly)
						{
							if (Distance < CVADist)
							{
								CVADist = Distance;

								CVAAngle = Res;

								CVA = Target;
							}
						}
					}
					
					CG::FVector Head = { Origin.X, Origin.Y, Origin.Z + (BoxExtent.Z) };

					CG::FVector Feet = { Origin.X, Origin.Y, Origin.Z - (BoxExtent.Z) };

					if (bESP)
					{
						CG::FVector2D HeadPos;
						if (pUnreal->PlayerController->ProjectWorldLocationToScreen(Head, &HeadPos, false, false))
						{
							CG::FVector2D FeetPos;
							if (pUnreal->PlayerController->ProjectWorldLocationToScreen(Feet, &FeetPos, false, false))
							{
								const float Height = abs(FeetPos.Y - HeadPos.Y);
								const float Width = Height * 0.6f;

								CG::FVector2D TopLeft = { HeadPos.X - Width * 0.5f, HeadPos.Y };
								CG::FVector2D DownRight = { HeadPos.X + Width * 0.5f, FeetPos.Y };

								auto h = DownRight.Y - TopLeft.Y;
								auto w = DownRight.X - TopLeft.X;

								auto DownLeft = CG::FVector2D(TopLeft.X, DownRight.Y);
								auto TopRight = CG::FVector2D(DownRight.X, TopLeft.Y);

								if ((bESPVisibleOnly && bIsVisible) || !bESPVisibleOnly)
								{
									ImU32 Color = (bIsVisible) ? Green : Red;

									// Outline
									ImGui::GetBackgroundDrawList()->AddLine({ TopLeft.X, TopLeft.Y }, { TopLeft.X, TopLeft.Y + h * 1 }, Color);
									ImGui::GetBackgroundDrawList()->AddLine({ TopLeft.X, TopLeft.Y }, { TopLeft.X + w * 1, TopLeft.Y }, Color);

									ImGui::GetBackgroundDrawList()->AddLine({ DownRight.X, DownRight.Y }, { DownRight.X, DownRight.Y - h * 1 }, Color);
									ImGui::GetBackgroundDrawList()->AddLine({ DownRight.X, DownRight.Y }, { DownRight.X - w * 1, DownRight.Y }, Color);

									ImGui::GetBackgroundDrawList()->AddLine({ DownLeft.X, DownLeft.Y }, { DownLeft.X, DownLeft.Y - h * 1 }, Color);
									ImGui::GetBackgroundDrawList()->AddLine({ DownLeft.X, DownLeft.Y }, { DownLeft.X + w * 1, DownLeft.Y }, Color);

									ImGui::GetBackgroundDrawList()->AddLine({ TopRight.X, TopRight.Y }, { TopRight.X, TopRight.Y + h * 1 }, Color);
									ImGui::GetBackgroundDrawList()->AddLine({ TopRight.X, TopRight.Y }, { TopRight.X - w * 1, TopRight.Y }, Color);

									if (bNameESP)
										ImGui::GetBackgroundDrawList()->AddText({ TopLeft.X, TopLeft.Y - 15.f }, White, Target->GetName().c_str());

									if (bHealthBar)
									{
										auto MaxHealth = Target->DamageComponent->GetMaxHealth();
										auto CurrentHealth = Target->DamageComponent->GetCurrentHealth();
										float Height = DownRight.Y - (TopRight.Y + 1);

										float g = ((CurrentHealth / MaxHealth) * 255);
										float r = 255 - g;

										// Outline
										ImGui::GetBackgroundDrawList()->AddRect({ DownRight.X + 10, DownRight.Y + 1 }, { TopRight.X + 5, TopRight.Y }, White);

										// Health Bar
										ImGui::GetBackgroundDrawList()->AddRectFilled({ DownRight.X + 9, DownRight.Y }, { DownRight.X + 6, DownRight.Y - (Height * (CurrentHealth / MaxHealth)) }, ImGui::ColorConvertFloat4ToU32({ r, g, 0.f, 1.f }));
									}

									if (bShieldBar)
									{
										auto MaxShield = Target->DamageComponent->GetMaxShield();
										if (MaxShield)
										{
											auto CurrentShield = Target->DamageComponent->GetCurrentShield();
											float Height = DownRight.Y - (TopRight.Y + 1);

											// Outline
											ImGui::GetBackgroundDrawList()->AddRect({ DownRight.X + 18, DownRight.Y + 1 }, { TopRight.X + 13, TopRight.Y }, White);

											// Shield Bar
											ImGui::GetBackgroundDrawList()->AddRectFilled({ DownRight.X + 17, DownRight.Y }, { DownRight.X + 14, DownRight.Y - (Height * (CurrentShield / MaxShield)) }, Blue);
										}
									}
								}
							}
						}
					}

					// Draw Bones
					if (bDrawBones) // bDrawBones
					{
						for (int k = 0; k < Target->Mesh->GetNumBones(); k++)
						{
							CG::FVector bone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));

							CG::FVector2D bonePos;
							if (pUnreal->PlayerController->ProjectWorldLocationToScreen(bone, &bonePos, false, false))
							{
								ImGui::GetBackgroundDrawList()->AddText({ bonePos.X, bonePos.Y }, ImGui::ColorConvertFloat4ToU32({ 1.f, 1.f, 1.f, 1.f }), std::to_string(k).c_str());
							}
						}
					}
				}
			}
		}

		if (GetAsyncKeyState(VK_RBUTTON))
		{
			if (CVADist != FLT_MAX && pUnreal->RecoilControlComponent && pUnreal->PlayerController)
			{
				auto Delta = CVAAngle - CameraRotation;
				auto SmoothedAngle = CameraRotation + Delta / fSmoothing;
			
				pUnreal->PlayerController->SetControlRotation(SmoothedAngle - pUnreal->RecoilControlComponent->TargetRotation, true);
			}
		}
	}

	//
	// End Other Render Stuff
	//
}