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
	 * BlueprintGeneratedClass Ability_Beast_GravitySnareActiveDamage.Ability_Beast_GravitySnareActiveDamage_C
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UAbility_Beast_GravitySnareActiveDamage_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x0100(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void GravitySnareStarted(Enum_BeastmasterActionSkill ActionSkill);
		void GravitySnareEnded(class UOakActionAbility* ActionAbility);
		void ChangedSkill(class UOakPlayerAbilitySlotData* SlotData);
		void ExecuteUbergraph_Ability_Beast_GravitySnareActiveDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
