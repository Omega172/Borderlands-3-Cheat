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
	 * BlueprintGeneratedClass Ability_GuardianRank_CmonAndSlam.Ability_GuardianRank_CmonAndSlam_C
	 * Size -> 0x0008 (FullSize[0x01B8] - InheritedSize[0x01B0])
	 */
	class UAbility_GuardianRank_CmonAndSlam_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient

	public:
		void OnActivated();
		void OnDeactivated();
		void ExecuteUbergraph_Ability_GuardianRank_CmonAndSlam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
