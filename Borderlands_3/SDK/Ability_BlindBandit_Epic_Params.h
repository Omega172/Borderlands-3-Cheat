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
	 * Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnActivated
	 */
	struct UAbility_BlindBandit_Epic_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnCausedDeath_Event
	 */
	struct UAbility_BlindBandit_Epic_C_OnCausedDeath_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnDeactivated
	 */
	struct UAbility_BlindBandit_Epic_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.ExecuteUbergraph_Ability_BlindBandit_Epic
	 */
	struct UAbility_BlindBandit_Epic_C_ExecuteUbergraph_Ability_BlindBandit_Epic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SLEW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
