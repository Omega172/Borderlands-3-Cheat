#include "pch.h"
#include "Utils/Console/Console.hpp"
#include "Utils/Hooking/Hook.h"
#include "Render.h"

#include "Features/SpeedHack.h"
#include "Features/GodMode.h"
#include "Features/WeaponStuff.h"

#include <chrono>
#include <thread>
#include <locale>
#include <codecvt>
#include <utility>

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

// Move this stuff to their respective locations if needed Ex. GUI Handling
DWORD MenuKey = VK_INSERT;
DWORD UnloadKey = VK_END;
Console* con = nullptr;

bool bShouldRun = true;
bool lastLoop = false;

// This can be removed after ImGui is setup because it wont be needed
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

// Replace this and SetupGlobals() with a inline std::unique_ptr<CLASS_TYPE> to specalized global classes UnrealEngine and Borderlands3

// Globals
CG::UGameInstance* GameInstance = nullptr;
CG::ULocalPlayer* LocalPlayer = nullptr;
CG::APlayerController* PlayerController = nullptr;
CG::APawn* AcknowledgedPawn = nullptr;
CG::ABPChar_Player_C* BL3Player = nullptr;
CG::AOakPlayerController* OakPlayerController = nullptr;
CG::UOakCharacterMovementComponent* OakCharacterMovement = nullptr;
CG::URecoilControlComponent* RecoilControlComponent = nullptr;

CG::UFont* GlobalFont = nullptr;
CG::UKismetMathLibrary* MathLibrary = nullptr;

// Improve all this
bool SetupGlobals()
{
	std::cout << "Setting up cheat globals\n";

	while (!(*CG::UWorld::GWorld))
		continue;

	GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
	if (!GameInstance || !GameInstance->LocalPlayers.Count())
		return false;

	LocalPlayer = GameInstance->LocalPlayers[0];
	if (!LocalPlayer)
		return false;

	GlobalFont = CG::UObject::FindObject<CG::UFont>("Font Roboto.Roboto");
	if (!GlobalFont)
		return false;

	MathLibrary = (CG::UKismetMathLibrary*)CG::UKismetMathLibrary::StaticClass();
	if (!MathLibrary)
		return false;

	return true;
}

// Replace this with Feature classes
// Hooks
Hook<void(__thiscall*)(CG::UObject*, CG::UCanvas*)> PostRender;

// Features 2.0
inline std::unique_ptr<SpeedHack> speedHack = std::make_unique<SpeedHack>();
inline std::unique_ptr<GodMode> godMode = std::make_unique<GodMode>();
inline std::unique_ptr<WeaponStuff> weaponStuff = std::make_unique<WeaponStuff>();

// Replace this with Feature classes
// Features
float smoothing = 1.f;
float bDrawBones = false;

