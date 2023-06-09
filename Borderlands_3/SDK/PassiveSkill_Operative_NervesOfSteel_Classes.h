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
	 * BlueprintGeneratedClass PassiveSkill_Operative_NervesOfSteel.PassiveSkill_Operative_NervesOfSteel_C
	 * Size -> 0x0030 (FullSize[0x01E0] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Operative_NervesOfSteel_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ResourcePoolDelegate  RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_PassiveSkill_Operative_InTheZone; // 0x01B8(0x0028)

	public:
		EGbxAbilityState CalculateAbilityState();
		void OnActivated();
		void InTheZone_OnResourcePoolFilled(const struct FGameResourcePoolReference& ResourcePool);
		void InTheZone_OnResourcePoolNotFilled(const struct FGameResourcePoolReference& ResourcePool);
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void OnResumed();
		void OnPaused();
		void ExecuteUbergraph_PassiveSkill_Operative_NervesOfSteel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
