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
	 * BlueprintGeneratedClass Condition_IsChallengeComplete.Condition_IsChallengeComplete_C
	 * Size -> 0x0009 (FullSize[0x0091] - InheritedSize[0x0088])
	 */
	class UCondition_IsChallengeComplete_C : public UGbxCondition_Blueprint
	{
	public:
		class UClass*                                              Challenge;                                               // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OptionalContext;                                         // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
