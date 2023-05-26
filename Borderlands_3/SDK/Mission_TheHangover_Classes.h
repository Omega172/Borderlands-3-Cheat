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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Mission_TheHangover.Mission_TheHangover_C
	 * Size -> 0x00A0 (FullSize[0x05B0] - InheritedSize[0x0510])
	 */
	class UMission_TheHangover_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		class UMissionObjectiveSet*                                Set_UseCoolantValve_ObjSetVar;                           // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseReactorSwitches_ObjSetVar;                        // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseBreakerSwitch1_ObjVar;                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrabTheCoolantValve_ObjSetVar;                       // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrabTheCoolantValve_ObjVar;                          // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToTheHangover_ObjSetVar;                           // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToTheHangover_ObjVar;                              // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillArtemis_ObjSetVar;                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillArtemis_ObjVar;                                  // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillApollo_ObjSetVar;                                // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillApollo_ObjVar;                                   // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBarNearlyDone_ObjSetVar;                         // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBarNearlyDone_ObjVar;                            // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseBreakerSwitch2_ObjVar;                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseBreakerSwitch3_ObjVar;                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_SwitchCounter_ObjVar;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseCoolantValve_ObjVar;                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillJabbers_ObjSetVar;                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillJabbers_ObjVar;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_13();
		void OnDialogSequenceFinished_12();
		void OnDialogSequenceFinished_11();
		void OnDialogSequenceFinished_10();
		void OnDialogSequenceFinished_9();
		void OnDialogSequenceFinished_8();
		void Set_GoToBarNearlyDone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToBarNearlyDone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGoToBarNearlyDone(class UObject* Context);
		void MCEReactorSwitch2Used(class UObject* Context);
		void Obj_UseBreakerSwitch2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEReactorSwitch3Used(class UObject* Context);
		void Obj_UseBreakerSwitch3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MissionKickoff();
		void MCEApolloIsDead(class UObject* Context);
		void Set_KillApollo(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillApollo(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEArtemisIsDead(class UObject* Context);
		void Obj_KillArtemis(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillArtemis(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEArrivedAtTheHangover(class UObject* Context);
		void Obj_GoToTheHangover(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToTheHangover(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GrabTheCoolantValve(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GrabTheCoolantValve(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEReactorSwitch1Used(class UObject* Context);
		void MCECoolantValvePlacedUsed(class UObject* Context);
		void Obj_SwitchCounter(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCE_Update_SwitchCounter(class UObject* Context);
		void Obj_UseBreakerSwitch1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseReactorSwitches(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_UseCoolantValve(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseCoolantValve(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_KillJabbers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCE_Update_KillJabbers(class UObject* Context);
		void Obj_KillJabbers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void ExecuteUbergraph_Mission_TheHangover(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
