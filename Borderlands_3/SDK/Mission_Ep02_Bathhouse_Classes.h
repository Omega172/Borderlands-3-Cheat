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
	 * BlueprintGeneratedClass Mission_Ep02_Bathhouse.Mission_Ep02_Bathhouse_C
	 * Size -> 0x03C0 (FullSize[0x08D0] - InheritedSize[0x0510])
	 */
	class UMission_Ep02_Bathhouse_C : public UBP_OakMission_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0510(0x0008) Transient, DuplicateTransient
		EMissionObjectiveEvent                                     ObjStatus_ChaddUsesLift;                                 // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NOWA[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionObjectiveSet*                                Set_MeetJunoChurch_ObjSetVar;                            // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetJunoChurch_ObjVar;                               // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TalkToTitusInCell_ObjSetVar;                         // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TalkToTitusInCell_ObjVar;                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeCoresploderThingFromTitus_ObjVar;                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLodgeEntrance_ObjSetVar;                         // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodgeEntrance_ObjVar;                            // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_KillBathhouseBoss_ObjSetVar;                         // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_KillBathhouseBoss_ObjVar;                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToMountainPass_LodgeMap_ObjSetVar;                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToMountainPass_LodgeMap_ObjVar;                    // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_StepOnPlantLift_ObjSetVar;                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_StepOnPlantLift_ObjVar;                              // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_UnlockTreasureRoom_ObjSetVar;                        // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_UnlockTreasureRoom_ObjVar;                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenPrisonerCell_ObjSetVar;                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenPrisonerCell_ObjVar;                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindAWayIntoTheLodge_ObjSetVar;                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterLodge_ObjSetVar;                                // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterLodge_ObjVar;                                   // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindTownStone_ObjSetVar;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyStolenGoods_UseRockSploder_ObjVar;            // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DestroyStolenGoods_ObjSetVar;                        // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindTownStone_ObjVar;                                // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakePlantLiftSyringe_ObjSetVar;                      // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakePlantLiftSyringe_ObjVar;                         // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrabJetBeastKey_ObjSetVar;                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrabJetBeastKey_ObjVar;                              // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GrabBossKey_ObjSetVar;                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GrabBossKey_ObjVar;                                  // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowPrisonerToMural_ObjSetVar;                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowPrisonerToMural_ObjVar;                        // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GiveJunoBadge_ObjVar;                                // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeJetBeast_ObjSetVar;                              // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeJetBeast_ObjVar;                                 // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeCoresploderToFreeTitus_ObjVar;                  // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeCoresploderThingFromTitus_ObjSetVar;             // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeleeCoresploderToFreeTitus_ObjSetVar;               // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenJetbeastKeyLockBox_ObjVar;                       // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToBossArena_ObjVar;                                // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToBossArena_ObjSetVar;                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLodge_ObjSetVar;                                 // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodge_ObjVar;                                    // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ClearGangTitusArea_ObjVar;                           // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_ClearGangTitusArea_ObjSetVar;                        // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeleeSploderPlantsInCombat_ObjVar;                   // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GotoAtriumEntrance_ObjVar;                           // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GiveJunoBadge_ObjSetVar;                             // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_LeaveTown_ObjSetVar;                                 // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindJuno_TownMap_ObjSetVar;                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindJuno_TownMap_ObjVar;                             // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LeaveTown_ObjVar;                                    // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_OpenShed_FrontierMap_ObjSetVar;                      // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_OpenShed_FrontierMap_ObjVar;                         // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb01_ObjVar;                                 // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb02_ObjVar;                                 // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb03_ObjVar;                                 // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb04_ObjVar;                                 // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb05_ObjVar;                                 // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb06_ObjVar;                                 // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb07_ObjVar;                                 // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterTreasureRoom_ObjSetVar;                         // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterTreasureRoom_ObjVar;                            // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_TakeRuninerTechDoc_ObjSetVar;                        // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_TakeRuinerTechDoc_ObjVar;                            // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_CrossTheFrontier_ObjSetVar;                          // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_CrossTheFrontier_ObjVar;                             // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_GoToLodgeCourtyard_ObjSetVar;                        // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_GoToLodgeCourtyard_ObjVar;                           // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindAWayIntoTheLodge_ObjVar;                         // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_IgniteFireworks_ObjSetVar;                           // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_IgniteFireworks_UseRockSploder_ObjVar;               // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RescueTitus_ObjVar;                                  // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowTitusToLodgeEntrance_ObjSetVar;                // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowTitusToLodgeEntrance_ObjVar;                   // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DefeatCelebratingDevilriders_ObjSetVar;              // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DefeatCelebratingDevilriders_ObjVar;                 // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DakotaTitleCard_ObjSetVar;                           // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DakotaTitleCard_ObjVar;                              // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BothRescueComplete_ObjVar;                           // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DisruptHotWaterFlow1_ObjSetVar;                      // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWaterFlow1_ObjVar;                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSomethingDestrutiveGasCan_ObjSetVar;             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSomethingDestructiveGasCan_ObjVar;               // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_EnterBathhouse_ObjSetVar;                            // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_PlaceGasCan_ObjSetVar;                               // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_PlaceGasCan_ObjVar;                                  // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FollowJunoPlantLift_ObjSetVar;                       // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FollowJunoPlantLift_ObjVar;                          // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Hidden_LeaveTownDialog_ObjVar;                       // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_BossTitleCard_ObjSetVar;                             // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_BossTitleCard_ObjVar;                                // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier01_ObjVar;                        // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier02_ObjVar;                        // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier03_ObjVar;                        // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier04_ObjVar;                        // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_Breadcrumb_Frontier05_ObjVar;                        // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_EnterBathhouse_ObjVar;                               // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindStolenGoods_ObjSetVar;                           // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindStolenGoods_ObjVar;                              // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindHotWaterPipes_ObjVar;                            // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindHotWaterPipes_ObjSetVar;                         // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_ExitGateToTitusArea_ObjVar;                          // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindLodgeVistaView_ObjSetVar;                        // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindLodgeVistaView_ObjVar;                           // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_FindSomethingToBurnTowels_ObjSetVar;                 // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_FindSomethingToBurnTowels_ObjVar;                    // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_MeetJunoPreTC_ObjSetVar;                             // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_MeetJunoPreTC_ObjVar;                                // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DisruptHotWaterFlow2_ObjSetVar;                      // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWaterFlow2_ObjVar;                         // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjectiveSet*                                Set_DisruptHotWaterFlow3_ObjSetVar;                      // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWaterFlow3_ObjVar;                         // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DestroyStolenGoods_ObjVar;                           // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_DisruptHotWater_UseRockSploder_ObjVar;               // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_LodgeDoorGoAway_ObjVar;                              // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_IgniteFireworks_ObjVar;                              // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionObjective*                                   Obj_RocketLaunch_ObjVar;                                 // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
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
		void OnDialogSequenceFinished_35();
		void OnDialogSequenceFinished_34();
		void OnDialogSequenceFinished_33();
		void OnDialogSequenceFinished_32();
		void OnDialogSequenceFinished_31();
		void OnDialogSequenceFinished_30();
		void OnDialogSequenceFinished_29();
		void Obj_GoToLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGoToLodge(class UObject* Context);
		void Set_GoToLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_ObjectivePROXY_4();
		void Set_GoToBossArena(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_ClearGangTitusArea(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_ClearGangTitusArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEClearGangTitusArea(class UObject* Context);
		void MCEGoToBossArena(class UObject* Context);
		void Obj_GoToBossArena(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEOpenJetBeastLockBox(class UObject* Context);
		void Obj_MeleeSploderPlantsInCombat(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEMeleeSploderPlantsInCombat(class UObject* Context);
		void MCEFindTownStone(class UObject* Context);
		void Obj_GoToAtriumEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGoToAtriumEntrance(class UObject* Context);
		void Set_GiveJunoBadge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenJetbeastKeyLockBox(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_LeaveTown(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_MeleeCoresploderToFreeTitus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEMeleeCoresploderToFreeTitus(class UObject* Context);
		void Set_FindJuno_TownMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindJuno_TownMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindJunoTownMap(class UObject* Context);
		void Obj_MeleeCoresploderToFreeTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeCoresploderThingFromTitus(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCETakeJetBeast(class UObject* Context);
		void Obj_LeaveTown(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCELeaveTown(class UObject* Context);
		void Set_OpenShed_FrontierMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_OpenShed_FrontierMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEOpenShedFrontierMap(class UObject* Context);
		void Obj_TakeJetBeast(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakeJetBeast(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_Breadcrumb01(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb01(class UObject* Context);
		void UpdateBreadcrumb02(class UObject* Context);
		void Obj_Breadcrumb02(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_Breadcrumb03(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb03(class UObject* Context);
		void Obj_Breadcrumb04(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb04(class UObject* Context);
		void Obj_Breadcrumb05(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb05(class UObject* Context);
		void Obj_Breadcrumb06(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb06(class UObject* Context);
		void Obj_Breadcrumb07(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void UpdateBreadcrumb07(class UObject* Context);
		void Set_EnterTreasureRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterTreasureRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEEnterTreasureRoom(class UObject* Context);
		void MCEGiveJunoBadge(class UObject* Context);
		void Obj_GiveJunoBadge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFollowPrisonerToMural(class UObject* Context);
		void Obj_FindTownStone_ObjectivePROXY_5();
		void Set_TakeRuninerTechDoc(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_TakeRuinerTechDoc(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCETakeRuinerTechDoc(class UObject* Context);
		void Obj_FollowPrisonerToMural(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowPrisonerToMural(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_ObjectivePROXY_3();
		void MCEGrabBossKey(class UObject* Context);
		void MCELeaveTownFolkBanter(class UObject* Context);
		void MCECrossTheFrontier(class UObject* Context);
		void Set_CrossTheFrontier(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_CrossTheFrontier(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GrabBossKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GrabBossKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_GoToLodgeCourtyard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLodgeCourtyard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEGrabJetBeastKey(class UObject* Context);
		void Obj_GrabJetBeastKey(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GrabJetBeastKey(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEGoToLodgeCourtyard(class UObject* Context);
		void Obj_FindAWayIntoTheLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindAWayIntoTheLodge(class UObject* Context);
		void MCETakePlantLiftSyringe(class UObject* Context);
		void Obj_TakePlantLiftSyringe(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TakePlantLiftSyringe(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_ObjectivePROXY_2();
		void Set_IgniteFireworks(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEIgniteFireworksUseRockSploder(class UObject* Context);
		void Obj_IgniteFireworks_UseRockSploder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindTownStone_ObjectivePROXY_6();
		void Obj_FindTownStone_ObjectivePROXY_7();
		void MCEUpdateOpenPrisonerCell(class UObject* Context);
		void Obj_RescueTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCERescueTitus(class UObject* Context);
		void Obj_FollowTitusToLodgeEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFollowTitusToLodgeEntrance(class UObject* Context);
		void Set_FollowTitusToLodgeEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_ObjectivePROXY_1();
		void Obj_FindTownStone_ObjectivePROXY();
		void Obj_FindTownStone(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_GoToLodge_ObjectivePROXY_8();
		void Obj_GoToLodge_ObjectivePROXY_9();
		void Obj_GoToLodge_ObjectivePROXY_10();
		void Obj_GoToLodge_ObjectivePROXY_11();
		void Obj_GoToLodge_ObjectivePROXY_12();
		void Obj_GoToLodge_ObjectivePROXY_13();
		void MCEGoToLodgeEntrance(class UObject* Context);
		void Obj_DefeatCelebratingDevilriders(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDefeatCelebratingDevilriders(class UObject* Context);
		void Set_DefeatCelebratingDevilriders(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEDestroyStolenGoodsUseRockSploder(class UObject* Context);
		void MCEEnterLodge(class UObject* Context);
		void MCETalkToTitusInCell(class UObject* Context);
		void Set_DestroyStolenGoods(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DakotaTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DakotaTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_BothRescueComplete(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEBothRescueComplete(class UObject* Context);
		void Set_DisruptHotWaterFlow1(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DisruptHotWaterFlow1(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_FindSomethingDestructiveGasCan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSomethingDestrutiveGasCan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_EnterBathhouse(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DestroyStolenGoods_UseRockSploder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindTownStone(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_EnterLodge(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_EnterLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_FindAWayIntoTheLodge(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEOpenPrisonerCell(class UObject* Context);
		void Obj_OpenPrisonerCell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDisruptHotWaterFlow1(class UObject* Context);
		void MCEFindGasCan(class UObject* Context);
		void Obj_PlaceGasCan(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_PlaceGasCan(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_ObjectivePROXY_14();
		void Set_OpenPrisonerCell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEUnlockTreasureRoom(class UObject* Context);
		void Obj_UnlockTreasureRoom(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEPlaceGasCan(class UObject* Context);
		void Obj_FindTownStone_ObjectivePROXY_15();
		void Obj_FindTownStone_ObjectivePROXY_16();
		void Set_UnlockTreasureRoom(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEStepOnPlantLift(class UObject* Context);
		void Obj_StepOnPlantLift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FollowJunoPlantLift(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FollowJunoPlantLift(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFollowJunoPlantLift(class UObject* Context);
		void Obj_Hidden_LeaveTownDialog(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCELeaveTownDialog(class UObject* Context);
		void Obj_BossTitleCard(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_BossTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_StepOnPlantLift(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEGoToMountainPassLodgeMap(class UObject* Context);
		void Obj_GoToMountainPass_LodgeMap(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToMountainPass_LodgeMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
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
		void Obj_EnterBathhouse(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEEnterBathhouse(class UObject* Context);
		void Set_FindStolenGoods(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MissionKickoff();
		void Obj_FindTownStone_ObjectivePROXY_17();
		void Obj_FindStolenGoods(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindStolenGoods(class UObject* Context);
		void Obj_FindTownStone_ObjectivePROXY_18();
		void Set_FindHotWaterPipes(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_GoToLodgeEntrance(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_GoToLodgeEntrance(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindTownStone_ObjectivePROXY_19();
		void Obj_FindHotWaterPipes(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindHotWaterPipes(class UObject* Context);
		void Obj_ExitGateToTitusArea(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEExitGateToTitusArea(class UObject* Context);
		void Obj_FollowTitusToLodgeEntrance_ObjectivePROXY_20();
		void Set_FindLodgeVistaView(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindLodgeVistaView(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEFindLodgeVistaView(class UObject* Context);
		void MCEKillBathhouseBoss(class UObject* Context);
		void Obj_KillBathhouseBoss(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_KillBathhouseBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_FindSomethingToBurnTowels(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_FindSomethingToBurnTowels(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCEMeetJunoChurch(class UObject* Context);
		void Obj_MeetJunoChurch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_MeetJunoChurch(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void MCETakeCoresploderThingFromTitus(class UObject* Context);
		void MCEFindTowels(class UObject* Context);
		void Obj_FindTownStone_ObjectivePROXY_21();
		void Set_MeetJunoPreTC(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_MeetJunoPreTC(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEMeetJunoPreTC(class UObject* Context);
		void Obj_TakeCoresploderThingFromTitus(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_TalkToTitusInCell(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Set_TalkToTitusInCell(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Set_DisruptHotWaterFlow2(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DisruptHotWaterFlow2(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDisruptHotWaterFlow2(class UObject* Context);
		void Obj_FindTownStone_ObjectivePROXY_22();
		void Set_DisruptHotWaterFlow3(EMissionObjectiveSetEvent ObjectiveSetEvent);
		void Obj_DisruptHotWaterFlow3(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDisruptHotWaterFlow3(class UObject* Context);
		void Obj_FindTownStone_ObjectivePROXY_23();
		void Obj_DestroyStolenGoods(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDestroyStolenGoods(class UObject* Context);
		void Obj_DisruptHotWater_UseRockSploder(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCEDisruptHotWaterUseRockSploder(class UObject* Context);
		void Obj_DisruptHotWater_UseRockSploder_ObjectivePROXY_24();
		void Obj_DisruptHotWater_UseRockSploder_ObjectivePROXY_25();
		void Obj_LodgeDoorGoAway(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCELodgeDoorsGoAway(class UObject* Context);
		void MCEIgniteFireworks(class UObject* Context);
		void Obj_IgniteFireworks(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void Obj_RocketLaunch(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount);
		void MCERocketLaunch(class UObject* Context);
		void MCE_EggBamfSound(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC2(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC3(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC7(class UObject* Context);
		void MCE_GoToLodgeBC_AdvanceToBC5(class UObject* Context);
		void ExecuteUbergraph_Mission_Ep02_Bathhouse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