// Replace with with dx11 hook because ImGui for the win
void PostRenderHook(CG::UObject* viewportclient, CG::UCanvas* canvas)
{
	if (!GlobalFont || !bShouldRun)
	{
		PostRender.oFunc(viewportclient, canvas);

		if (!bShouldRun)
		{
			PostRender.RestoreHook();
			lastLoop = true;
		}
	}

	canvas->K2_DrawText(GlobalFont, L"OmegaWare.xyz", { 10.f, 10.f }, Colors::Cyan, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	std::wstring SpeedLabel = L"SpeedHack: ";
	SpeedLabel += std::to_wstring(speedHack.get()->fSpeed);
	canvas->K2_DrawText(GlobalFont, SpeedLabel.c_str(), { 10.f, 25.f }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	std::wstring SmoothingLabel = L"Smoothing: ";
	SmoothingLabel += std::to_wstring(smoothing);
	canvas->K2_DrawText(GlobalFont, SmoothingLabel.c_str(), { 10.f, 40.f }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	std::wstring NoRecoilLabel = L"NoRecoil: ";
	NoRecoilLabel += ((weaponStuff.get()->bNoRecoil) ? L"ON" : L"OFF");
	canvas->K2_DrawText(GlobalFont, NoRecoilLabel.c_str(), { 10.f, 55.f }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	std::wstring GodModeLabel = L"GodMode: ";
	GodModeLabel += ((godMode.get()->bGodMode) ? L"ON" : L"OFF");
	canvas->K2_DrawText(GlobalFont, GodModeLabel.c_str(), { 10.f, 70.f }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	if (LocalPlayer && (!PlayerController || PlayerController != LocalPlayer->PlayerController))
		PlayerController = LocalPlayer->PlayerController;

	if (!AcknowledgedPawn)
		AcknowledgedPawn = PlayerController->AcknowledgedPawn;

	if (!BL3Player)
		BL3Player = (CG::ABPChar_Player_C*)AcknowledgedPawn;
	
	if (BL3Player && !OakPlayerController)
	{
		if (BL3Player->IsControlled())
			OakPlayerController = BL3Player->OakPlayerController;
	}

	if (BL3Player && !OakCharacterMovement)
		OakCharacterMovement = BL3Player->OakCharacterMovement;

	if (OakPlayerController)
		RecoilControlComponent = OakPlayerController->RecoilControlComponent;

	if (!PlayerController)
		return PostRender.oFunc(viewportclient, canvas);

	auto PlayerCameraManager = PlayerController->PlayerCameraManager;
	if (!PlayerCameraManager)
		PostRender.oFunc(viewportclient, canvas);

	auto CameraLocation = PlayerCameraManager->GetCameraLocation();
	auto CameraRotation = PlayerCameraManager->GetCameraRotation();

	float ClosestValidActorDistance = FLT_MAX;

	CG::AActor* CVA = nullptr;
	CG::FRotator ClosestValidActor;
	CG::FVector2D CVAScreen;
	bool bIsVisible = false;

	for (int i = 0; i < (**CG::UWorld::GWorld).Levels.Count(); i++)
	{
		CG::ULevel* ptr = (**CG::UWorld::GWorld).Levels[i];
		if (ptr != nullptr)
		{
			auto actors = ptr->NearActors;
			if (!actors.Data() || !actors.Count())
				PostRender.oFunc(viewportclient, canvas);

			for (int j = 0; j < actors.Count(); j++)
			{
				auto actor = actors[j];

				if (actor && actor->RootComponent && actor->IsA(CG::ABPChar_Enemy_C::StaticClass()) && !(actor->GetName().find("BPChar_Siren") != std::string::npos))
				{
					// ESP
					if (((CG::AOakCharacter*)actor)->DeathType != CG::EDeathType::None)
						continue;

					auto pos = actor->RootComponent->RelativeLocation;

					CG::FVector Origin;
					CG::FVector BoxExtent;
					actor->GetActorBounds(true, &Origin, &BoxExtent);

					CG::FVector HeadBone = ((CG::AOakCharacter*)actor)->Mesh->GetSocketLocation(((CG::AOakCharacter*)actor)->Mesh->GetBoneName(40));;	// 14 for most
					CG::FVector TopBone = ((CG::AOakCharacter*)actor)->Mesh->GetSocketLocation(((CG::AOakCharacter*)actor)->Mesh->GetBoneName(8));	// 8 For most
					for (int k = 0; k < ((CG::AOakCharacter*)actor)->Mesh->GetNumBones(); k++)
					{
						if (((CG::AOakCharacter*)actor)->Mesh->GetBoneName(k).GetName() == "Head")
							HeadBone = ((CG::AOakCharacter*)actor)->Mesh->GetSocketLocation(((CG::AOakCharacter*)actor)->Mesh->GetBoneName(k));

						if (((CG::AOakCharacter*)actor)->Mesh->GetBoneName(k).GetName() == "Camera")
							TopBone = ((CG::AOakCharacter*)actor)->Mesh->GetSocketLocation(((CG::AOakCharacter*)actor)->Mesh->GetBoneName(k));
					}
					CG::FVector Head = { TopBone.X, TopBone.Y, TopBone.Z };
					CG::FVector Feet = { Origin.X, Origin.Y, Origin.Z - (BoxExtent.Z) };

					// Draw Bones
					if (bDrawBones)
					{
						for (int k = 0; k < ((CG::AOakCharacter*)actor)->Mesh->GetNumBones(); k++)
						{
							CG::FVector bone = ((CG::AOakCharacter*)actor)->Mesh->GetSocketLocation(((CG::AOakCharacter*)actor)->Mesh->GetBoneName(k));

							CG::FVector2D bonePos;
							if (PlayerController->ProjectWorldLocationToScreen(bone, &bonePos, false, false))
							{
								canvas->K2_DrawText(GlobalFont, std::to_wstring(k).c_str(), bonePos, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);
							}
						}
					}

					bIsVisible = PlayerController->LineOfSightTo(actor, { 0.f, 0.f, 0.f }, false);

					CG::FVector2D HeadPos, FeetPos, head;
					if (PlayerController->ProjectWorldLocationToScreen(Head, &HeadPos, false, false) && PlayerController->ProjectWorldLocationToScreen(Feet, &FeetPos, false, false) && PlayerController->ProjectWorldLocationToScreen(HeadBone, &head, false, false))
					{

						const float Height = abs(FeetPos.Y - HeadPos.Y);
						const float Width = Height * 0.6f;

						CG::FVector2D TopLeft = { HeadPos.X - Width * 0.5f, HeadPos.Y };
						CG::FVector2D DownRight = { HeadPos.X + Width * 0.5f, FeetPos.Y };

						DrawBox(canvas, TopLeft, DownRight, 1.f, bIsVisible, Colors::Cyan, Colors::Red);
						canvas->K2_DrawText(GlobalFont, converter.from_bytes(actor->GetName()).c_str(), { TopLeft.X, TopLeft.Y - 15.f }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

						//canvas->K2_DrawText(GlobalFont, L"HeadPos", HeadPos, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);
						//canvas->K2_DrawText(GlobalFont, L"head", head, Colors::White, false, Colors::Black, {0.f, 0.f}, false, false, true, Colors::Black);

					}	

					CG::FRotator Res = MathLibrary->STATIC_FindLookAtRotation(CameraLocation, HeadBone);

					float DiffY = Res.Pitch - CameraRotation.Pitch;
					float DiffX = Res.Yaw - CameraRotation.Yaw;

					float Distance = sqrt((DiffY * DiffY) + (DiffX * DiffX));

					if (Distance < ClosestValidActorDistance && bIsVisible)
					{
						ClosestValidActorDistance = Distance;

						ClosestValidActor = Res;
						CVAScreen = head;

						CVA = actor;
					}
				}
			}
		}
	}

	if (GetAsyncKeyState(VK_RBUTTON))
	{
		if (ClosestValidActorDistance != FLT_MAX && RecoilControlComponent)
		{
			auto Delta = ClosestValidActor - CameraRotation;
			auto SmoothedAngle = CameraRotation + Delta / smoothing;

			PlayerController->SetControlRotation(SmoothedAngle - RecoilControlComponent->TargetRotation, true);
		}
	}

	//canvas->K2_DrawText(GlobalFont, L"Closest Valid Actor", { CVAScreen.X, CVAScreen.Y + 15 }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	PostRender.oFunc(viewportclient, canvas);
}

bool Init()
{
	// Logging Initalizing SDK Objects
	bool SDK = CG::InitSdk();
	if (!SDK)
		return false;

	// Logging Initalizing Main Globals
	bool Globals = SetupGlobals();
	if (!Globals)
		return false;

	// Setup Features & Hooks, and log it all

	// Get Rid of this because we are switching to ImGUI
	auto ViewportClient = LocalPlayer->ViewportClient;
	void** VFTable = ViewportClient->VfTable;
	PostRender.CreateHook(VFTable, 0x63, &PostRenderHook);
	//

	speedHack.get()->Setup();
	godMode.get()->Setup();
	weaponStuff.get()->Setup();

	return true;
}

DWORD WINAPI MainThread(LPVOID lpParam)
{
	con = &Console::Instance(true);
	if (con != nullptr)
		std::cout << "Console Allocated\n"; // Replace with Logging Create Console

	if (Init())
		std::cout << "BL3 SDK: Initalized\n"; // Replace with Logging SDK full
	else
	{
		std::cout << "BL3 SDK: Failed to Initalize SDK\n"; // Replace with Logging SDK Fully Initalized
		bShouldRun = false;
		lastLoop = true;
	}

	while (bShouldRun)
	{
		speedHack.get()->HandleKeys();
		if (OakCharacterMovement)
		{
			void* speedHackArgs[1] = { OakCharacterMovement };
			speedHack.get()->Run(speedHackArgs, 1);
		}

		godMode.get()->HandleKeys();
		if (AcknowledgedPawn)
		{
			void* godModeArgs[1] = { AcknowledgedPawn };
			godMode.get()->Run(godModeArgs, 1);
		}

		if (BL3Player && RecoilControlComponent)
		{
			void* weaponStuffArgs[2] = { RecoilControlComponent, BL3Player->GetActiveWeapon(NULL) };
			weaponStuff.get()->Run(weaponStuffArgs, 2);
		}

		// Get rid of all this shit key handleing should be done with the Feature classes or in ImGUI
		if (GetAsyncKeyState(UnloadKey) & 0x1)
			bShouldRun = false;

		if (GetAsyncKeyState(VK_NUMPAD4) & 0x1)
		{
			smoothing += 1.0f;
			if (smoothing > 10.f)
				smoothing = 10.f;
		}

		if (GetAsyncKeyState(VK_NUMPAD5) & 0x1)
		{
			smoothing -= 1.0f;
			if (smoothing < 1.f)
				smoothing = 1.f;
		}

		if (GetAsyncKeyState(VK_ADD) & 0x1)
			bDrawBones = !bDrawBones;

		// This needs to stay thiss will just be an endless loop that stops the cheat from closing until its supposed too
		//std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Change to 100ms
	}

	// Restore hooked functions

	std::cout << "BL3 SDK: Unloading...\n"; // Replace with Logging SDK Unloading

	while (!lastLoop) // Find out if this can be removed (should be easy once ImGui is setup)
		continue;

	// Leave this alone
	std::this_thread::sleep_for(std::chrono::seconds(3));
	FreeLibraryAndExitThread((HMODULE)lpParam, EXIT_SUCCESS);
	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall == DLL_PROCESS_ATTACH)
	{
		CreateThread(nullptr, NULL, MainThread, hModule, NULL, nullptr);
	}

	if (ulReasonForCall == DLL_PROCESS_DETACH)
	{
		if (con && con->IsAllocated())
			con->Free();

		speedHack.get()->Destroy();
		godMode.get()->Destroy();
	}

	return TRUE;
}
