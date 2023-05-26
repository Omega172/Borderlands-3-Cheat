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
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_15
	 */
	struct UMission_PortaPrison_C_OnDialogSequenceFinished_15_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_14
	 */
	struct UMission_PortaPrison_C_OnDialogSequenceFinished_14_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_13
	 */
	struct UMission_PortaPrison_C_OnDialogSequenceFinished_13_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_12
	 */
	struct UMission_PortaPrison_C_OnDialogSequenceFinished_12_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_11
	 */
	struct UMission_PortaPrison_C_OnDialogSequenceFinished_11_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_10
	 */
	struct UMission_PortaPrison_C_OnDialogSequenceFinished_10_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.OnDialogSequenceFinished_9
	 */
	struct UMission_PortaPrison_C_OnDialogSequenceFinished_9_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_InstallAIChip
	 */
	struct UMission_PortaPrison_C_Set_InstallAIChip_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_InstallAIChip
	 */
	struct UMission_PortaPrison_C_Obj_InstallAIChip_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6BTC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_DefendPotty
	 */
	struct UMission_PortaPrison_C_Set_DefendPotty_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_DefendPotty
	 */
	struct UMission_PortaPrison_C_Obj_DefendPotty_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G8MN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_FindPrisoner
	 */
	struct UMission_PortaPrison_C_Set_FindPrisoner_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FindPrisoner
	 */
	struct UMission_PortaPrison_C_Obj_FindPrisoner_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UPUO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_ActivatePortaPotty
	 */
	struct UMission_PortaPrison_C_ME_ActivatePortaPotty_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_DestroyBot
	 */
	struct UMission_PortaPrison_C_Set_DestroyBot_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_DestroyedBot
	 */
	struct UMission_PortaPrison_C_Obj_DestroyedBot_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BHFE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_CollectAIChip
	 */
	struct UMission_PortaPrison_C_Set_CollectAIChip_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_CollectAIChip
	 */
	struct UMission_PortaPrison_C_Obj_CollectAIChip_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7GEJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateDestroyBot
	 */
	struct UMission_PortaPrison_C_ME_UpdateDestroyBot_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdatePaintGraffiti
	 */
	struct UMission_PortaPrison_C_ME_UpdatePaintGraffiti_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateInstallAIChip
	 */
	struct UMission_PortaPrison_C_ME_UpdateInstallAIChip_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateDefendPotty
	 */
	struct UMission_PortaPrison_C_ME_UpdateDefendPotty_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_BreakTank
	 */
	struct UMission_PortaPrison_C_Obj_BreakTank_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q1IR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_BreakTank
	 */
	struct UMission_PortaPrison_C_Set_BreakTank_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_CollectAIChip2
	 */
	struct UMission_PortaPrison_C_Set_CollectAIChip2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_CollectAIChip2
	 */
	struct UMission_PortaPrison_C_Obj_CollectAIChip2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WROR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_InstallAIChip2
	 */
	struct UMission_PortaPrison_C_Obj_InstallAIChip2_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O882[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_InstallAIChip2
	 */
	struct UMission_PortaPrison_C_Set_InstallAIChip2_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateBreakTank
	 */
	struct UMission_PortaPrison_C_ME_UpdateBreakTank_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_DestroyWMSBot
	 */
	struct UMission_PortaPrison_C_Set_DestroyWMSBot_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateDestroyWMSBot
	 */
	struct UMission_PortaPrison_C_ME_UpdateDestroyWMSBot_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_DestroyWMSBot
	 */
	struct UMission_PortaPrison_C_Obj_DestroyWMSBot_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QTRM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateInstallAIChip2
	 */
	struct UMission_PortaPrison_C_ME_UpdateInstallAIChip2_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateFindPrisoner
	 */
	struct UMission_PortaPrison_C_ME_UpdateFindPrisoner_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateFindVandals
	 */
	struct UMission_PortaPrison_C_ME_UpdateFindVandals_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_FindVandals
	 */
	struct UMission_PortaPrison_C_Set_FindVandals_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FindVandals
	 */
	struct UMission_PortaPrison_C_Obj_FindVandals_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T4PQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateGetSprayPaint
	 */
	struct UMission_PortaPrison_C_ME_UpdateGetSprayPaint_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_GetSprayPaint
	 */
	struct UMission_PortaPrison_C_Set_GetSprayPaint_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_GetSprayPaint
	 */
	struct UMission_PortaPrison_C_Obj_GetSprayPaint_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I8KH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_Initial
	 */
	struct UMission_PortaPrison_C_Set_Initial_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToDefendPotty
	 */
	struct UMission_PortaPrison_C_AdvToDefendPotty_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToDestroyBot
	 */
	struct UMission_PortaPrison_C_AdvToDestroyBot_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToBreakTank
	 */
	struct UMission_PortaPrison_C_AdvToBreakTank_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToDestroyWMS
	 */
	struct UMission_PortaPrison_C_AdvToDestroyWMS_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_FakeLaunch
	 */
	struct UMission_PortaPrison_C_Set_FakeLaunch_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FakeLaunch
	 */
	struct UMission_PortaPrison_C_Obj_FakeLaunch_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0K4K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToFakeLaunch
	 */
	struct UMission_PortaPrison_C_AdvToFakeLaunch_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_KillVandals
	 */
	struct UMission_PortaPrison_C_Obj_KillVandals_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6GHZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_KillVandals
	 */
	struct UMission_PortaPrison_C_Set_KillVandals_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ME_UpdateKillVandals
	 */
	struct UMission_PortaPrison_C_ME_UpdateKillVandals_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToKillVandals
	 */
	struct UMission_PortaPrison_C_AdvToKillVandals_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToCollectPaint
	 */
	struct UMission_PortaPrison_C_AdvToCollectPaint_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvToFnidVandals
	 */
	struct UMission_PortaPrison_C_AdvToFnidVandals_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_INV_SpawnWMSBot
	 */
	struct UMission_PortaPrison_C_Obj_INV_SpawnWMSBot_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZOKA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_INV_PottyMusic
	 */
	struct UMission_PortaPrison_C_Obj_INV_PottyMusic_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GSB9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_PottyMusic
	 */
	struct UMission_PortaPrison_C_Set_PottyMusic_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_PaintGraffiti
	 */
	struct UMission_PortaPrison_C_Obj_PaintGraffiti_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_444C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.[Obj_INV_PottyMusic_Objective] PROXY
	 */
	struct UMission_PortaPrison_C_Obj_INV_PottyMusic_ObjectivePROXY_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.[Obj_INV_PottyMusic_Objective] PROXY_1
	 */
	struct UMission_PortaPrison_C_Obj_INV_PottyMusic_ObjectivePROXY_1_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvTo_PottyMusic
	 */
	struct UMission_PortaPrison_C_AdvTo_PottyMusic_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvTo_CollectAIChip
	 */
	struct UMission_PortaPrison_C_AdvTo_CollectAIChip_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.AdvTo_InstallAIChip
	 */
	struct UMission_PortaPrison_C_AdvTo_InstallAIChip_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.[Obj_INV_PottyMusic_Objective] PROXY_2
	 */
	struct UMission_PortaPrison_C_Obj_INV_PottyMusic_ObjectivePROXY_2_Params
	{	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_KillPrisoner
	 */
	struct UMission_PortaPrison_C_Obj_KillPrisoner_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZUU6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_KillPrisoner
	 */
	struct UMission_PortaPrison_C_Set_KillPrisoner_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Update_KillPrisoner
	 */
	struct UMission_PortaPrison_C_Update_KillPrisoner_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_CollectWeapon
	 */
	struct UMission_PortaPrison_C_Obj_CollectWeapon_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OCG3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_CollectWeapon
	 */
	struct UMission_PortaPrison_C_Set_CollectWeapon_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Update_CollectWeapon
	 */
	struct UMission_PortaPrison_C_Update_CollectWeapon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Update_FindVandals_BC1
	 */
	struct UMission_PortaPrison_C_Update_FindVandals_BC1_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_FindVandals_BC1
	 */
	struct UMission_PortaPrison_C_Obj_FindVandals_BC1_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N0IR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Obj_TrackingKillingVandals
	 */
	struct UMission_PortaPrison_C_Obj_TrackingKillingVandals_Params
	{
	public:
		EMissionObjectiveEvent                                     ObjectiveEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GO0C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ObjectiveCount;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.Set_PaintGraffiti
	 */
	struct UMission_PortaPrison_C_Set_PaintGraffiti_Params
	{
	public:
		EMissionObjectiveSetEvent                                  ObjectiveSetEvent;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Mission_Porta-Prison.Mission_Porta-Prison_C.ExecuteUbergraph_Mission_Porta-Prison
	 */
	struct UMission_PortaPrison_C_ExecuteUbergraph_Mission_PortaPrison_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
