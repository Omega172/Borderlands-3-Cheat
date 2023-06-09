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
	 * BlueprintGeneratedClass Passive_Beastmaster_Bond_Frenzy.Passive_Beastmaster_Bond_Frenzy_C
	 * Size -> 0x003D (FullSize[0x01ED] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Bond_Frenzy_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Bond_Frenzy; // 0x01B8(0x0028)
		class UBPEventHub_Beastmaster_C*                           OwnerEventHub;                                           // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Frenzy_FrenzyStacks;                                     // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasTriggeredRecently;                                   // 0x01EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetManualHUDIconValues(int32_t* outStackCount, float* outDuration, float* outTimeRemaining);
		void OnActivated();
		void PetCausedAnyDamage_BondFrenzy(class AActor* DamagedActor, class UDamageSource* DamageSource);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_Passive_Beastmaster_Bond_Frenzy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
