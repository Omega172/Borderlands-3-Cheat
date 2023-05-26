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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Challenge_Mission_Plot_06_OvercomeHQBlockade.Challenge_Mission_Plot_06_OvercomeHQBlockade_C.CompletedChallenge
	 */
	struct UChallenge_Mission_Plot_06_OvercomeHQBlockade_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_Mission_Plot_06_OvercomeHQBlockade.Challenge_Mission_Plot_06_OvercomeHQBlockade_C.ExecuteUbergraph_Challenge_Mission_Plot_06_OvercomeHQBlockade
	 */
	struct UChallenge_Mission_Plot_06_OvercomeHQBlockade_C_ExecuteUbergraph_Challenge_Mission_Plot_06_OvercomeHQBlockade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UAN6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
