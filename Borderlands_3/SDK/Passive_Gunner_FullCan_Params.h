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
	 * Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.OnActivated
	 */
	struct UPassive_Gunner_FullCan_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.EnteredIronBear_FullCan
	 */
	struct UPassive_Gunner_FullCan_C_EnteredIronBear_FullCan_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExitedIronBear_FullCan
	 */
	struct UPassive_Gunner_FullCan_C_ExitedIronBear_FullCan_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExecuteUbergraph_Passive_Gunner_FullCan
	 */
	struct UPassive_Gunner_FullCan_C_ExecuteUbergraph_Passive_Gunner_FullCan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EE2X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
