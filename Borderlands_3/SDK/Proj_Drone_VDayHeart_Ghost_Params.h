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
	 * Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.ReturnGhostSpawnTransform
	 */
	struct AProj_Drone_VDayHeart_Ghost_C_ReturnGhostSpawnTransform_Params
	{
	public:
		bool                                                       SpawnSide;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UZRQ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.UserConstructionScript
	 */
	struct AProj_Drone_VDayHeart_Ghost_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire
	 */
	struct AProj_Drone_VDayHeart_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Ghost
	 */
	struct AProj_Drone_VDayHeart_Ghost_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Ghost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6JQC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif