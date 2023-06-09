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
	 * BlueprintGeneratedClass Mission_Ep03_ObsidianForest.Mission_Ep03_ObsidianForest_C
	 * Size -> 0x0470 (FullSize[0x0980] - InheritedSize[0x0510])
	 */
	class UMission_Ep03_ObsidianForest_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		EMissionObjectiveEvent                                     ObjStatus_ChaddUsesLift;                                 // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7U80[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_GoToObsidianForest_ObjSetVar;                        // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToObsidianForest_ObjVar;                           // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenBugContainers_ObjSetVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBugContainers_ObjVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowGrannyOverlook_ObjSetVar;                      // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowGrannyOverlook_ObjVar;                         // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ShootTamingNestTraining_ObjSetVar;                   // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShootTamingNestTraining_ObjVar;                      // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillDevilriders_TrainStation_ObjSetVar;              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillDevilriders_TrainStation_ObjVar;                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindMineEntrance_ObjSetVar;                          // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindMineEntrance_ObjVar;                             // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetCoreBombs_ObjSetVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetCoreBombs_ObjVar;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceExplosives_ObjSetVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceCoreBomb1_ObjVar;                               // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeleeSploderBlowTrainTrack_ObjSetVar;                // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeSploderBlowTrainTrack_ObjVar;                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatMutatedBiobeast_ObjSetVar;                     // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatMutatedBiobeast_ObjVar;                        // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ReturnToJunoForestStart_ObjSetVar;                   // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ReturnToJunoForestStart_ObjVar;                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToJunoReadyForForest_ObjSetVar;                  // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToJunoReadyForForest_ObjVar;                     // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InvestigateTrainWreckage_ObjSetVar;                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InvestigateTrainWreckage_ObjVar;                     // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BlowMineExitTunnel_ObjSetVar;                        // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BlowMineExitTunnel_ObjVar;                           // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToGrannyIntroduction_ObjSetVar;                  // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToGrannyIntroduction_ObjVar;                     // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBiobeastCageFight_ObjSetVar;                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBiobeastCageFight_ObjVar;                        // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTheTrain_ObjSetVar;                              // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTheTrain_ObjVar;                                 // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceCoreBomb2_ObjVar;                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBugContainer1_ObjVar;                            // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBugContainer2_ObjVar;                            // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenBugContainer3_ObjVar;                            // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GetCoreForGranny_ObjVar;                             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceExplosives_ObjVar;                              // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveCoreToGranny_ObjSetVar;                          // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveCoreToGranny_ObjVar;                             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeInfusedCoreFromGranny_ObjSetVar;                 // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeInfusedCoreFromGranny_ObjVar;                    // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_InjectInfusedCoreIntoBugContainers_ObjSetVar;        // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InjectInfusedCoreIntoBugContainers_ObjVar;           // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InjectContainer1_ObjVar;                             // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InjectContainer2_ObjVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_InjectContainer3_ObjVar;                             // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GetCoreForGranny_ObjSetVar;                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseValveStopCoreLoading_ObjVar;                      // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseRockSploderStopCoreLoading_ObjSetVar;             // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UseRockSploderStopCoreLoading_ObjVar;                // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceMineExitTunnelExplosive_ObjVar;                 // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceMineExitTunnelExplosive_ObjSetVar;              // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToConductor_ObjVar;                              // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToConductor_ObjSetVar;                           // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowGrannyExit_ObjVar;                             // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowGrannyExit_ObjSetVar;                          // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitTheMine_ObjVar;                                  // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExitTheMine_ObjSetVar;                               // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindConductor_ObjVar;                                // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindConductor_ObjSetVar;                             // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTownFromDevils_ObjVar;                         // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendTownFromDevils_ObjSetVar;                      // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToJunoPostDevilFight_ObjVar;                     // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkTojunoPostDevilFight_ObjSetVar;                  // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceTapestrySheriffsOffice_ObjVar;                  // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceTapestrySheriffsOffice_ObjSetVar;               // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrannyTitleCard_ObjSetVar;                           // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrannyTitleCard_ObjVar;                              // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MutatedBiobeastTitleCard_ObjSetVar;                  // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MutatedBiobeastTitleCard_ObjVar;                     // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyBlocker1_ObjVar;                              // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowJunoToSheriffsOffice_ObjSetVar;                // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowJunoToSheriffsOffice_ObjVar;                   // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenSheriffsLootChest_ObjSetVar;                     // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenSheriffsLootChest_ObjVar;                        // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowGrannyLab_ObjSetVar;                           // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowGrannyLab_ObjVar;                              // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindGrannysHomestead_ObjVar;                         // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToGranny_ObjSetVar;                                // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToGranny_ObjVar;                                   // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb01_ObjVar;                                 // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb02_ObjVar;                                 // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb03_ObjVar;                                 // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb04_ObjVar;                                 // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindConductorTryAgain_ObjSetVar;                     // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindConductorTryAgain_ObjVar;                        // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindConductorForReal_ObjSetVar;                      // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindConductorForReal_ObjVar;                         // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MoveGrannyToCage_ObjSetVar;                          // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveGrannyToCage_ObjVar;                             // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTownDevil1_ObjVar;                             // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendTownDevil1_ObjSetVar;                          // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendTownDevil2_ObjSetVar;                          // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTownDevil2_ObjVar;                             // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendTownDevil3_ObjSetVar;                          // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearTheGarden_ObjSetVar;                            // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTownDevil3_ObjVar;                             // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefendTownDevil0_ObjSetVar;                          // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTownDevil0_ObjVar;                             // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTownFollowJuno_ObjVar;                         // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ExitTheCrashSite_ObjSetVar;                          // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitTheCrashSite_ObjVar;                             // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GardenBadass_ObjSetVar;                              // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GardenBadass_ObjVar;                                 // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UseValveStopCoreLoading_ObjSetVar;                   // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StopTheTrain_ObjVar;                                 // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StopTheTrain_ObjSetVar;                              // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CoreBombCount;                                           // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NLU1[0x4];                                   // 0x0894(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_DestroyBlocker1_ObjSetVar;                           // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyBlocker2_ObjSetVar;                           // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyBlocker2_ObjVar;                              // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveGrannyToOverlook_ObjVar;                         // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrainlineSpotted_ObjVar;                             // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrannyWaitingAtLab_ObjSetVar;                        // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrannyWaitingAtLab_ObjVar;                           // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrannyArrivedAtLab_ObjVar;                           // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowGrannyContainers_ObjSetVar;                    // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowGrannyContainers_ObjVar;                       // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MoveGrannyToTrainingArea_ObjSetVar;                  // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MoveGrannyToTrainingArea_ObjVar;                     // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ShotBeastInstead_ObjVar;                             // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrainMovesOut_ObjVar;                                // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FirstDudeDies_ObjVar;                                // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ConductorDies_ObjVar;                                // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyCoreLoader_ObjVar;                            // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindGrannysHomestead_ObjSetVar;                      // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearTheGarden_ObjVar;                               // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefendTownDevil4_ObjVar;                             // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefentTownDevil4_ObjSetVar;                          // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrossTheFrontierForest_ObjSetVar;                    // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CrossTheFrontier_ObjVar;                             // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier01_ObjVar;                        // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier02_ObjVar;                        // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier03_ObjVar;                        // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier04_ObjVar;                        // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier05_ObjVar;                        // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TrainGoAway_ObjVar;                                  // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnDialogSequenceFinished_69();
		void OnDialogSequenceFinished_68();
		void OnDialogSequenceFinished_67();
		void OnDialogSequenceFinished_66();
		void OnDialogSequenceFinished_65();
		void OnDialogSequenceFinished_64();
		void OnDialogSequenceFinished_63();
		void OnDialogSequenceFinished_62();
		void OnDialogSequenceFinished_61();
		void OnDialogSequenceFinished_60();
		void OnDialogSequenceFinished_59();
		void OnDialogSequenceFinished_58();
		void OnDialogSequenceFinished_57();
		void OnDialogSequenceFinished_56();
		void OnDialogSequenceFinished_55();
		void OnDialogSequenceFinished_54();
		void OnDialogSequenceFinished_53();
		void OnDialogSequenceFinished_52();
		void OnDialogSequenceFinished_51();
		void OnDialogSequenceFinished_50();
		void OnDialogSequenceFinished_49();
		void OnDialogSequenceFinished_48();
		void OnDialogSequenceFinished_47();
		void OnDialogSequenceFinished_46();
		void OnDialogSequenceFinished_45();
		void OnDialogSequenceFinished_44();
		void OnDialogSequenceFinished_43();
		void OnDialogSequenceFinished_42();
		void OnDialogSequenceFinished_41();
		void OnDialogSequenceFinished_40();
		void OnDialogSequenceFinished_39();
		void OnDialogSequenceFinished_38();
		void OnDialogSequenceFinished_37();
		void OnDialogSequenceFinished_36();
		void MCEFollowGrannyExit(class UObject* Context);
		void Set_ExitTheMine(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExitTheMine(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEExitTheMine(class UObject* Context);
		void Obj_FollowGrannyExit(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowGrannyExit(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCETalkToConductor(class UObject* Context);
		void Obj_TalkToConductor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindConductor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindConductor(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindConductor(class UObject* Context);
		void Set_TalkToConductor(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEPlaceMineExitTunnelExplosive(class UObject* Context);
		void Set_DefendTownFromDevils(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendTownFromDevils(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDefendTownFromDevils(class UObject* Context);
		void Obj_PlaceMineExitTunnelExplosive(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceMineExitTunnelExplosive(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_TalkToJunoPostDevilFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TalkToJunoPostDevilFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCETalkToJunoPostDevilFight(class UObject* Context);
		void MCEUseValveStopCoreLoading(class UObject* Context);
		void Obj_UseValveStopCoreLoading(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceTapestrySheriffsOffice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_PlaceTapestrySheriffsOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEPlaceTapestrySheriffsOffice(class UObject* Context);
		void MCEUseRockSploderStopCoreLoading(class UObject* Context);
		void Obj_UseRockSploderStopCoreLoading(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseRockSploderStopCoreLoading(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEDefeatMutatedBiobeast(class UObject* Context);
		void Set_GetCoreForGranny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEInjectContainer3(class UObject* Context);
		void Obj_InjectContainer3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GrannyTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GrannyTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEInjectContainer2(class UObject* Context);
		void Obj_InjectContainer2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEInjectContainer1(class UObject* Context);
		void Obj_InjectContainer1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MutatedBiobeastTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MutatedBiobeastTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DestroyBlocker1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDestroyBlocker1(class UObject* Context);
		void Set_FollowJunoToSheriffsOffice(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowJunoToSheriffsOffice(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFollowJunoToSheriffsOffice(class UObject* Context);
		void MCEInjectInfusedCoreIntoBugContainers(class UObject* Context);
		void Obj_InjectInfusedCoreIntoBugContainers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InjectInfusedCoreIntoBugContainers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_OpenSheriffsLootChest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenSheriffsLootChest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEOpenSheriffsLootChest(class UObject* Context);
		void MCETakeInfusedCoreFromGranny(class UObject* Context);
		void Obj_TakeInfusedCoreFromGranny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowGrannyLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowGrannyLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFollowGrannyLab(class UObject* Context);
		void Set_TakeInfusedCoreFromGranny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEGiveCoreToGranny(class UObject* Context);
		void Obj_FindGrannysHomestead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindGrannysHomestead(class UObject* Context);
		void Set_GoToGranny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToGranny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGoToGranny(class UObject* Context);
		void Obj_GiveCoreToGranny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GiveCoreToGranny(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEPlaceExplosives(class UObject* Context);
		void UpdateBreadcrumb01(class UObject* Context);
		void Obj_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb02(class UObject* Context);
		void Obj_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb03(class UObject* Context);
		void Obj_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb04(class UObject* Context);
		void Obj_Breadcrumb04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindConductorTryAgain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindConductorTryAgain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindConductorTryAgain(class UObject* Context);
		void Obj_PlaceExplosives(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGetCoreForGranny(class UObject* Context);
		void Set_FindConductorForReal(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindConductorForReal(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindConductorForReal(class UObject* Context);
		void Obj_GetCoreForGranny(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MoveGrannyToCage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MoveGrannyToCage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEOpenBugContainer3(class UObject* Context);
		void Obj_OpenBugContainer3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEOpenBugContainer2(class UObject* Context);
		void Obj_OpenBugContainer2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGrannyInCage(class UObject* Context);
		void Obj_DefendTownDevil1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDefendTownDevil1(class UObject* Context);
		void Set_DefendTownDevil1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEOpenBugContainer1(class UObject* Context);
		void Obj_OpenBugContainer1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendTownFromDevils_ObjectivePROXY_1();
		void Obj_DefendTownDevil2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDefendTownDevil2(class UObject* Context);
		void Set_DefendTownDevil2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEPlaceCoreBomb2(class UObject* Context);
		void Obj_DefendTownFromDevils_ObjectivePROXY_2();
		void Obj_PlaceCoreBomb2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDefendTownDevil3(class UObject* Context);
		void Set_DefendTownDevil3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendTownFromDevils_ObjectivePROXY_3();
		void MCEClearTheGarden(class UObject* Context);
		void Set_ClearTheGarden(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StopTheTrain_ObjectivePROXY();
		void MCEFindTheTrain(class UObject* Context);
		void Obj_FindTheTrain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindTheTrain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendTownDevil3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendTownDevil0(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDefendTownDevil0(class UObject* Context);
		void Set_DefendTownDevil0(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEKillBiobeastCageFight(class UObject* Context);
		void Obj_KillBiobeastCageFight(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendTownFromDevils_ObjectivePROXY_4();
		void Set_KillBiobeastCageFight(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendTownFollowJuno(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDefendTownFollowJuno(class UObject* Context);
		void Obj_DefendTownFollowJuno_ObjectivePROXY_5();
		void Obj_DefendTownFollowJuno_ObjectivePROXY_6();
		void Obj_DefendTownFollowJuno_ObjectivePROXY_7();
		void Obj_DefendTownFollowJuno_ObjectivePROXY_8();
		void Set_ExitTheCrashSite(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ExitTheCrashSite(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEExitTheCrashSite(class UObject* Context);
		void MCETalkToGrannyIntroduction(class UObject* Context);
		void Obj_TalkToGrannyIntroduction(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToGrannyIntroduction(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEGardenBadass(class UObject* Context);
		void Set_GardenBadass(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEBlowMineExitTunnel(class UObject* Context);
		void Obj_BlowMineExitTunnel(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BlowMineExitTunnel(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GardenBadass(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_UseValveStopCoreLoading(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEFindMineEntrance(class UObject* Context);
		void MCEInvestigateTrainWreckage(class UObject* Context);
		void Obj_InvestigateTrainWreckage(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_InvestigateTrainWreckage(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_StopTheTrain(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_StopTheTrain(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEStopTheTrain(class UObject* Context);
		void MCETalkToJunoReadyForForest(class UObject* Context);
		void Obj_TalkToJunoReadyForForest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToJunoReadyForForest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DestroyBlocker1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEReturnToJunoForestStart(class UObject* Context);
		void Obj_ReturnToJunoForestStart(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ReturnToJunoForestStart(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GetCoreBombs_ObjectivePROXY_9();
		void Obj_DestroyBlocker2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDestroyBlocker2(class UObject* Context);
		void Set_DestroyBlocker2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void MCEPlaceCoreBomb1(class UObject* Context);
		void Obj_GetCoreBombs_ObjectivePROXY_10();
		void Obj_MoveGrannyToOverlook(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEMoveGrannyToOverlook(class UObject* Context);
		void Obj_TrainlineSpotted(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCETrainLineSpotted(class UObject* Context);
		void Obj_DefeatMutatedBiobeast(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefeatMutatedBiobeast(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GrannyWaitingAtLab(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GrannyWaitingAtLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGrannyWaitingAtLab(class UObject* Context);
		void MCEOpenBugContainers(class UObject* Context);
		void Obj_PlaceCoreBomb1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceExplosives(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowGrannyLab_ObjectivePROXY_11();
		void Obj_GrannyArrivedAtLab(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGrannyArrivedAtLab(class UObject* Context);
		void Set_FollowGrannyContainers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowGrannyContainers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFollowGrannyContainers(class UObject* Context);
		void Obj_FindMineEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindMineEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MoveGrannyToTrainingArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MoveGrannyToTrainingArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEMoveGrannyToTrainingArea(class UObject* Context);
		void MCEGetCoreBombs(class UObject* Context);
		void Obj_GetCoreBombs(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FollowGrannyOverlook_ObjectivePROXY_12();
		void Obj_FollowGrannyOverlook_ObjectivePROXY_13();
		void Obj_ShotBeastInstead(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEShotBeastInstead(class UObject* Context);
		void Obj_TrainMovesOut(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCETrainMovesOut(class UObject* Context);
		void Obj_StopTheTrain_ObjectivePROXY_14();
		void Obj_StopTheTrain_ObjectivePROXY_15();
		void Obj_StopTheTrain_ObjectivePROXY_16();
		void Obj_StopTheTrain_ObjectivePROXY_17();
		void Obj_StopTheTrain_ObjectivePROXY_18();
		void Obj_StopTheTrain_ObjectivePROXY_19();
		void Obj_StopTheTrain_ObjectivePROXY_20();
		void Obj_StopTheTrain_ObjectivePROXY_21();
		void Obj_FirstDudeDies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFirstDudeDies(class UObject* Context);
		void Obj_ConductorDies(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEConductorDies(class UObject* Context);
		void Obj_DestroyCoreLoader(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDestroyCoreLoader(class UObject* Context);
		void Set_GetCoreBombs(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEFollowGrannyOverlook(class UObject* Context);
		void MCEShootTamingNestTraining(class UObject* Context);
		void Set_FindGrannysHomestead(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ShootTamingNestTraining(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TrainlineSpotted_ObjectivePROXY_22();
		void MCEDefendTownDevil4(class UObject* Context);
		void Obj_FollowGrannyOverlook(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_ShootTamingNestTraining(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenBugContainers(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendTownFromDevils_ObjectivePROXY_23();
		void Set_FollowGrannyOverlook(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DefendTownDevil4(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_DefendTownFollowJuno_ObjectivePROXY_24();
		void Obj_ClearTheGarden(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_DefentTownDevil4(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCECrossTheFrontier(class UObject* Context);
		void Set_CrossTheFrontierForest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CrossTheFrontier(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_OpenBugContainers(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEMeleeSploderBlowTrainTrack(class UObject* Context);
		void MCEKillDevilridersTrainStation(class UObject* Context);
		void MCEGoToObsidianForest(class UObject* Context);
		void UpdateBreadcrumbFrontier01(class UObject* Context);
		void Obj_Breadcrumb_Frontier01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumbFrontier02(class UObject* Context);
		void Obj_Breadcrumb_Frontier02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumbFrontier03(class UObject* Context);
		void Obj_Breadcrumb_Frontier03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumbFrontier04(class UObject* Context);
		void Obj_Breadcrumb_Frontier04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumbFrontier05(class UObject* Context);
		void Obj_Breadcrumb_Frontier05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToObsidianForest(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToObsidianForest(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCETrainGoAway(class UObject* Context);
		void Obj_TrainGoAway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_MeleeSploderBlowTrainTrack(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeleeSploderBlowTrainTrack(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_KillDevilriders_TrainStation(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillDevilriders_TrainStation(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void ExecuteUbergraph_Mission_Ep03_ObsidianForest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
