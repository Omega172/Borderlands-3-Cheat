#include "pch.h"
#include "WeaponStuff.h"

void WeaponStuff::Run(void** args, size_t numArgs)
{
	if (!Initalized)
		return;

	if (numArgs != 2)
	{
		std::cout << "Too many or too little args passed to WeaponStuff, Destryoing...\n";
		Destroy();
		return;
	}

	CG::URecoilControlComponent* RecoilControlComponent = (CG::URecoilControlComponent*)args[0];
	CG::AWeapon* CurrentWeapon = (CG::AWeapon*)args[1];

	if (RecoilControlComponent && bNoRecoil)
	{
		RecoilControlComponent->TargetRotation = { 0.f, 0.f, 0.f };
	}

	if (CurrentWeapon)
	{
		CG::UWeaponFireComponent* CurrentFireComponent = CurrentWeapon->CurrentFireComponent;

		if (CurrentFireComponent)
		{
			//CurrentFireComponent->FireRate.Value = 100;
			//CurrentFireComponent->DamageType = CG::UDmgType_Corrosive_Impact_C::StaticClass();
			//CurrentFireComponent->DamageSource = CG::UDamageSource_Bullet_Heavy_C::StaticClass();

			if (bNoSpread)
			{
				if (!bNoSpreadSwitch || pOldWeapon != CurrentWeapon)
				{
					if (bNoSpreadSwitch && pOldWeapon != CurrentWeapon)
					{
						pOldWeapon->CurrentFireComponent->Spread.Value = fOldSpreadValue;
						pOldWeapon->CurrentFireComponent->Spread.BaseValue = fOldSpreadBaseValue;

						pOldWeapon->CurrentFireComponent->AccuracyImpulse.Value = fOldAccuracyImpulseValue;
						pOldWeapon->CurrentFireComponent->AccuracyImpulse.BaseValue = fOldAccuracyImpulseBaseValue;

						pOldWeapon->CurrentFireComponent->BurstAccuracyImpulseScale.Value = fOldBurstAccuracyImpulseScaleValue;
						pOldWeapon->CurrentFireComponent->BurstAccuracyImpulseScale.BaseValue = fOldBurstAccuracyImpulseScaleBaseValue;
					}

					fOldSpreadValue = CurrentFireComponent->Spread.Value;
					fOldSpreadBaseValue = CurrentFireComponent->Spread.BaseValue;

					fOldAccuracyImpulseValue = CurrentFireComponent->AccuracyImpulse.Value;
					fOldAccuracyImpulseBaseValue = CurrentFireComponent->AccuracyImpulse.BaseValue;

					fOldBurstAccuracyImpulseScaleValue = CurrentFireComponent->BurstAccuracyImpulseScale.Value;
					fOldBurstAccuracyImpulseScaleBaseValue = CurrentFireComponent->BurstAccuracyImpulseScale.BaseValue;

					bNoSpreadSwitch = true;
				}

				CurrentFireComponent->Spread.Value = NULL;
				CurrentFireComponent->Spread.BaseValue = NULL;

				CurrentFireComponent->AccuracyImpulse.Value = NULL;
				CurrentFireComponent->AccuracyImpulse.BaseValue = NULL;

				CurrentFireComponent->BurstAccuracyImpulseScale.Value = NULL;
				CurrentFireComponent->BurstAccuracyImpulseScale.BaseValue = NULL;

				//CurrentFireComponent->ViewModelShotOffsetScale = 0;
			}
			else if (!bNoSpread)
				bNoSpreadSwitch = false;

			if (bInfiniteAmmo)
			{
				if (!bInfiniteAmmoSwitch || pOldWeapon != CurrentWeapon)
				{
					if (bInfiniteAmmoSwitch && pOldWeapon != CurrentWeapon)
					{
						pOldWeapon->CurrentFireComponent->ShotAmmoCost.Value = iOldShotAmmoCost;
						pOldWeapon->CurrentFireComponent->MinShotAmmoCost = iOldMinShotAmmoCost;
					}

					iOldShotAmmoCost = CurrentFireComponent->ShotAmmoCost.Value;
					iOldMinShotAmmoCost = CurrentFireComponent->MinShotAmmoCost;

					bInfiniteAmmoSwitch = true;
				}

				CurrentFireComponent->ShotAmmoCost.Value = 0;
				CurrentFireComponent->MinShotAmmoCost = 0;
			}
			else if (!bInfiniteAmmo)
				bInfiniteAmmoSwitch = false;
		}

		pOldWeapon = CurrentWeapon;
	}
}
