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
	 * BlueprintGeneratedClass Passive_Siren_Wrath.Passive_Siren_Wrath_C
	 * Size -> 0x0008 (FullSize[0x01E8] - InheritedSize[0x01E0])
	 */
	class UPassive_Siren_Wrath_C : public UPassiveSkill_Siren_ActionAbilityTriggered_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient

	public:
		void SirenActionAbilityTrigger();
		void ExecuteUbergraph_Passive_Siren_Wrath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
