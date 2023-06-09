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
	 * BlueprintGeneratedClass Ability_Artifact_Safegaurd.Ability_Artifact_Safegaurd_C
	 * Size -> 0x0036 (FullSize[0x0150] - InheritedSize[0x011A])
	 */
	class UAbility_Artifact_Safegaurd_C : public UBP_InventoryAbility_C
	{
	public:
		unsigned char                                              UnknownData_6GPA[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Artifact_Cauterizer; // 0x0128(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void SlamEnd(const struct FGroundSlamEndedDetails& Details);
		void ExecuteUbergraph_Ability_Artifact_Safegaurd(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
