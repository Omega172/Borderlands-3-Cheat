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
	 * BlueprintGeneratedClass Mission_DriveAwayThePain.Mission_DriveAwayThePain_C
	 * Size -> 0x00B8 (FullSize[0x05C8] - InheritedSize[0x0510])
	 */
	class UMission_DriveAwayThePain_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_GoToPrisasGarage_ObjSetVar;                          // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToPrisasGarage_ObjVar;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Ramps_ObjSetVar;                                     // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Ramp1_ObjVar;                                        // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Challenge2_ObjSetVar;                                // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Challenge2_ObjVar;                                   // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_Challenge3_ObjSetVar;                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Challenge3_ObjVar;                                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyPopsMemory_ObjSetVar;                         // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyPopsMemory_ObjVar;                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Ramp2_ObjVar;                                        // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Ramp3_ObjVar;                                        // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Ramp4_ObjVar;                                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Ramp5_ObjVar;                                        // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetPopsLoot_ObjSetVar;                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetPopsLoot_ObjVar;                                  // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb01_ObjVar;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb02_ObjVar;                                 // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetInVehicle_ObjVar;                                 // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RespawnVehicle_ObjVar;                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMissionObjectiveEvent                                     ObjStatus_RespawnVehicle;                                // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_494U[0x7];                                   // 0x05B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjective*                                   Obj_RampChallenges_ObjVar;                               // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void MCEChallenge2Failure(class UObject* Context);
		void Set_GetPopsLoot(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetPopsLoot(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEPopsLootAquired(class UObject* Context);
		void MCERemindPlayerAboutGarage(class UObject* Context);
		void MCEBreadcrumb01(class UObject* Context);
		void Obj_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEBreadcrumb02(class UObject* Context);
		void Obj_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEChallenge2Start(class UObject* Context);
		void MCEChallenge2SuccessCheck(class UObject* Context);
		void MCEChallenge3Failure(class UObject* Context);
		void MCEChallenge3Ramp1Start(class UObject* Context);
		void MCEChallenge3SuccessCheck(class UObject* Context);
		void MCERampFailureVO(class UObject* Context);
		void MCEChallenge3Ramp2Start(class UObject* Context);
		void Obj_GetInVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RespawnVehicle(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GetInVehicle_ObjectivePROXY();
		void Obj_RespawnVehicle_ObjectivePROXY_1();
		void Obj_GetInVehicle_ObjectivePROXY_2();
		void Obj_RespawnVehicle_ObjectivePROXY_3();
		void MCERamp5Completed(class UObject* Context);
		void Obj_Ramp5(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCERamp4Completed(class UObject* Context);
		void Obj_Ramp4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCERamp3Completed(class UObject* Context);
		void Obj_Ramp3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCERamp2Completed(class UObject* Context);
		void Obj_Ramp2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEPopsCarDestroyed(class UObject* Context);
		void MCEChallenge3Success(class UObject* Context);
		void MCEChallenge2Success(class UObject* Context);
		void MCEArrivedAtPrisasGarage(class UObject* Context);
		void Obj_GoToPrisasGarage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToPrisasGarage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Challenge2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Challenge2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCERamp1Completed(class UObject* Context);
		void Obj_DestroyPopsMemory(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DestroyPopsMemory(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Challenge3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_Challenge3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_Ramps(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_RampChallenges(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_RampChallenges(class UObject* Context);
		void Obj_Ramp1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_DriveAwayThePain(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
