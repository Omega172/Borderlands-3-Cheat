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
	 * BlueprintGeneratedClass Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UAction_Melee_Operative_Miss_C : public UAction_Melee_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) Transient, DuplicateTransient

	public:
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBeginBringUpWeapon(class AActor* Actor);
		void TurnOnOperativeBlades();
		void TurnOffOperativeBlades();
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_Melee_Operative_Miss(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
