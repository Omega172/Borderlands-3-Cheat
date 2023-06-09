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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnInitChallengeInstance
	 */
	struct UChallenge_EridianWriting_Planet_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.CompletedChallenge
	 */
	struct UChallenge_EridianWriting_Planet_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.OnChallengeActivated
	 */
	struct UChallenge_EridianWriting_Planet_C_OnChallengeActivated_Params
	{	};

	/**
	 * Function Challenge_EridianWriting_Planet.Challenge_EridianWriting_Planet_C.ExecuteUbergraph_Challenge_EridianWriting_Planet
	 */
	struct UChallenge_EridianWriting_Planet_C_ExecuteUbergraph_Challenge_EridianWriting_Planet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8J1I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
