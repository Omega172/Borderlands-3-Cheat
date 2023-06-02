#pragma once
#include "pch.h"

class Unreal
{
public:
	// Globals
	CG::UKismetMathLibrary* MathLibrary = nullptr;

	CG::UGameInstance* GameInstance = nullptr;
	CG::ULocalPlayer* LocalPlayer = nullptr;
	CG::APlayerController* PlayerController = nullptr;
	CG::APawn* AcknowledgedPawn = nullptr;
	CG::ABPChar_Player_C* BL3Player = nullptr;
	CG::AOakPlayerController* OakPlayerController = nullptr;
	CG::UOakCharacterMovementComponent* OakCharacterMovement = nullptr;
	CG::URecoilControlComponent* RecoilControlComponent = nullptr;

	void Refresh()
	{
		if (LocalPlayer && (!PlayerController || PlayerController != LocalPlayer->PlayerController))
			PlayerController = LocalPlayer->PlayerController;

		if (!AcknowledgedPawn && PlayerController)
			AcknowledgedPawn = PlayerController->AcknowledgedPawn;

		if (!BL3Player)
			BL3Player = (CG::ABPChar_Player_C*)AcknowledgedPawn;

		if (BL3Player && BL3Player->IsControlled() && !OakPlayerController)
				OakPlayerController = BL3Player->OakPlayerController;

		if (BL3Player && !OakCharacterMovement)
			OakCharacterMovement = BL3Player->OakCharacterMovement;

		if (OakPlayerController)
			RecoilControlComponent = OakPlayerController->RecoilControlComponent;
	}
};