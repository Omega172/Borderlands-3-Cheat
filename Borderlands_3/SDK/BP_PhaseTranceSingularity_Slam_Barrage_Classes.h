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
	 * BlueprintGeneratedClass BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C
	 * Size -> 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
	 */
	class ABP_PhaseTranceSingularity_Slam_Barrage_C : public ABP_PhaseTranceSingularity_Slam_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A8(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
