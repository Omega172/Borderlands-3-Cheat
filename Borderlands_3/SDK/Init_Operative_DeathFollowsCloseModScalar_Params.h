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
	 * Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.CalculateAttributeInitialValue
	 */
	struct UInit_Operative_DeathFollowsCloseModScalar_C_CalculateAttributeInitialValue_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.Get Death Follows Close Bonus
	 */
	struct UInit_Operative_DeathFollowsCloseModScalar_C_GetDeathFollowsCloseBonus_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AbilityModBonus;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
