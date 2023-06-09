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
	 * BlueprintGeneratedClass BPWeap_HW_COV.BPWeap_HW_COV_C
	 * Size -> 0x0008 (FullSize[0x09E8] - InheritedSize[0x09E0])
	 */
	class ABPWeap_HW_COV_C : public ABPWeap_COV_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09E0(0x0008) Transient, DuplicateTransient

	public:
		void DisablePlug();
		void EnablePlug();
		void DisableOilCan();
		void EnableOilCan();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void FirstPersonCreated();
		void Notify_ReloadEnded(bool bCompleted);
		void SmallSpark();
		void StartOiling();
		void ExecuteUbergraph_BPWeap_HW_COV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
