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
	 * BlueprintGeneratedClass Action_Land_High_Armed.Action_Land_High_Armed_C
	 * Size -> 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
	 */
	class UAction_Land_High_Armed_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient

	public:
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_Land_High_Armed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
