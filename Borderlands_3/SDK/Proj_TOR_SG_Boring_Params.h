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
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.UserConstructionScript
	 */
	struct AProj_TOR_SG_Boring_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.ReceiveHit
	 */
	struct AProj_TOR_SG_Boring_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7F2H[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.OnHitWorld
	 */
	struct AProj_TOR_SG_Boring_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.OnHitDamagableObject
	 */
	struct AProj_TOR_SG_Boring_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring
	 */
	struct AProj_TOR_SG_Boring_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.OnLastBounce
	 */
	struct AProj_TOR_SG_Boring_C_OnLastBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.ReceiveBeginPlay
	 */
	struct AProj_TOR_SG_Boring_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring
	 */
	struct AProj_TOR_SG_Boring_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C.ExecuteUbergraph_Proj_TOR_SG_Boring
	 */
	struct AProj_TOR_SG_Boring_C_ExecuteUbergraph_Proj_TOR_SG_Boring_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
