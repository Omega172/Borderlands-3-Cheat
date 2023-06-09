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
	 * BlueprintGeneratedClass Action_PS_ATL_Reload_01.Action_PS_ATL_Reload_01_C
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class UAction_PS_ATL_Reload_01_C : public UAction_Weapon_Reload_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) Transient, DuplicateTransient

	public:
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void ExecuteUbergraph_Action_PS_ATL_Reload_01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
