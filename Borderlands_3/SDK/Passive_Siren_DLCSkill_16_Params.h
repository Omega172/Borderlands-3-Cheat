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
	 * Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.OnActivated
	 */
	struct UPassive_Siren_DLCSkill_15_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.TriggerAbilityEffect
	 */
	struct UPassive_Siren_DLCSkill_15_C_TriggerAbilityEffect_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Siren_DLCSkill_16.Passive_Siren_DLCSkill_15_C.ExecuteUbergraph_Passive_Siren_DLCSkill_16
	 */
	struct UPassive_Siren_DLCSkill_15_C_ExecuteUbergraph_Passive_Siren_DLCSkill_16_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6901[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
