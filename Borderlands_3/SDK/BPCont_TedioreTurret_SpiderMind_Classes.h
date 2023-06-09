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
	 * BlueprintGeneratedClass BPCont_TedioreTurret_SpiderMind.BPCont_TedioreTurret_SpiderMind_C
	 * Size -> 0x001F (FullSize[0x0790] - InheritedSize[0x0771])
	 */
	class ABPCont_TedioreTurret_SpiderMind_C : public ABPCont_AI_C
	{
	public:
		unsigned char                                              UnknownData_DR8I[0x7];                                   // 0x0771(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0778(0x0008) Transient, DuplicateTransient
		bool                                                       bCanShoot;                                               // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HKF9[0x7];                                   // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                bCanWalk;                                                // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret(class UTargetingComponent* TargetingComponent);
		void ExecuteUbergraph_BPCont_TedioreTurret_SpiderMind(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
