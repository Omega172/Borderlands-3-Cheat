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
	 * Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.IsConsideredMeleeDamage
	 */
	struct UPassiveSkill_Siren_BareKnuckle_C_IsConsideredMeleeDamage_Params
	{
	public:
		class UClass*                                              Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.OnActivated
	 */
	struct UPassiveSkill_Siren_BareKnuckle_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.SirenSkillEvent_OnCausedAnyDamage
	 */
	struct UPassiveSkill_Siren_BareKnuckle_C_SirenSkillEvent_OnCausedAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_POX4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageSource;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageType;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0020(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function PassiveSkill_Siren_BareKnuckle.PassiveSkill_Siren_BareKnuckle_C.ExecuteUbergraph_PassiveSkill_Siren_BareKnuckle
	 */
	struct UPassiveSkill_Siren_BareKnuckle_C_ExecuteUbergraph_PassiveSkill_Siren_BareKnuckle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
