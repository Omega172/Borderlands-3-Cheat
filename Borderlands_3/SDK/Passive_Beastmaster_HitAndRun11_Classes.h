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
	 * BlueprintGeneratedClass Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C
	 * Size -> 0x0034 (FullSize[0x01E4] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_HitAndRun11_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_HitAndRun11; // 0x01B8(0x0028)
		float                                                      FullHealthMultiplier;                                    // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void OnActionSkillActivated_HitAndRun11(class UOakActionAbility* ActionAbility);
		void ExecuteUbergraph_Passive_Beastmaster_HitAndRun11(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
