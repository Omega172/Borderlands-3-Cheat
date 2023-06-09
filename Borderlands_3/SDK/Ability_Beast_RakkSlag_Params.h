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
	 * Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnActivated
	 */
	struct UAbility_Beast_RakkSlag_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.RakkDamageDealt
	 */
	struct UAbility_Beast_RakkSlag_C_RakkDamageDealt_Params
	{
	public:
		class AActor*                                              DamagedEnemy;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnDeactivated
	 */
	struct UAbility_Beast_RakkSlag_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.ExecuteUbergraph_Ability_Beast_RakkSlag
	 */
	struct UAbility_Beast_RakkSlag_C_ExecuteUbergraph_Ability_Beast_RakkSlag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
