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
	 * Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_OnShieldUnequipped
	 */
	struct UShieldAug_Revolter_C_K2_OnShieldUnequipped_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakCharacter*                                       Equipper;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_NativeDelayCallback
	 */
	struct UShieldAug_Revolter_C_K2_NativeDelayCallback_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0008(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
		class FName                                                DelayName;                                               // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_TriggerEffect
	 */
	struct UShieldAug_Revolter_C_K2_TriggerEffect_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
		struct FAugmentData                                        StackData;                                               // 0x0020(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
