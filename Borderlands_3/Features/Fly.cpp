#include "pch.h"
#include "Fly.h"
#include "../Unreal.h"

inline std::unique_ptr<Unreal> unreal;

void FlyHack::Run(void** args, size_t numArgs)
{
	if (!Initalized)
		return;

	if (numArgs != 1)
	{
		std::cout << "Too many or too little args passed to FlyHack, Destryoing...\n";
		Destroy();
		return;
	}

	CG::UOakCharacterMovementComponent* OakCharacterMovement = (CG::UOakCharacterMovementComponent*)args[0];

	HandleKeys();

	if (OakCharacterMovement)
	{
		if (bEnabled)
		{
			if (!bFlySwitch)
			{
				OakCharacterMovement->MovementMode = CG::EMovementMode::MOVE_Flying;

				fOldFlySpeed = OakCharacterMovement->MaxFlySpeed.Value;
				OakCharacterMovement->MaxFlySpeed.Value = fOldFlySpeed * fSpeed;

				if (bNoClip && unreal.get()->BL3Player->GetActorEnableCollision())
					unreal.get()->BL3Player->SetActorEnableCollision(false);

				bFlySwitch = true;
			}
		}
		else
		{
			if (bFlySwitch)
			{
				OakCharacterMovement->MovementMode = CG::EMovementMode::MOVE_Walking;
				OakCharacterMovement->MaxFlySpeed.Value = fOldFlySpeed;

				if (!unreal.get()->BL3Player->GetActorEnableCollision())
					unreal.get()->BL3Player->SetActorEnableCollision(true);

				bFlySwitch = false;
			}
		}
	}
}
