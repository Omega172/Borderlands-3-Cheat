#include "pch.h"
#include "Utils/Console/Console.hpp"

#include <chrono>
#include <thread>
#include <locale>
#include <codecvt>

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

DWORD MenuKey = VK_INSERT;
DWORD UnloadKey = VK_END;

Console* con = nullptr;

std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

float speedVal = 5.0f;

int post_render_index = 0x63;
using fn = void(__thiscall*)(CG::UObject*, CG::UObject*);

DWORD oldProtect = 0;
fn oPostRender = 0;

CG::UFont* GlobalFont = nullptr;

CG::FLinearColor Cyan = { 0.f, 1.f, 1.f, 1.f };
CG::FLinearColor Black = { 0.f, 0.f, 0.f, 1.f };
CG::FLinearColor White = { 1.f, 1.f, 1.f, 1.f };

void PostRenderHook(CG::UObject* viewportclient, CG::UCanvas* canvas)
{
	if (GlobalFont == nullptr)
		oPostRender(viewportclient, canvas);

	canvas->K2_DrawText(GlobalFont, L"OmegaWare.xyz", { 10.f, 10.f }, Cyan, false, Black, { 0.f, 0.f }, false, false, true, Black);

	std::wstring SpeedLabel = L"SpeedHack: ";
	SpeedLabel += std::to_wstring(speedVal);

	canvas->K2_DrawText(GlobalFont, SpeedLabel.c_str(), {10.f, 25.f}, White, false, Black, {0.f, 0.f}, false, false, true, Black);

	for (int i = 0; i < (**CG::UWorld::GWorld).Levels.Count(); i++)
	{
		CG::ULevel* ptr = (**CG::UWorld::GWorld).Levels[i];
		if (ptr != nullptr)
		{
			auto actors = ptr->NearActors;
			for (int j = 0; j < actors.Count(); j++)
			{
				auto actor = actors[j];
				
				if (actor != nullptr && actor->IsA(CG::AOakCharacter::StaticClass()))
				{					
					if (((CG::AOakCharacter*)actor)->DeathType != CG::EDeathType::None)
						continue;

					auto GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
					auto LocalPlayer = GameInstance->LocalPlayers[0];
					auto PlayerController = LocalPlayer->PlayerController;

					auto pos = actor->RootComponent->RelativeLocation;

					CG::FVector2D screen;
					if (PlayerController->ProjectWorldLocationToScreen(pos, &screen, false, false))
					{
						canvas->K2_DrawText(GlobalFont, converter.from_bytes(actor->GetName()).c_str(), screen, White, false, Black, {0.f, 0.f}, false, false, true, Black);
					}
				}
			}
		}
	}

	oPostRender(viewportclient, canvas);
}

void ListActors(CG::ULevel* level)
{
	if (level != nullptr)
	{
		auto actors = level->NearActors;

		std::cout << "Level: 0x" << std::hex << (uintptr_t)level << std::endl;
		std::cout << "Total Actors: " << std::dec << actors.Count() << std::endl;

		for (int j = 0; j < actors.Count(); j++)
		{
			CG::AActor* actor = actors[j];

			if (actor != nullptr)
			{
				std::cout << "[" << j << "]\t" << "Address: 0x" << std::hex << (uintptr_t)actor << "\tClass: " << actor->Class->GetName() << std::dec << std::endl;
			}
		}
	}
}

DWORD WINAPI MainThread(LPVOID lpParam)
{
	bool bShouldRun = true;

	con = &Console::Instance(true);

	if (!CG::InitSdk())
	{
		std::cout << "BL3 SDK: Failed to Initalize SDK\n";
		bShouldRun = false;
	}
	else
	{
		auto GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
		auto LocalPlayer = GameInstance->LocalPlayers[0];
		auto ViewportClient = LocalPlayer->ViewportClient;
		void** VFTable = ViewportClient->VfTable;

		GlobalFont = CG::UObject::FindObject<CG::UFont>("Font Roboto.Roboto");

		VirtualProtect(&VFTable[post_render_index], 8, PAGE_EXECUTE_READWRITE, &oldProtect);

		oPostRender = reinterpret_cast<decltype(oPostRender)>(VFTable[post_render_index]);
		VFTable[post_render_index] = &PostRenderHook;

		VirtualProtect(&VFTable[post_render_index], 8, oldProtect, 0);
	}

	std::cout << "BL3 SDK: Initalized\n";

	std::cout << "GObjects: 0x"	<< std::hex << CG::UObject::GObjects	<< std::endl;
	std::cout << "GNames: 0x"	<< std::hex << CG::FName::GNames		<< std::endl;
	std::cout << "GWorld 0x"	<< std::hex << CG::UWorld::GWorld		<< std::endl;

	/*for (int i = 0; i < (*CG::UWorld::GWorld)->Levels.Count(); i++)
	{
		CG::ULevel* level = (*CG::UWorld::GWorld)->Levels[i];

		if (level != nullptr)
			ListActors(level);
	}*/

	/*auto objects = CG::UObject::FindObjects<CG::UFont>();

	for (auto obj : objects)
		std::cout << "[" << obj->GetFullName() << "]" << std::endl;*/

	bool bSpeed = false;
	float oldVal;

	while (bShouldRun)
	{
		if (GetAsyncKeyState(MenuKey) & 0x1)
			if (con && con->IsAllocated())
				con->ToggleVisibility();

		if (GetAsyncKeyState(UnloadKey) & 0x1)
			bShouldRun = false;

		if (GetAsyncKeyState(VK_LSHIFT))
		{
			if (!bSpeed)
			{
				auto GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
				auto LocalPlayer = GameInstance->LocalPlayers[0];

				std::cout << "LocalPlayer Class: " << LocalPlayer->GetName() << std::endl;

				auto PlayerController = LocalPlayer->PlayerController;
				auto AcknowledgedPawn = PlayerController->AcknowledgedPawn;

				std::cout << "AcknowledgedPawn Class: " << AcknowledgedPawn->GetName() << std::endl;

				oldVal = AcknowledgedPawn->CustomTimeDilation;
				AcknowledgedPawn->CustomTimeDilation = speedVal;

				bSpeed = true;

				std::cout << "ON\n";
			}
		}
		else
		{
			if (bSpeed)
			{
				auto GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
				auto LocalPlayer = GameInstance->LocalPlayers[0];
				auto PlayerController = LocalPlayer->PlayerController;
				auto AcknowledgedPawn = PlayerController->AcknowledgedPawn;

				AcknowledgedPawn->CustomTimeDilation = oldVal;

				bSpeed = false;

				std::cout << "OFF\n";
			}
		}

		if (GetAsyncKeyState(VK_NUMPAD1) & 0x1)
			speedVal += 1.0f;

		if (GetAsyncKeyState(VK_NUMPAD2) & 0x1)
			speedVal -= 1.0f;

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	std::cout << "BL3 SDK: Unloading...\n";

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

		auto GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
		auto LocalPlayer = GameInstance->LocalPlayers[0];
		auto ViewportClient = LocalPlayer->ViewportClient;
		void** VFTable = ViewportClient->VfTable;

		VirtualProtect(&VFTable[post_render_index], 8, PAGE_EXECUTE_READWRITE, &oldProtect);

		VFTable[post_render_index] = oPostRender;

		VirtualProtect(&VFTable[post_render_index], 8, oldProtect, 0);
	}

	return TRUE;
}
