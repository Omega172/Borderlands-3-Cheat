﻿#pragma once

/**
 * Name: Borderlands_3
 * Version: OAK-PATCHWIN640-328
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ShieldAug_VAMP.ShieldAug_VAMP_C
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UShieldAug_VAMP_C : public UShieldAugment_Amp
	{
	public:
		void K2_OnWeaponShotModified(class AShield* Shield, struct FAugmentData* StackData, class AWeapon* Weapon, const struct FWeaponShotModifierData& Data);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
