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
	 * Function Ability_NimbleJack.Ability_NimbleJack_C.CalculateAbilityState
	 */
	struct UAbility_NimbleJack_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_NimbleJack.Ability_NimbleJack_C.OnRegistered
	 */
	struct UAbility_NimbleJack_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_NimbleJack.Ability_NimbleJack_C.ExecuteUbergraph_Ability_NimbleJack
	 */
	struct UAbility_NimbleJack_C_ExecuteUbergraph_Ability_NimbleJack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8J8O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
