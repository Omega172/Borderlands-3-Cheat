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
	 * Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.NewFunction_1
	 */
	struct UAbility_PetShared_GeneticLink_C_NewFunction_1_Params
	{
	public:
		float                                                      DamageDealt;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnActivated
	 */
	struct UAbility_PetShared_GeneticLink_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnTakeDamage_GeneticLink
	 */
	struct UAbility_PetShared_GeneticLink_C_OnTakeDamage_GeneticLink_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BH1T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.EnablePetBonusDamage
	 */
	struct UAbility_PetShared_GeneticLink_C_EnablePetBonusDamage_Params
	{	};

	/**
	 * Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.OnAbilityTimerEnded
	 */
	struct UAbility_PetShared_GeneticLink_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_PetShared_GeneticLink.Ability_PetShared_GeneticLink_C.ExecuteUbergraph_Ability_PetShared_GeneticLink
	 */
	struct UAbility_PetShared_GeneticLink_C_ExecuteUbergraph_Ability_PetShared_GeneticLink_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M095[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
