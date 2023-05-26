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
	 * BlueprintGeneratedClass Ability_Weapon_FrozenDevil.Ability_Weapon_FrozenDevil_C
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UAbility_Weapon_FrozenDevil_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Weapon_CloudKill; // 0x0100(0x0028)

	public:
		void OnRegistered();
		void OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ExecuteUbergraph_Ability_Weapon_FrozenDevil(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
