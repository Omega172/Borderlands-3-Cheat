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
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_9
	 */
	struct UMission_SuckerPunch_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_8
	 */
	struct UMission_SuckerPunch_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_7
	 */
	struct UMission_SuckerPunch_C_OnDialogSequenceFinished_7_Params
	{	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.OnDialogSequenceFinished_6
	 */
	struct UMission_SuckerPunch_C_OnDialogSequenceFinished_6_Params
	{	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_DestroyCamera
	 */
	struct UMission_SuckerPunch_C_MCE_Update_DestroyCamera_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KilledSelf
	 */
	struct UMission_SuckerPunch_C_Set_KilledSelf_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.[Obj_KillYourself_Objective] PROXY
	 */
	struct UMission_SuckerPunch_C_Obj_KillYourself_ObjectivePROXY_Params
	{	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_KillYourself
	 */
	struct UMission_SuckerPunch_C_MCE_Update_KillYourself_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_DestroyCamera
	 */
	struct UMission_SuckerPunch_C_Obj_DestroyCamera_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7A4C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_KillYourself
	 */
	struct UMission_SuckerPunch_C_Obj_KillYourself_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2L6V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KillYourself
	 */
	struct UMission_SuckerPunch_C_Set_KillYourself_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_DestroyedCamera
	 */
	struct UMission_SuckerPunch_C_Set_DestroyedCamera_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.[Obj_DestroyCamera_Objective] PROXY_1
	 */
	struct UMission_SuckerPunch_C_Obj_DestroyCamera_ObjectivePROXY_1_Params
	{	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera1_Inv
	 */
	struct UMission_SuckerPunch_C_Obj_Camera1_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z4Y2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera2_Inv
	 */
	struct UMission_SuckerPunch_C_Obj_Camera2_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VPFZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera3_Inv
	 */
	struct UMission_SuckerPunch_C_Obj_Camera3_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UEQ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera4_Inv
	 */
	struct UMission_SuckerPunch_C_Obj_Camera4_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NMYV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_Camera5_Inv
	 */
	struct UMission_SuckerPunch_C_Obj_Camera5_Inv_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X6S7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera1
	 */
	struct UMission_SuckerPunch_C_MCE_Update_Camera1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera2
	 */
	struct UMission_SuckerPunch_C_MCE_Update_Camera2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera3
	 */
	struct UMission_SuckerPunch_C_MCE_Update_Camera3_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera4
	 */
	struct UMission_SuckerPunch_C_MCE_Update_Camera4_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_Camera5
	 */
	struct UMission_SuckerPunch_C_MCE_Update_Camera5_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MissionKickoff
	 */
	struct UMission_SuckerPunch_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Set_KickoffPart2
	 */
	struct UMission_SuckerPunch_C_Set_KickoffPart2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_FakeObjective
	 */
	struct UMission_SuckerPunch_C_Obj_FakeObjective_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5PF4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.Obj_UnlockButton
	 */
	struct UMission_SuckerPunch_C_Obj_UnlockButton_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5R99[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.MCE_Update_UnlockButton
	 */
	struct UMission_SuckerPunch_C_MCE_Update_UnlockButton_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_SuckerPunch.Mission_SuckerPunch_C.ExecuteUbergraph_Mission_SuckerPunch
	 */
	struct UMission_SuckerPunch_C_ExecuteUbergraph_Mission_SuckerPunch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FCF3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
