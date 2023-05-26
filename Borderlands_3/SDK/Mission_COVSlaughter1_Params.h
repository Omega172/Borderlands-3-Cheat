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
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_9
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_8
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_7
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.OnDialogSequenceFinished_6
	 */
	struct UMission_COVSlaughter1_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_2
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZUC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_2
	 */
	struct UMission_COVSlaughter1_C_Set_Round_2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_Rounds
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L0GD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_2
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LX38[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_2
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_TurnIn
	 */
	struct UMission_COVSlaughter1_C_Set_TurnIn_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_TurnIn
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_TurnIn_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_TurnIn
	 */
	struct UMission_COVSlaughter1_C_Obj_TurnIn_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4DLX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_RoundCounter
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_RoundCounter_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_2
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1427[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_3
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQKJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_3
	 */
	struct UMission_COVSlaughter1_C_Set_Round_3_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_3
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N4WB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_3
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_4
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CWE7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_4
	 */
	struct UMission_COVSlaughter1_C_Set_Round_4_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_4
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6FJ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_4
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_5
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJFC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_5
	 */
	struct UMission_COVSlaughter1_C_Set_Round_5_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_5
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KABB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_5
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_5_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_StartRound_6
	 */
	struct UMission_COVSlaughter1_C_Obj_StartRound_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7FN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Set_Round_6
	 */
	struct UMission_COVSlaughter1_C_Set_Round_6_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_CompleteWave_6
	 */
	struct UMission_COVSlaughter1_C_Obj_CompleteWave_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NEGC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_CompleteWave_6
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_CompleteWave_6_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_3
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TPQG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_4
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B3X8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_5
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTV4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_OptionalObjective_6
	 */
	struct UMission_COVSlaughter1_C_Obj_OptionalObjective_6_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1YMO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersAllDied
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersAllDied_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_SwitchUsed
	 */
	struct UMission_COVSlaughter1_C_MCE_SwitchUsed_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_ObjectivePROXY_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY_1
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_ObjectivePROXY_1_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY_2
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_ObjectivePROXY_2_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_Rounds_Objective] PROXY_3
	 */
	struct UMission_COVSlaughter1_C_Obj_Rounds_ObjectivePROXY_3_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_AssembleRound1
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_AssembleRound1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_22CK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersAssembled
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersNotAssembled
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersNotAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble2
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AVAM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble3
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble3_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N4O2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble4
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble4_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DDYP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_Assemble5
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_Assemble5_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4N0A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayerDied
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayerDied_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MissionKickoff
	 */
	struct UMission_COVSlaughter1_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_INVIS_PlayersDiedinRound
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LKX0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_PlayersAllDiedInRound
	 */
	struct UMission_COVSlaughter1_C_MCE_PlayersAllDiedInRound_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_4
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_4_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_5
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_5_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_6
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_6_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.[Obj_INVIS_PlayersDiedinRound_Objective] PROXY_7
	 */
	struct UMission_COVSlaughter1_C_Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_7_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_BossSpawns
	 */
	struct UMission_COVSlaughter1_C_MCE_BossSpawns_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MissionActiveLoad
	 */
	struct UMission_COVSlaughter1_C_MissionActiveLoad_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MissionActive
	 */
	struct UMission_COVSlaughter1_C_MissionActive_Params
	{	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.Obj_DropshipCleared
	 */
	struct UMission_COVSlaughter1_C_Obj_DropshipCleared_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJUC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_Update_Obj_DropshipCleared
	 */
	struct UMission_COVSlaughter1_C_MCE_Update_Obj_DropshipCleared_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.MCE_BC_NotAllAssembled
	 */
	struct UMission_COVSlaughter1_C_MCE_BC_NotAllAssembled_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_COVSlaughter1.Mission_COVSlaughter1_C.ExecuteUbergraph_Mission_COVSlaughter1
	 */
	struct UMission_COVSlaughter1_C_ExecuteUbergraph_Mission_COVSlaughter1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DZO5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
