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
	 * BlueprintGeneratedClass A_DigiClone_Idle2.A_DigiClone_Idle2_C
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class UA_DigiClone_Idle2_C : public UGBXAction_EnemyVariableParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) Transient, DuplicateTransient

	public:
		void OnBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_A_DigiClone_Idle2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
