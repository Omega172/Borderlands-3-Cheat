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
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.OnRep_StuckTarget
	 */
	struct AProj_ATL_TrackerDart_Replay_C_OnRep_StuckTarget_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.StartAudioLoopOnActor
	 */
	struct AProj_ATL_TrackerDart_Replay_C_StartAudioLoopOnActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.MultiTargetTag
	 */
	struct AProj_ATL_TrackerDart_Replay_C_MultiTargetTag_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.RemoveAllTargets
	 */
	struct AProj_ATL_TrackerDart_Replay_C_RemoveAllTargets_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.SingleTargetTag
	 */
	struct AProj_ATL_TrackerDart_Replay_C_SingleTargetTag_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.UserConstructionScript
	 */
	struct AProj_ATL_TrackerDart_Replay_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.ReceiveBeginPlay
	 */
	struct AProj_ATL_TrackerDart_Replay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.OnExplode
	 */
	struct AProj_ATL_TrackerDart_Replay_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.ReceiveHit
	 */
	struct AProj_ATL_TrackerDart_Replay_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FDDQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.AttachedActorDeath
	 */
	struct AProj_ATL_TrackerDart_Replay_C_AttachedActorDeath_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.FuseStart
	 */
	struct AProj_ATL_TrackerDart_Replay_C_FuseStart_Params
	{
	public:
		float                                                      FuseTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.FuseTriggered
	 */
	struct AProj_ATL_TrackerDart_Replay_C_FuseTriggered_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.TargetStuck
	 */
	struct AProj_ATL_TrackerDart_Replay_C_TargetStuck_Params
	{	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.MultiTargetActorDeath_Event
	 */
	struct AProj_ATL_TrackerDart_Replay_C_MultiTargetActorDeath_Event_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.ExecuteUbergraph_Proj_ATL_TrackerDart_Replay
	 */
	struct AProj_ATL_TrackerDart_Replay_C_ExecuteUbergraph_Proj_ATL_TrackerDart_Replay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
