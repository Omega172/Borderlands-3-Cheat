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
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.CalculateAbilityState
	 */
	struct UAbility_OverheatSelfBurn_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZHKL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnPaused
	 */
	struct UAbility_OverheatSelfBurn_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnResumed
	 */
	struct UAbility_OverheatSelfBurn_C_OnResumed_Params
	{	};

	/**
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnActivated
	 */
	struct UAbility_OverheatSelfBurn_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnDeactivated
	 */
	struct UAbility_OverheatSelfBurn_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnUnregistered
	 */
	struct UAbility_OverheatSelfBurn_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExitedDownState
	 */
	struct UAbility_OverheatSelfBurn_C_ExitedDownState_Params
	{	};

	/**
	 * Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExecuteUbergraph_Ability_OverheatSelfBurn
	 */
	struct UAbility_OverheatSelfBurn_C_ExecuteUbergraph_Ability_OverheatSelfBurn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LOLO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
