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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Mission_COVSlaughter1.Mission_COVSlaughter1_C
	 * Size -> 0x0121 (FullSize[0x0631] - InheritedSize[0x0510])
	 */
	class UMission_COVSlaughter1_C : public UOakMissionCircleOfSlaughter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjective*                                   Obj_StartRound_1_ObjVar;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Rounds_ObjVar;                                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteWave_1_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TurnIn_ObjSetVar;                                    // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TurnIn_ObjVar;                                       // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OptionalObjective_1_ObjVar;                          // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round_1_ObjSetVar;                                   // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round_2_ObjSetVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartRound_2_ObjVar;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteWave_2_ObjVar;                               // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round_3_ObjSetVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartRound_3_ObjVar;                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteWave_3_ObjVar;                               // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round_4_ObjSetVar;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartRound_4_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteWave_4_ObjVar;                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Round_5_ObjSetVar;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StartRound_5_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CompleteWave_5_ObjVar;                               // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OptionalObjective_2_ObjVar;                          // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OptionalObjective_3_ObjVar;                          // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OptionalObjective_4_ObjVar;                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OptionalObjective_5_ObjVar;                          // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASlaughterGameMode*                                  SlaughterGameMode;                                       // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RoundCount;                                              // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_45B2[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_INVIS_AssembleRound1_ObjVar;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_Assemble2_ObjVar;                              // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_Assemble3_ObjVar;                              // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_Assemble4_ObjVar;                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_Assemble5_ObjVar;                              // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SlaughterGameState_C*                            SlaughterGameState;                                      // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_INVIS_PlayersDiedinRound_ObjVar;                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogConversation                                 TorgueVOStart;                                           // 0x0618(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y4HW[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_DropshipCleared_ObjVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerUsedButtonCoV;                                     // 0x0630(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void OnDialogSequenceFinished_7();
		void OnDialogSequenceFinished_6();
		void Obj_StartRound_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Round_2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Rounds(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_CompleteWave_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_CompleteWave_2(class UObject* Context);
		void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_Obj_TurnIn(class UObject* Context);
		void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_RoundCounter(class UObject* Context);
		void Obj_OptionalObjective_2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_StartRound_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Round_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteWave_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_CompleteWave_3(class UObject* Context);
		void Obj_StartRound_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Round_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteWave_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_CompleteWave_4(class UObject* Context);
		void Obj_StartRound_5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Round_5(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteWave_5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_CompleteWave_5(class UObject* Context);
		void Obj_StartRound_6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Round_6(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CompleteWave_6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_CompleteWave_6(class UObject* Context);
		void Obj_OptionalObjective_3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OptionalObjective_4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OptionalObjective_5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_OptionalObjective_6(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayersAllDied(class UObject* Context);
		void MCE_SwitchUsed(class UObject* Context);
		void Obj_Rounds_ObjectivePROXY();
		void Obj_Rounds_ObjectivePROXY_1();
		void Obj_Rounds_ObjectivePROXY_2();
		void Obj_Rounds_ObjectivePROXY_3();
		void Obj_INVIS_AssembleRound1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayersAssembled(class UObject* Context);
		void MCE_PlayersNotAssembled(class UObject* Context);
		void Obj_INVIS_Assemble2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INVIS_Assemble3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INVIS_Assemble4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_INVIS_Assemble5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayerDied(class UObject* Context);
		void MissionKickoff();
		void Obj_INVIS_PlayersDiedinRound(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_PlayersAllDiedInRound(class UObject* Context);
		void Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_4();
		void Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_5();
		void Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_6();
		void Obj_INVIS_PlayersDiedinRound_ObjectivePROXY_7();
		void MCE_BossSpawns(class UObject* Context);
		void MissionActiveLoad();
		void MissionActive();
		void Obj_DropshipCleared(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_Obj_DropshipCleared(class UObject* Context);
		void MCE_BC_NotAllAssembled(class UObject* Context);
		void ExecuteUbergraph_Mission_COVSlaughter1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
