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
	 * Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.CalculateAbilityState
	 */
	struct UPassiveSkill_Siren_PersonalSpace_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.OnActivated
	 */
	struct UPassiveSkill_Siren_PersonalSpace_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_PersonalSpace.PassiveSkill_Siren_PersonalSpace_C.ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace
	 */
	struct UPassiveSkill_Siren_PersonalSpace_C_ExecuteUbergraph_PassiveSkill_Siren_PersonalSpace_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IOKQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
