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
	 * BlueprintGeneratedClass Ability_Gunner_IronCubActiveDamage.Ability_Gunner_IronCubActiveDamage_C
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UAbility_Gunner_IronCubActiveDamage_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x0100(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void ChangedSkill(class UOakPlayerAbilitySlotData* SlotData);
		void IronCubStarted(class UOakActionAbility* ActionAbility);
		void IronCubEnded(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_Ability_Gunner_IronCubActiveDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
