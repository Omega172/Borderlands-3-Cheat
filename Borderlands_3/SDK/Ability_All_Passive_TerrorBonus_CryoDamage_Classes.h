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
	 * BlueprintGeneratedClass Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C
	 * Size -> 0x0070 (FullSize[0x0168] - InheritedSize[0x00F8])
	 */
	class UAbility_All_Passive_TerrorBonus_CryoDamage_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GenerateTerrorRate;                                      // 0x0108(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        GenerateTerrorDuration;                                  // 0x0110(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ResourcePoolDelegate  RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_All_Passive_TerrorBonus_CryoDamage; // 0x0118(0x0028)
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Passive_TerrorBonus_CryoDamage; // 0x0140(0x0028)

	public:
		void OnActivated();
		void CheckTerror(const struct FGameResourcePoolReference& ResourcePool);
		void TerrorDepleted(const struct FGameResourcePoolReference& ResourcePool);
		void ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
