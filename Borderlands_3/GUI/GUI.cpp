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

void GUI::Render()
{
	if (bWatermark)
		showWatermark(bWatermarkFPS, "OmegaWare.xyz (Borderlands 3)", ImVec4(255, 255, 255, 255), ImVec4(255, 255, 255, 0));

	if (!bMenuOpen)
		return;

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
	ImGui::BeginChild("PlayerModifiers", ImVec2(ImGui::GetContentRegionAvail().x /2, ImGui::GetContentRegionAvail().y / 2), true);
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

	/*ImVec2 cursorPos = ImGui::GetCursorPos();
	std::stringstream ss;
	ss << "X: " << cursorPos.x << " Y: " << cursorPos.y;
	Log("CursorPos", ss.str());*/

	//
	//	Other Render Stuff
	//
	if (!(*CG::UWorld::GWorld))
	{
		ImGui::End();
		return;
	}

	auto pUnreal = unreal.get();
	pUnreal->Refresh();

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

				if (Actor && Actor->IsA(CG::ABPChar_Enemy_C::StaticClass()))
				{
					auto Target = (CG::AOakCharacter*)Actor;

					// IsDead check
					if (Target->DeathType != CG::EDeathType::None)
						continue;

					if (Target->GetTeam() == ((CG::AOakCharacter*)pUnreal->AcknowledgedPawn)->GetTeam())
						continue;

					CG::FVector Origin;
					CG::FVector BoxExtent;
					Target->GetActorBounds(true, &Origin, &BoxExtent);

					CG::FVector HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(40));;	// 14 for most
					CG::FVector TopBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(8));	// 8 For most
					for (int k = 0; k < Target->Mesh->GetNumBones(); k++)
					{
						if (Target->Mesh->GetBoneName(k).GetName() == "Head")
							HeadBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));

						if (Target->Mesh->GetBoneName(k).GetName() == "Camera")
							TopBone = Target->Mesh->GetSocketLocation(Target->Mesh->GetBoneName(k));
					}

					CG::FVector Head = { TopBone.X, TopBone.Y, TopBone.Z };
					CG::FVector Feet = { Origin.X, Origin.Y, Origin.Z - (BoxExtent.Z) };

					bool bIsVisible = pUnreal->PlayerController->LineOfSightTo(Target, { 0.f, 0.f, 0.f }, false);

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

							ImU32 Color = (bIsVisible) ? ImGui::ColorConvertFloat4ToU32({ 0.f, 1.f, 0.f, 1.f }) : ImGui::ColorConvertFloat4ToU32({ 1.f, 0.f, 0.f, 1.f });

							ImGui::GetBackgroundDrawList()->AddLine({ TopLeft.X, TopLeft.Y }, { TopLeft.X, TopLeft.Y + h * 1 }, Color);
							ImGui::GetBackgroundDrawList()->AddLine({ TopLeft.X, TopLeft.Y }, { TopLeft.X + w * 1, TopLeft.Y }, Color);
							
							ImGui::GetBackgroundDrawList()->AddLine({ DownRight.X, DownRight.Y }, { DownRight.X, DownRight.Y - h * 1 }, Color);
							ImGui::GetBackgroundDrawList()->AddLine({ DownRight.X, DownRight.Y }, { DownRight.X - w * 1, DownRight.Y }, Color);

							ImGui::GetBackgroundDrawList()->AddLine({ DownLeft.X, DownLeft.Y }, { DownLeft.X, DownLeft.Y - h * 1 }, Color);
							ImGui::GetBackgroundDrawList()->AddLine({ DownLeft.X, DownLeft.Y }, { DownLeft.X + w * 1, DownLeft.Y }, Color);

							ImGui::GetBackgroundDrawList()->AddLine({ TopRight.X, TopRight.Y }, { TopRight.X, TopRight.Y + h * 1 }, Color);
							ImGui::GetBackgroundDrawList()->AddLine({ TopRight.X, TopRight.Y }, { TopRight.X - w * 1, TopRight.Y }, Color);
						
							ImGui::GetBackgroundDrawList()->AddText({ TopLeft.X, TopLeft.Y - 15.f }, ImGui::ColorConvertFloat4ToU32({ 1.f, 1.f, 1.f, 1.f }), Target->GetName().c_str());
						}
					}

					// Draw Bones
					if (1 == 2) // bDrawBones
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

					/*bool bIsVisible = pUnreal->PlayerController->LineOfSightTo(Target, { 0.f, 0.f, 0.f }, false);

					CG::FRotator Res = pUnreal->MathLibrary->STATIC_FindLookAtRotation(CameraLocation, HeadBone);

					float DiffY = Res.Pitch - CameraRotation.Pitch;
					float DiffX = Res.Yaw - CameraRotation.Yaw;

					float Distance = sqrt((DiffY * DiffY) + (DiffX * DiffX));

					if (Distance < ClosestValidActorDistance && bIsVisible)
					{
						ClosestValidActorDistance = Distance;

						ClosestValidActor = Res;
						CVAScreen = head;

						CVA = actor;
					}*/
				}
			}
		}
	}

	//
	// End Other Render Stuff
	//

	ImGui::End();
}