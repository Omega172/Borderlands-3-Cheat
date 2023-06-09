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
	 * BlueprintGeneratedClass PassiveSkill_Gunner_AceUpIronBear.PassiveSkill_Gunner_AceUpIronBear_C
	 * Size -> 0x0034 (FullSize[0x01E4] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Gunner_AceUpIronBear_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Gunner_AceUpIronBear; // 0x01B8(0x0028)
		int32_t                                                    nGrenadeThrownCounter;                                   // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryGrenadeDrop();
		void OnActivated();
		void DownStateStart_AceUpIronBear();
		void DownStateStop_AceUpIronBear();
		void GrenadeTossed_AceUpIronBear();
		void OnResumed();
		void OnPaused();
		void OnDeactivated();
		void ExecuteUbergraph_PassiveSkill_Gunner_AceUpIronBear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
