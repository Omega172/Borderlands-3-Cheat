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
	 * BlueprintGeneratedClass Condition_BreakLoad.Condition_BreakLoad_C
	 * Size -> 0x0004 (FullSize[0x008C] - InheritedSize[0x0088])
	 */
	class UCondition_BreakLoad_C : public UGbxCondition_Blueprint
	{
	public:
		int32_t                                                    BreakLoadShellAmount;                                    // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
