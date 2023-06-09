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
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.AOE_FindTarget
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_AOE_FindTarget_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.UserConstructionScript
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.OnExplode
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.ReceiveBeginPlay
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.OnHitEnemy
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.OnHitWorld
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.FuseTriggered
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_FuseTriggered_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.ReceiveHit
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SVGB[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZKUI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.AttachedActorDeath
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_AttachedActorDeath_Params
	{	};

	/**
	 * Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball_RubysWrath
	 */
	struct AProj_ATL_Tracker_Ball_RubysWrath_C_ExecuteUbergraph_Proj_ATL_Tracker_Ball_RubysWrath_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RLEK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
