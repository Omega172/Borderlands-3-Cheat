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
	 * Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.CausedDeath_FleshMelter
	 */
	struct UAbility_Artifact_FleshMelter_C_CausedDeath_FleshMelter_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnDeactivated
	 */
	struct UAbility_Artifact_FleshMelter_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.OnActivated
	 */
	struct UAbility_Artifact_FleshMelter_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_FleshMelter.Ability_Artifact_FleshMelter_C.ExecuteUbergraph_Ability_Artifact_FleshMelter
	 */
	struct UAbility_Artifact_FleshMelter_C_ExecuteUbergraph_Ability_Artifact_FleshMelter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
