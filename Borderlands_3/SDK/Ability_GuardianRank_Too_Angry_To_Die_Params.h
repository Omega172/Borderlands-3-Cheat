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
	 * Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDamageInFFYL
	 */
	struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnDamageInFFYL_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4371[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnActivated
	 */
	struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateStart
	 */
	struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnDownStateStart_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.OnDownStateEnd
	 */
	struct UAbility_GuardianRank_Too_Angry_To_Die_C_OnDownStateEnd_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Too_Angry_To_Die.Ability_GuardianRank_Too_Angry_To_Die_C.ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die
	 */
	struct UAbility_GuardianRank_Too_Angry_To_Die_C_ExecuteUbergraph_Ability_GuardianRank_Too_Angry_To_Die_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0C3L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
