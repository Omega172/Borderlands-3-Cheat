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
	 * BlueprintGeneratedClass Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C
	 * Size -> 0x0058 (FullSize[0x0208] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_ExperimentalMunitions_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Gunner_ExperimentalMunitions; // 0x01B8(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_ExperimentalMunitions; // 0x01E0(0x0028)

	public:
		void OnActivated();
		void ExperimentalMunitions_IronBearReady(class AOakCharacter_IronBear* IronBear);
		void ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
