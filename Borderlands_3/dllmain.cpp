#include "pch.h"

#include "Kiero/kiero.h"
#include "Hooks/D3D11/D3D11Hooks.h"

#include "Unreal.h"
#include "Features/SpeedHack.h"
#include "Features/GodMode.h"
#include "Features/WeaponStuff.h"
#include "Features/Fly.h"

#include <chrono>
#include <thread>
#include <locale>
#include <codecvt>
#include <fstream>
#include <shlobj.h>

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

// Move this stuff to their respective locations if needed Ex. GUI Handling
DWORD MenuKey = VK_INSERT;
DWORD UnloadKey = VK_END;

// Globals
inline std::unique_ptr<Unreal> unreal = std::make_unique<Unreal>();

// Features 2.0
inline std::unique_ptr<SpeedHack> speedHack = std::make_unique<SpeedHack>();
inline std::unique_ptr<GodMode> godMode = std::make_unique<GodMode>();
inline std::unique_ptr<WeaponStuff> weaponStuff = std::make_unique<WeaponStuff>();
inline std::unique_ptr<FlyHack> flyHack = std::make_unique<FlyHack>();

bool Init()
{
	// Setup ImGUI
	if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
	{
		if (kiero::bind(8, (void**)&oPresent, hkPresent) != kiero::Status::Success)
			return false;
	}

	// Logging Initalizing SDK Objects
	bool SDK = CG::InitSdk();
	if (!SDK)
		return false;

	if (!(*CG::UWorld::GWorld))
		std::cout << "Waiting for GWorld to initalize\n";

	while (!(*CG::UWorld::GWorld))
		continue;

	// Logging Initalizing Main Globals
	std::cout << "Initalizing Globals\n";

	auto pUnreal = unreal.get();
	pUnreal->GameInstance = (*CG::UWorld::GWorld)->OwningGameInstance;
	if (!pUnreal->GameInstance || !pUnreal->GameInstance->LocalPlayers.Count())
		return false;

	pUnreal->LocalPlayer = pUnreal->GameInstance->LocalPlayers[0];
	if (!pUnreal->LocalPlayer)
		return false;

	pUnreal->MathLibrary = (CG::UKismetMathLibrary*)CG::UKismetMathLibrary::StaticClass();
	if (!pUnreal->MathLibrary)
		return false;

	std::cout << "Globals Initalized\n";

	// Setup Features & Hooks, and log it all
	speedHack.get()->Setup();
	godMode.get()->Setup();
	weaponStuff.get()->Setup();
	flyHack.get()->Setup();

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
	}

	while (bShouldRun)
	{
		auto pUnreal = unreal.get();

		if (pUnreal->OakCharacterMovement)
		{
			void* movementArgs[1] = { pUnreal->OakCharacterMovement };
			speedHack.get()->Run(movementArgs, 1);

			flyHack.get()->Run(movementArgs, 1);
		}

		if (pUnreal->AcknowledgedPawn)
		{
			void* godModeArgs[1] = { pUnreal->AcknowledgedPawn };
			godMode.get()->Run(godModeArgs, 1);
		}

		if (pUnreal->BL3Player && pUnreal->RecoilControlComponent)
		{
			void* weaponStuffArgs[2] = { pUnreal->RecoilControlComponent, pUnreal->BL3Player->GetActiveWeapon(NULL) };
			weaponStuff.get()->Run(weaponStuffArgs, 2);
		}

		if (GetAsyncKeyState(UnloadKey) & 0x1)
			bShouldRun = false;

		if (GetAsyncKeyState(MenuKey) & 0x1)
			GUI::bMenuOpen = !GUI::bMenuOpen;

		if (GetAsyncKeyState(VK_MBUTTON) & 0x1)
		{
			if (pUnreal->TargetEnt != nullptr)
			{
				auto Target = pUnreal->TargetEnt;
				auto NumBones = Target->Mesh->GetNumBones();

				CHAR DocumentsFolder[MAX_PATH];
				HRESULT result = SHGetFolderPathA(NULL, CSIDL_MYDOCUMENTS, NULL, SHGFP_TYPE_CURRENT, DocumentsFolder);

				if (result == S_OK)
				{
					std::string Filename = DocumentsFolder;
					Filename += "\\OmegaWare\\Borderlands 3\\";

					Filename += Target->GetName();
					Filename += ".txt";

					std::ofstream OutputFile;
					OutputFile.open(Filename);
					OutputFile << "# of Bones: " << NumBones << std::endl << std::endl;

					std::cout << "Attempting to dump bone info\n";

					for (int k = 0; k < NumBones; k++)
					{
						std::string BoneName = Target->Mesh->GetBoneName(k).GetName();

						OutputFile << k << ": " << BoneName << std::endl;
					}

					OutputFile.close();
				}
			}
		}
	}

	// Restore hooked functions
	kiero::shutdown();

	if (con && con->IsAllocated())
		con->SetVisibility(true);

	std::cout << "BL3 SDK: Unloading...\n"; // Replace with Logging SDK Unloading

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
