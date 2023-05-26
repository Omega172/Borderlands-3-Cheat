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
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_31
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_31_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_30
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_30_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_29
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_29_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_28
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_28_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_27
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_27_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_26
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_26_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_25
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_25_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_24
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_24_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_23
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_23_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_22
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_22_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_21
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_21_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_20
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_20_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_19
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_19_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_18
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_18_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.OnDialogSequenceFinished_17
	 */
	struct UMission_DudeBro_C_OnDialogSequenceFinished_17_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_FollowChaddRocketLift
	 */
	struct UMission_DudeBro_C_MCE_FollowChaddRocketLift_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_PlayerBaseJump
	 */
	struct UMission_DudeBro_C_Obj_PlayerBaseJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2XBQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Player Has Completed Jump
	 */
	struct UMission_DudeBro_C_MCEPlayerHasCompletedJump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ChaddUsesLift
	 */
	struct UMission_DudeBro_C_Set_ChaddUsesLift_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddUsesLift
	 */
	struct UMission_DudeBro_C_Obj_ChaddUsesLift_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HAKV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddIsJumping
	 */
	struct UMission_DudeBro_C_Obj_ChaddIsJumping_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0R4L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ChaddArrivedAtPreJump
	 */
	struct UMission_DudeBro_C_Set_ChaddArrivedAtPreJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddArrivedAtPreJump
	 */
	struct UMission_DudeBro_C_Obj_ChaddArrivedAtPreJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q4ZN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ChaddGetsIntoPositionToJump
	 */
	struct UMission_DudeBro_C_Set_ChaddGetsIntoPositionToJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ChaddGetsIntoPositionToJump
	 */
	struct UMission_DudeBro_C_Obj_ChaddGetsIntoPositionToJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_048C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE ChaddSaysRandomJumpLine
	 */
	struct UMission_DudeBro_C_MCEChaddSaysRandomJumpLine_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Kill Grog
	 */
	struct UMission_DudeBro_C_MCEKillGrog_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Chadd Read To Jump
	 */
	struct UMission_DudeBro_C_MCEChaddReadToJump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_UseRocketPart2
	 */
	struct UMission_DudeBro_C_Obj_UseRocketPart2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K8BH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_UseRocketPart3
	 */
	struct UMission_DudeBro_C_Obj_UseRocketPart3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E9C5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Use Rocket Part 2
	 */
	struct UMission_DudeBro_C_MCEUseRocketPart2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Use Rocket Part 3
	 */
	struct UMission_DudeBro_C_MCEUseRocketPart3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FuelCanCounter
	 */
	struct UMission_DudeBro_C_Obj_FuelCanCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G97S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_FuelCanCounter
	 */
	struct UMission_DudeBro_C_MCE_Update_FuelCanCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddRocketLift
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddRocketLift_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4JQ7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddRocketLift
	 */
	struct UMission_DudeBro_C_Set_FollowChaddRocketLift_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Watch Chadd Base Jump
	 */
	struct UMission_DudeBro_C_MCEWatchChaddBaseJump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_PlayerBaseJumpPrep
	 */
	struct UMission_DudeBro_C_Obj_PlayerBaseJumpPrep_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S9NK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Answer Call Talk To Chadd
	 */
	struct UMission_DudeBro_C_MCEAnswerCallTalkToChadd_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_AnswerCallTalkToChadd
	 */
	struct UMission_DudeBro_C_Obj_AnswerCallTalkToChadd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SHOB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_AnswerCallTalkToChadd
	 */
	struct UMission_DudeBro_C_Set_AnswerCallTalkToChadd_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Give Guts To Chadd
	 */
	struct UMission_DudeBro_C_MCEGiveGutsToChadd_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Follow Chadd Saurian Fight
	 */
	struct UMission_DudeBro_C_MCEFollowChaddSaurianFight_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddSaurianFight
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddSaurianFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S62G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GiveGutsToChadd
	 */
	struct UMission_DudeBro_C_Obj_GiveGutsToChadd_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UW0W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddSaurianFight
	 */
	struct UMission_DudeBro_C_Set_FollowChaddSaurianFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GetGrogGuts
	 */
	struct UMission_DudeBro_C_Obj_GetGrogGuts_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6O9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_KillGrog
	 */
	struct UMission_DudeBro_C_Obj_KillGrog_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OQVV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_GiveGutsToChadd
	 */
	struct UMission_DudeBro_C_Set_GiveGutsToChadd_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_KillGrog
	 */
	struct UMission_DudeBro_C_Set_KillGrog_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Revive Chadd Jump
	 */
	struct UMission_DudeBro_C_MCEReviveChaddJump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Follow Chadd Base Jump
	 */
	struct UMission_DudeBro_C_MCEFollowChaddBaseJump_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Follow Chadd Grog Fight
	 */
	struct UMission_DudeBro_C_MCEFollowChaddGrogFight_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddGrogFight
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddGrogFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZF5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddGrogFight
	 */
	struct UMission_DudeBro_C_Set_FollowChaddGrogFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Revive Chadd Fight
	 */
	struct UMission_DudeBro_C_MCEReviveChaddFight_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE GotChaddLootMissionComplete
	 */
	struct UMission_DudeBro_C_MCEGotChaddLootMissionComplete_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GetChaddLoot
	 */
	struct UMission_DudeBro_C_Obj_GetChaddLoot_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SQ8N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_GetChaddLoot
	 */
	struct UMission_DudeBro_C_Set_GetChaddLoot_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Shoot The Igniter
	 */
	struct UMission_DudeBro_C_MCEShootTheIgniter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE Use Rocket Part 1
	 */
	struct UMission_DudeBro_C_MCEUseRocketPart1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ShootTheIgniter
	 */
	struct UMission_DudeBro_C_Obj_ShootTheIgniter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ICVP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ShootTheIgniter
	 */
	struct UMission_DudeBro_C_Set_ShootTheIgniter_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_UseRocketPart1
	 */
	struct UMission_DudeBro_C_Obj_UseRocketPart1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JP88[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_UseRocketParts
	 */
	struct UMission_DudeBro_C_Set_UseRocketParts_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_GetRocketParts
	 */
	struct UMission_DudeBro_C_Obj_GetRocketParts_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YV6F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_GetRocketParts
	 */
	struct UMission_DudeBro_C_Set_GetRocketParts_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ReviveChaddJump
	 */
	struct UMission_DudeBro_C_Obj_ReviveChaddJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D3NT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ReviveChaddJump
	 */
	struct UMission_DudeBro_C_Set_ReviveChaddJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_FollowChaddBaseJump
	 */
	struct UMission_DudeBro_C_Obj_FollowChaddBaseJump_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KXZD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_FollowChaddBaseJump
	 */
	struct UMission_DudeBro_C_Set_FollowChaddBaseJump_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_ReviveChaddFight
	 */
	struct UMission_DudeBro_C_Obj_ReviveChaddFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CNJP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_ReviveChaddFight
	 */
	struct UMission_DudeBro_C_Set_ReviveChaddFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_KillSaurianChaddFight
	 */
	struct UMission_DudeBro_C_Obj_KillSaurianChaddFight_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_80HD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Set_KillSaurianChaddFight
	 */
	struct UMission_DudeBro_C_Set_KillSaurianChaddFight_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_BaseJumpPrepCounter
	 */
	struct UMission_DudeBro_C_Obj_BaseJumpPrepCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_65KW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_ChaddIsJumping
	 */
	struct UMission_DudeBro_C_MCE_Update_ChaddIsJumping_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_BaseJumpPrepCounter
	 */
	struct UMission_DudeBro_C_MCE_Update_BaseJumpPrepCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.Obj_BaseJumpCounter
	 */
	struct UMission_DudeBro_C_Obj_BaseJumpCounter_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D1Q1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MCE_Update_BaseJumpCounter
	 */
	struct UMission_DudeBro_C_MCE_Update_BaseJumpCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.[Obj_ReviveChaddJump_Objective] PROXY
	 */
	struct UMission_DudeBro_C_Obj_ReviveChaddJump_ObjectivePROXY_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.[Obj_FuelCanCounter_Objective] PROXY_1
	 */
	struct UMission_DudeBro_C_Obj_FuelCanCounter_ObjectivePROXY_1_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.MissionKickoff
	 */
	struct UMission_DudeBro_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_DudeBro.Mission_DudeBro_C.ExecuteUbergraph_Mission_DudeBro
	 */
	struct UMission_DudeBro_C_ExecuteUbergraph_Mission_DudeBro_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PT8D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
