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
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.OnDialogSequenceFinished_5
	 */
	struct UMission_Ixora_VarkidBoss_C_OnDialogSequenceFinished_5_Params
	{	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.OnDialogSequenceFinished_4
	 */
	struct UMission_Ixora_VarkidBoss_C_OnDialogSequenceFinished_4_Params
	{	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_FindBoss
	 */
	struct UMission_Ixora_VarkidBoss_C_Set_FindBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_FindBoss
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_FindBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0IJC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_FindBoss
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_FindBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_OpenEridiumDoor
	 */
	struct UMission_Ixora_VarkidBoss_C_Set_OpenEridiumDoor_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_OpenEridiumDoor
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_OpenEridiumDoor_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TTPP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.[Obj_FindBoss_Objective] PROXY
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_FindBoss_ObjectivePROXY_Params
	{	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_FindEridiumDoor
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_FindEridiumDoor_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_88CR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_KillBoss
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_KillBoss_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_KillBoss
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_KillBoss_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GG9W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_OpenEridiumDoor
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_OpenEridiumDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_FindEridiumDoor
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_FindEridiumDoor_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_GoToMap
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_GoToMap_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_GoToMap
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_GoToMap_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DELO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_KillBoss
	 */
	struct UMission_Ixora_VarkidBoss_C_Set_KillBoss_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_GoToMap
	 */
	struct UMission_Ixora_VarkidBoss_C_Set_GoToMap_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MissionKickoff
	 */
	struct UMission_Ixora_VarkidBoss_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Set_EnterBossArena
	 */
	struct UMission_Ixora_VarkidBoss_C_Set_EnterBossArena_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.[Obj_FindBoss_Objective] PROXY_1
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_FindBoss_ObjectivePROXY_1_Params
	{	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_BC1
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_BC1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JYCV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_BC2
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_BC2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BRAP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_BC1
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_BC1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_BC2
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_BC2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_StartingEridium
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_StartingEridium_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CKUE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_StartingEridium
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_StartingEridium_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.Obj_DoorUnlock_INV
	 */
	struct UMission_Ixora_VarkidBoss_C_Obj_DoorUnlock_INV_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7EJQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.MCE_Update_DoorUnlock
	 */
	struct UMission_Ixora_VarkidBoss_C_MCE_Update_DoorUnlock_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C.ExecuteUbergraph_Mission_Ixora_VarkidBoss
	 */
	struct UMission_Ixora_VarkidBoss_C_ExecuteUbergraph_Mission_Ixora_VarkidBoss_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6BVW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
