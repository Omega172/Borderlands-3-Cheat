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
	 * BlueprintGeneratedClass A_PetJabbermon_GrandSlam.A_PetJabbermon_GrandSlam_C
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class UA_PetJabbermon_GrandSlam_C : public UA_Pet_AttackCommand_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) Transient, DuplicateTransient

	public:
		void OnBegin(class AActor* Actor);
		void Notify_Melee();
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void Notify_BatVis();
		void ExecuteUbergraph_A_PetJabbermon_GrandSlam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
