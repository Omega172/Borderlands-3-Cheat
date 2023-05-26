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
	 * Function Passive_Siren_DLCSkill_14.Passive_Siren_DLCSkill_13_C.OnActivated
	 */
	struct UPassive_Siren_DLCSkill_13_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Siren_DLCSkill_14.Passive_Siren_DLCSkill_13_C.DLCSkill13_OnCausedDeath
	 */
	struct UPassive_Siren_DLCSkill_13_C_DLCSkill13_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_Siren_DLCSkill_14.Passive_Siren_DLCSkill_13_C.ExecuteUbergraph_Passive_Siren_DLCSkill_14
	 */
	struct UPassive_Siren_DLCSkill_13_C_ExecuteUbergraph_Passive_Siren_DLCSkill_14_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
