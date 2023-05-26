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
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_9
	 */
	struct UMission_TechSlaughter1_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_8
	 */
	struct UMission_TechSlaughter1_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_7
	 */
	struct UMission_TechSlaughter1_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.OnDialogSequenceFinished_6
	 */
	struct UMission_TechSlaughter1_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round1
	 */
	struct UMission_TechSlaughter1_C_Set_Round1_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_TurnIn
	 */
	struct UMission_TechSlaughter1_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IO48[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_TurnIn
	 */
	struct UMission_TechSlaughter1_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_TurnIn
	 */
	struct UMission_TechSlaughter1_C_MCE_Update_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_Rounds
	 */
	struct UMission_TechSlaughter1_C_Obj_Rounds_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9P1O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_RoundCount
	 */
	struct UMission_TechSlaughter1_C_MCE_Update_RoundCount_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAllDied
	 */
	struct UMission_TechSlaughter1_C_MCE_PlayersAllDied_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_SwitchUsed
	 */
	struct UMission_TechSlaughter1_C_MCE_SwitchUsed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_AssembleRound1
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_AssembleRound1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5A0Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_2
	 */
	struct UMission_TechSlaughter1_C_Obj_StartRound_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7OAZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_2
	 */
	struct UMission_TechSlaughter1_C_Obj_CompleteWave_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_17NL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_2
	 */
	struct UMission_TechSlaughter1_C_MCE_Update_CompleteWave_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round1
	 */
	struct UMission_TechSlaughter1_C_Obj_OptionalObjective_Round1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z66Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_3
	 */
	struct UMission_TechSlaughter1_C_Set_Round_3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_4
	 */
	struct UMission_TechSlaughter1_C_Set_Round_4_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_5
	 */
	struct UMission_TechSlaughter1_C_Set_Round_5_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Set_Round_6
	 */
	struct UMission_TechSlaughter1_C_Set_Round_6_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble2
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_Assemble2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZBWH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY
	 */
	struct UMission_TechSlaughter1_C_Obj_Rounds_ObjectivePROXY_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_1
	 */
	struct UMission_TechSlaughter1_C_Obj_Rounds_ObjectivePROXY_1_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_2
	 */
	struct UMission_TechSlaughter1_C_Obj_Rounds_ObjectivePROXY_2_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_Rounds_Objective] PROXY_3
	 */
	struct UMission_TechSlaughter1_C_Obj_Rounds_ObjectivePROXY_3_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_3
	 */
	struct UMission_TechSlaughter1_C_Obj_StartRound_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6X48[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_4
	 */
	struct UMission_TechSlaughter1_C_Obj_StartRound_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FGTK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_5
	 */
	struct UMission_TechSlaughter1_C_Obj_StartRound_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7QMP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_StartRound_6
	 */
	struct UMission_TechSlaughter1_C_Obj_StartRound_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YWAR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble3
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_Assemble3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9V0C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble4
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_Assemble4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BBVV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_Assemble5
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_Assemble5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RZGR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_3
	 */
	struct UMission_TechSlaughter1_C_Obj_CompleteWave_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2D3U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_Obj_CompleteWave_3
	 */
	struct UMission_TechSlaughter1_C_MCE_Update_Obj_CompleteWave_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round2
	 */
	struct UMission_TechSlaughter1_C_Obj_OptionalObjective_Round2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MITV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_4
	 */
	struct UMission_TechSlaughter1_C_Obj_CompleteWave_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_35N8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_4
	 */
	struct UMission_TechSlaughter1_C_MCE_Update_CompleteWave_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round3
	 */
	struct UMission_TechSlaughter1_C_Obj_OptionalObjective_Round3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLQG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_5
	 */
	struct UMission_TechSlaughter1_C_Obj_CompleteWave_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NHAX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_5
	 */
	struct UMission_TechSlaughter1_C_MCE_Update_CompleteWave_5_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round4
	 */
	struct UMission_TechSlaughter1_C_Obj_OptionalObjective_Round4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_845S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_CompleteWave_6
	 */
	struct UMission_TechSlaughter1_C_Obj_CompleteWave_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KFT9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_Update_CompleteWave_6
	 */
	struct UMission_TechSlaughter1_C_MCE_Update_CompleteWave_6_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_OptionalObjective_Round5
	 */
	struct UMission_TechSlaughter1_C_Obj_OptionalObjective_Round5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VF28[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersNotAssembled
	 */
	struct UMission_TechSlaughter1_C_MCE_PlayersNotAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAssembled
	 */
	struct UMission_TechSlaughter1_C_MCE_PlayersAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayerDied
	 */
	struct UMission_TechSlaughter1_C_MCE_PlayerDied_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_LightSwitchMover
	 */
	struct UMission_TechSlaughter1_C_Obj_LightSwitchMover_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VTDU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_ChangeLights
	 */
	struct UMission_TechSlaughter1_C_MCE_ChangeLights_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_ResetLights
	 */
	struct UMission_TechSlaughter1_C_MCE_ResetLights_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_4
	 */
	struct UMission_TechSlaughter1_C_Obj_LightSwitchMover_ObjectivePROXY_4_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_5
	 */
	struct UMission_TechSlaughter1_C_Obj_LightSwitchMover_ObjectivePROXY_5_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_6
	 */
	struct UMission_TechSlaughter1_C_Obj_LightSwitchMover_ObjectivePROXY_6_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_LightSwitchMover_Objective] PROXY_7
	 */
	struct UMission_TechSlaughter1_C_Obj_LightSwitchMover_ObjectivePROXY_7_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_TorgueBossVO
	 */
	struct UMission_TechSlaughter1_C_MCE_TorgueBossVO_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.Obj_INVIS_PlayersDiedinRound
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_PlayersDiedinRound_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YNEP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_PlayersAllDiedInRound
	 */
	struct UMission_TechSlaughter1_C_MCE_PlayersAllDiedInRound_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_8
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_8_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_9
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_9_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_10
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_10_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_11
	 */
	struct UMission_TechSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_11_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionActiveLoad
	 */
	struct UMission_TechSlaughter1_C_MissionActiveLoad_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionActive
	 */
	struct UMission_TechSlaughter1_C_MissionActive_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_UpdateOptionals
	 */
	struct UMission_TechSlaughter1_C_MCE_UpdateOptionals_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MissionKickoff
	 */
	struct UMission_TechSlaughter1_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.MCE_BC_NotAllAssembled
	 */
	struct UMission_TechSlaughter1_C_MCE_BC_NotAllAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_TechSlaughter1.Mission_TechSlaughter1_C.ExecuteUbergraph_Mission_TechSlaughter1
	 */
	struct UMission_TechSlaughter1_C_ExecuteUbergraph_Mission_TechSlaughter1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RS4U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
