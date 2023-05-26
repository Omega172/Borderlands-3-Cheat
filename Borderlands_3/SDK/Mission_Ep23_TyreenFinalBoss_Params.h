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
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.OnDialogSequenceFinished_13
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.OnDialogSequenceFinished_12
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.OnDialogSequenceFinished_11
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.OnDialogSequenceFinished_10
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.OnDialogSequenceFinished_9
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.OnDialogSequenceFinished_8
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_OnDialogSequenceFinished_8_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_FindTyreen
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_FindTyreen_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_FindTyreen
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_FindTyreen_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4WUM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Final Boss Map Entered
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdateFinalBossMapEntered_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_EnterPortalToPandora
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_EnterPortalToPandora_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZK00[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_LootVault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_LootVault_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJIS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_LootVault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_LootVault_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_EnterPortalToPandora
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_EnterPortalToPandora_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Loot Vault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdateLootVault_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Breadcrumb01
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdateBreadcrumb01_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_Breadcrumb01
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_Breadcrumb01_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KHCS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Breadcrumb02
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdateBreadcrumb02_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_Breadcrumb02
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_Breadcrumb02_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q4L8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Breadcrumb03
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdateBreadcrumb03_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_Breadcrumb03
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_Breadcrumb03_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G59O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_TalkToTannisGameOver
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_TalkToTannisGameOver_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QKM1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_TalkToTannisGameOver
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_TalkToTannisGameOver_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Talked To Tannis Game Over
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdateTalkedToTannisGameOver_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.MissionKickoff
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_MissionKickoff_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Talked To Lilith Game Over
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdateTalkedToLilithGameOver_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_GetVaultKey
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_GetVaultKey_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CQ0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_ReturnToSanctuary
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_ReturnToSanctuary_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.OBJ_ReturnToSanctuary
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_OBJ_ReturnToSanctuary_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_20KK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update_ReturnToSanctuary
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Update_ReturnToSanctuary_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_TyreenTitleCard
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_TyreenTitleCard_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5BNU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_OpenEridianChest
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_OpenEridianChest_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IITE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_OpenEridianChest
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_OpenEridianChest_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update_OpenEridianChest
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Update_OpenEridianChest_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_TyreenTitleCard
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_TyreenTitleCard_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.AdvanceTo_OpenEridianChest
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_AdvanceTo_OpenEridianChest_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_TalkToTannisAgain
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_TalkToTannisAgain_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_TalkToTannisAgain
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_TalkToTannisAgain_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3K6T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update_TalkToTannisAgain
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Update_TalkToTannisAgain_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_PlaceArtifact
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_PlaceArtifact_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_PlaceArtifact
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_PlaceArtifact_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TFXF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update_UseMayhemDevice
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Update_UseMayhemDevice_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Play Cinematic
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdatePlayCinematic_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.[Obj_TalkToTannisGameOver_Objective] PROXY
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_TalkToTannisGameOver_ObjectivePROXY_Params
	{	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_ShowCredits
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_ShowCredits_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_ShowCredits
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_ShowCredits_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_15Q6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update_ShowCredits
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Update_ShowCredits_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.AdvanceTo_EndGameCinematic
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_AdvanceTo_EndGameCinematic_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_EndGameCinematic
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_EndGameCinematic_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1E2R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.AdvanceTo_LootVault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_AdvanceTo_LootVault_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_EndGameCinematic
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_EndGameCinematic_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_LeaveVault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_LeaveVault_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G9BB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_EnterVault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_EnterVault_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7FLJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.PlayersInsideVault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_PlayersInsideVault_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.PlayersOutsideVault
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_PlayersOutsideVault_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_TalkToLilithGameOver
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_TalkToLilithGameOver_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_TyreenDeadCine
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_TyreenDeadCine_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_TyreenDeadCine
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_TyreenDeadCine_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5PN8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_TalkToLilithGameOver
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_TalkToLilithGameOver_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HQTC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Set_KillTyreen
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Set_KillTyreen_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update_GoToLilithsRoom
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Update_GoToLilithsRoom_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_GoToLilithsRoom
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_GoToLilithsRoom_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRTO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Obj_KillTyreen
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_Obj_KillTyreen_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ECL0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.Update Portal Entered
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_UpdatePortalEntered_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Ep23_TyreenFinalBoss.Mission_Ep23_TyreenFinalBoss_C.ExecuteUbergraph_Mission_Ep23_TyreenFinalBoss
	 */
	struct UMission_Ep23_TyreenFinalBoss_C_ExecuteUbergraph_Mission_Ep23_TyreenFinalBoss_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HU7R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
