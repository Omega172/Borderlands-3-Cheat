#include "pch.h"
#include "Utils/Console/Console.hpp"
#include "Utils/Hooking/Hook.h"
#include "Render.h"

#include <chrono>
#include <thread>
#include <locale>
#include <codecvt>

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

DWORD MenuKey = VK_INSERT;
DWORD UnloadKey = VK_END;
Console* con = nullptr;
std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

// Globals
CG::UGameInstance* GameInstance = nullptr;
CG::ULocalPlayer* LocalPlayer = nullptr;
CG::UFont* GlobalFont = nullptr;

void RefreshGlobals()
{

	if ((*CG::UWorld::GWorld) && !GameInstance)
		GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;

	if (GameInstance->LocalPlayers.Count())
		LocalPlayer = GameInstance->LocalPlayers[0];

	if (!GlobalFont)
		GlobalFont = CG::UObject::FindObject<CG::UFont>("Font Roboto.Roboto");
}

// Hooks
Hook<void(__thiscall*)(CG::UObject*, CG::UCanvas*)> PostRender;

// Features
float speedVal = 5.0f;
float bDrawBones = false;

void PostRenderHook(CG::UObject* viewportclient, CG::UCanvas* canvas)
{
	RefreshGlobals();

	if (!(*CG::UWorld::GWorld) || !GlobalFont)
		PostRender.oFunc(viewportclient, canvas);

	canvas->K2_DrawText(GlobalFont, L"OmegaWare.xyz", { 10.f, 10.f }, Colors::Cyan, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	std::wstring SpeedLabel = L"SpeedHack: ";
	SpeedLabel += std::to_wstring(speedVal);
	canvas->K2_DrawText(GlobalFont, SpeedLabel.c_str(), { 10.f, 25.f }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	auto PlayerController = LocalPlayer->PlayerController;

	auto PlayerCameraManager = PlayerController->PlayerCameraManager;

	if (!PlayerCameraManager)
		PostRender.oFunc(viewportclient, canvas);

	auto CameraLocation = PlayerCameraManager->GetCameraLocation();
	auto CameraRotation = PlayerCameraManager->GetCameraRotation();

	float ClosestValidActorDistance = FLT_MAX;

	CG::FRotator ClosestValidActor;
	CG::FVector2D CVAScreen;

	for (int i = 0; i < (**CG::UWorld::GWorld).Levels.Count(); i++)
	{
		CG::ULevel* ptr = (**CG::UWorld::GWorld).Levels[i];
		if (ptr != nullptr)
		{
			auto actors = ptr->NearActors;
			for (int j = 0; j < actors.Count(); j++)
			{
				auto actor = actors[j];

				if (actor && actor->RootComponent && actor->IsA(CG::AOakCharacter::StaticClass()) && !(actor->GetName().find("BPChar_Siren") != std::string::npos))
				{
					// ESP
					if (((CG::AOakCharacter*)actor)->DeathType != CG::EDeathType::None)
						continue;

					auto pos = actor->RootComponent->RelativeLocation;

					CG::FVector Origin;
					CG::FVector BoxExtent;
					actor->GetActorBounds(true, &Origin, &BoxExtent);

					CG::FVector HeadBone;	// 14 
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

					bool bIsVisible = PlayerController->LineOfSightTo(actor, { 0.f, 0.f, 0.f }, false);

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

					auto MathLibrary = (CG::UKismetMathLibrary*)CG::UKismetMathLibrary::StaticClass();
					CG::FRotator Res = MathLibrary->STATIC_FindLookAtRotation(CameraLocation, HeadBone);

					float DiffY = Res.Pitch - CameraRotation.Pitch;
					float DiffX = Res.Yaw - CameraRotation.Yaw;

					float Distance = sqrt((DiffY * DiffY) + (DiffX * DiffX));

					if (Distance < ClosestValidActorDistance && bIsVisible)
					{
						ClosestValidActorDistance = Distance;

						ClosestValidActor = Res;
						CVAScreen = head;
					}
				}
			}
		}
	}

	if (ClosestValidActorDistance != FLT_MAX && GetAsyncKeyState(VK_RBUTTON))
	{
		PlayerController->SetControlRotation(ClosestValidActor, true);
	}

	//canvas->K2_DrawText(GlobalFont, L"Closest Valid Actor", { CVAScreen.X, CVAScreen.Y + 15 }, Colors::White, false, Colors::Black, { 0.f, 0.f }, false, false, true, Colors::Black);

	PostRender.oFunc(viewportclient, canvas);
}

void SetupHooks();

DWORD WINAPI MainThread(LPVOID lpParam)
{
	bool bShouldRun = true;

	con = &Console::Instance(true);

	if (CG::InitSdk())
	{
		std::cout << "GObjects: 0x" << std::hex << CG::UObject::GObjects << std::endl;
		std::cout << "GNames: 0x" << std::hex << CG::FName::GNames << std::endl;
		std::cout << "GWorld 0x" << std::hex << CG::UWorld::GWorld << std::endl;

		while (!(*CG::UWorld::GWorld))
			continue;

		RefreshGlobals();
		SetupHooks();

		std::cout << "BL3 SDK: Initalized\n";
	}
	else
	{
		std::cout << "BL3 SDK: Failed to Initalize SDK\n";
		bShouldRun = false;
	}

	bool bSpeed = false;
	float oldVal;

	while (bShouldRun)
	{
		if (GetAsyncKeyState(MenuKey) & 0x1)
			if (con && con->IsAllocated())
				con->ToggleVisibility();

		if (GetAsyncKeyState(UnloadKey) & 0x1)
			bShouldRun = false;

		if (GetAsyncKeyState(VK_LSHIFT) && LocalPlayer)
		{
			if (!bSpeed)
			{
				auto PlayerController = LocalPlayer->PlayerController;
				auto AcknowledgedPawn = PlayerController->AcknowledgedPawn;

				if (AcknowledgedPawn)
				{
					oldVal = AcknowledgedPawn->CustomTimeDilation;
					AcknowledgedPawn->CustomTimeDilation = speedVal;
				}

				bSpeed = true;
			}
		}
		else
		{
			if (bSpeed)
			{
				auto PlayerController = LocalPlayer->PlayerController;
				auto AcknowledgedPawn = PlayerController->AcknowledgedPawn;
				
				if (AcknowledgedPawn)
				{
					AcknowledgedPawn->CustomTimeDilation = oldVal;
				}

				bSpeed = false;
			}
		}

		if (GetAsyncKeyState(VK_NUMPAD1) & 0x1)
			speedVal += 1.0f;

		if (GetAsyncKeyState(VK_NUMPAD2) & 0x1)
		{
			speedVal -= 1.0f;
			if (speedVal < 1.f)
				speedVal = 1.f;
		}

		if (GetAsyncKeyState(VK_ADD) & 0x1)
			bDrawBones = !bDrawBones;

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	std::cout << "BL3 SDK: Unloading...\n";

	std::this_thread::sleep_for(std::chrono::seconds(3));
	FreeLibraryAndExitThread((HMODULE)lpParam, EXIT_SUCCESS);
	return TRUE;
}

void SetupHooks()
{
	auto ViewportClient = LocalPlayer->ViewportClient;
	void** VFTable = ViewportClient->VfTable;
	PostRender.CreateHook(VFTable, 0x63, &PostRenderHook);
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

		PostRender.RestoreHook();
	}

	return TRUE;
}
