#include "pch.h"
#include "SpeedHack.h"

void SpeedHack::Run(void** args, size_t numArgs)
{
	if (!Initalized)
		return;

	if (numArgs != 1)
	{
		std::cout << "Too many or too little args passed to SpeedHack, Destryoing...\n";
		Destroy();
		return;
	}

	CG::UOakCharacterMovementComponent* OakCharacterMovement = (CG::UOakCharacterMovementComponent*)args[0];

	if (OakCharacterMovement)
	{
		if (OakCharacterMovement->bIsSprinting)
		{
			if (!bSpeedSwitch)
			{
				fOldSpeed = OakCharacterMovement->MaxSprintSpeed.Value;

				OakCharacterMovement->MaxSprintSpeed.Value = fOldSpeed * fSpeed;

				bSpeedSwitch = true;
			}
		}
		else
		{
			if (bSpeedSwitch)
			{
				OakCharacterMovement->MaxSprintSpeed.Value = fOldSpeed;

				bSpeedSwitch = false;
			}

		}
	}
}
