#pragma once

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
	 * BlueprintGeneratedClass ALI_MissionGraph.ALI_MissionGraph_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UALI_MissionGraph_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void SiegeofCastleCrimson();
		void WhatLoveRemains();
		void InhumanTrials();
		void LocusofRage();
		void EnterthePsychoscape();
		void AGoodEgg();
		void DontCallitaRorschach();
		void RemodelBehavior();
		void ItsanAllegory();
		void DoesaBodyGood();
		void ThatRingsaSomething();
		void KriegsonParade();
		void ScratchDontSniff();
		void Brainstorm();
		void CheckPlease();
		void LaidtoRust();
		void BlastRequests();
		void HotandUnbothered();
		void ExecuteUbergraph_ALI_MissionGraph(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
