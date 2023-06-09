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
	 * Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OnActivated
	 */
	struct UPassiveSkill_Siren_Wildfire_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedElementalEffect
	 */
	struct UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedMaxResource
	 */
	struct UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedMaxResource_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakStatusEffectResourceEffectType                         ResourceEffectType;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OpenWildfireGates
	 */
	struct UPassiveSkill_Siren_Wildfire_C_OpenWildfireGates_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.CloseWildfireGates
	 */
	struct UPassiveSkill_Siren_Wildfire_C_CloseWildfireGates_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.ExecuteUbergraph_PassiveSkill_Siren_Wildfire
	 */
	struct UPassiveSkill_Siren_Wildfire_C_ExecuteUbergraph_PassiveSkill_Siren_Wildfire_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
