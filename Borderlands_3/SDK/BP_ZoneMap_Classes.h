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
	 * BlueprintGeneratedClass BP_ZoneMap.BP_ZoneMap_C
	 * Size -> 0x03DC (FullSize[0x112C] - InheritedSize[0x0D50])
	 */
	class ABP_ZoneMap_C : public AZoneMapViewer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D50(0x0008) Transient, DuplicateTransient
		class USceneComponent*                                     ZoneMapRoot;                                             // 0x0D58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     GalaxyRoot;                                              // 0x0D60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PlanetRoot;                                              // 0x0D68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Scale_Value_Alpha_667EFD5B4E33FEA7CFC9F9A263A3FAC9; // 0x0D70(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Material_Transition_Alpha_667EFD5B4E33FEA7CFC9F9A263A3FAC9; // 0x0D74(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_667EFD5B4E33FEA7CFC9F9A263A3FAC9;  // 0x0D78(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4FG3[0x7];                                   // 0x0D79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0D80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_From_Galaxy_Scale_Value_Alpha_2167DE04416C0E119BF1AB8B5E3B5558; // 0x0D88(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_From_Galaxy_Material_Transition_Alpha_2167DE04416C0E119BF1AB8B5E3B5558; // 0x0D8C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Planet_From_Galaxy__Direction_2167DE04416C0E119BF1AB8B5E3B5558; // 0x0D90(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RTHW[0x7];                                   // 0x0D91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PlanetFromGalaxy;                                        // 0x0D98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_To_Level_Scale_Target_Alpha_7FB3407745CCE41E8DD14E88E9B54E01; // 0x0DA0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_To_Level_Material_Transition_Alpha_7FB3407745CCE41E8DD14E88E9B54E01; // 0x0DA4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Planet_To_Level__Direction_7FB3407745CCE41E8DD14E88E9B54E01; // 0x0DA8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FZNH[0x7];                                   // 0x0DA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PlanetToLevel;                                           // 0x0DB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Fade_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DB8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Camera_Arm_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DBC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Transform_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DC0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Pitch_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DC4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Galaxy_To_Planet__Direction_991057714C53A17AFEA624BAEA6A25FD; // 0x0DC8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B8G5[0x7];                                   // 0x0DC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  GalaxyToPlanet;                                          // 0x0DD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_to_Galaxy_Scale_Target_Alpha_A2953A8C431FB857A3FF839AF86D2831; // 0x0DD8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_to_Galaxy_Material_Transition_Alpha_A2953A8C431FB857A3FF839AF86D2831; // 0x0DDC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Planet_to_Galaxy__Direction_A2953A8C431FB857A3FF839AF86D2831; // 0x0DE0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_87PF[0x7];                                   // 0x0DE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PlanettoGalaxy;                                          // 0x0DE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Scale_Value_Alpha_143D312D4730AE7BD464D192A5B81B5D; // 0x0DF0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Material_Transition_Alpha_143D312D4730AE7BD464D192A5B81B5D; // 0x0DF4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_143D312D4730AE7BD464D192A5B81B5D;  // 0x0DF8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6HQV[0x7];                                   // 0x0DF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0E00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dismiss_Animation_Alpha_115B5F9042CF9F4F3F29778C38861C87; // 0x0E08(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dismiss_Material_Transition_Alpha_115B5F9042CF9F4F3F29778C38861C87; // 0x0E0C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Dismiss__Direction_115B5F9042CF9F4F3F29778C38861C87;     // 0x0E10(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OQ7L[0x7];                                   // 0x0E11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Dismiss;                                                 // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Opacity_Alpha_513EE17043A3593D71D2DDA2479C5D03;    // 0x0E20(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Animation_Interpolation_Alpha_513EE17043A3593D71D2DDA2479C5D03; // 0x0E24(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Distortion_513EE17043A3593D71D2DDA2479C5D03;       // 0x0E28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Display_Radius_Alpha_513EE17043A3593D71D2DDA2479C5D03; // 0x0E2C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Alpha_513EE17043A3593D71D2DDA2479C5D03;            // 0x0E30(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Alpha__Direction_513EE17043A3593D71D2DDA2479C5D03;       // 0x0E34(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5OFK[0x3];                                   // 0x0E35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Alpha;                                                   // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationSpeed;                                           // 0x0E40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V9JG[0x4];                                   // 0x0E44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOakPlayerController*                                OwningController;                                        // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UObject*>                                     POIActors;                                               // 0x0E50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UStaticMeshComponent*                                PlayerWidget;                                            // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PointCloudPS;                                            // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              FogOfDiscoveryTexture;                                   // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UProceduralMeshComponent*                            DecoMeshComponent;                                       // 0x0E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FZoneMapSection>                             ZoneMapSections;                                         // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    ActiveSectionIndex;                                      // 0x0E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisableZoneConstraints;                                 // 0x0E94(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DXVC[0x3];                                   // 0x0E95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UZoneMapData*                                        ZoneMapData;                                             // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              SceneCapture;                                            // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_SceneBlur;                                           // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              BlurredScene;                                            // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlanetMapData_C*                                    PlanetMapData;                                           // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class AOakPlayerState*, class UStaticMeshComponent*>  PartyMembers;                                            // 0x0EC0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            BackgroundDMI;                                           // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGFxMapMenu*                                         OwningMenu;                                              // 0x0F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EZoneMapMode                                               MapMode;                                                 // 0x0F20(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8PZW[0x7];                                   // 0x0F21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                ZoneMapGrid;                                             // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Compass;                                                 // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisplayingLoadedLevel;                                  // 0x0F38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bExitingMap;                                             // 0x0F39(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4QDS[0x6];                                   // 0x0F3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ZoneMap_Planet_C*                                PlanetActor;                                             // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PlanetMapMesh;                                           // 0x0F48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPendingGalaxyMap;                                       // 0x0F50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTransitioning;                                          // 0x0F51(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugMode;                                              // 0x0F52(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RHJ8[0x1];                                   // 0x0F53(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaSeconds;                                            // 0x0F54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BackgroundOpacity;                                       // 0x0F58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C6QC[0x4];                                   // 0x0F5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DesiredLevelName;                                        // 0x0F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClosePlanetMode;                                       // 0x0F70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCloseGalaxyMode;                                       // 0x0F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCloseLevelMode;                                        // 0x0F90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UObject*>                                     PlanetMapPOITravelStations;                              // 0x0FA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_PlanetPOI_C*>                             PlanetMapPOIZones;                                       // 0x0FB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		struct FTransform                                          DesiredTransform;                                        // 0x0FC0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StarOpacity;                                             // 0x0FF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EDMP[0x4];                                   // 0x0FF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_FogOfDiscoveryManager_C*                         FogOfDiscoveryManager;                                   // 0x0FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            LevelMapProjectionDMI;                                   // 0x1000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ZoneMap_Galaxy_C*                                GalaxyActor;                                             // 0x1008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GalaxyCurrentPitchDelta;                                 // 0x1010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GalaxyCurrentYawDelta;                                   // 0x1014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_GalaxyPOI_C*>                             GalaxyMapPOIs;                                           // 0x1018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		struct FRotator                                            GalaxyCameraRotationTarget;                              // 0x1028(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A72K[0x4];                                   // 0x1034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGalaxyMapData_C*                                    GalaxyData;                                              // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlanetCurrentYawDelta;                                   // 0x1040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlanetCurrentPitchDelta;                                 // 0x1044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PlanetCameraRotationTarget;                              // 0x1048(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ZoomSpeedModifier_Tuning;                                // 0x1054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_Rot_Pitch;                                        // 0x1058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_Rot_Spin;                                         // 0x105C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DEBUG_PlanetPOIIndex;                                    // 0x1060(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlanetPOIBoundsOrigin;                                   // 0x1064(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentRotation;                                         // 0x1070(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYS3[0x4];                                   // 0x107C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              test_FocusedZone;                                        // 0x1080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOakProfile*                                         Player_Profile;                                          // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      POIMagnetismTriggerDistanceMultiplier;                   // 0x1090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Planet_Rotation_Target;                                  // 0x1094(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UOakProfile*                                         Oak_Profile;                                             // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Local_Max_Yaw;                                           // 0x10A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Planet_Gimble_Target;                                    // 0x10AC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxHeight;                                               // 0x10B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Transform_Target_Keyframe;                               // 0x10BC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Rotation_Pitch_Target_Keyframe;                          // 0x10C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scale_Target_Keyframe;                                   // 0x10CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnablePlanetRotation;                                   // 0x10D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_72WC[0x3];                                   // 0x10D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Cached_Camera_Location;                                  // 0x10D4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Cache_LevelMap_Rotation;                                 // 0x10E0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Cache_LevelMap_Scale;                                    // 0x10EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPendingSanctuary3;                                      // 0x10F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QYKI[0x3];                                   // 0x10F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale_Target_Keyfraome1;                                 // 0x10F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EZoneMapMode                                               PreviousMapMode;                                         // 0x10F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9AWD[0x3];                                   // 0x10F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceLength;                                             // 0x10FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZTraceDistance;                                          // 0x1100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Transform_Delta;                                         // 0x1104(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UZoneMapData_Base_C*                                 PlanetMap_FocusedZone;                                   // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PlanetMap_Magnetism;                                     // 0x1118(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlanetGalaxyZoomTargetMin;                               // 0x1124(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlanetGalaxyZoomTargetMax;                               // 0x1128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlanetMap_ZoneMagnetism(bool* Magnetized);
		void Initialize_Level_Map_DMIs();
		void Set_Keyframes(const struct FVector& Transform_Target_Keyframe, float Rotation_Pitch_Target_Keyframe, float Scale_Target_Keyframe);
		void Clear_Keyframes();
		void Get_Planet_Gimbal_Target();
		void Get_Planet_and_Galaxy_Scale_Target();
		void Get_Planet_Rotation_Target();
		void Initialize_LevelMap_Camera_Properties();
		void SetGamma(float Gamma);
		void Planet_Recenter(bool bInstant);
		void SetCameraLag(bool LocationLag, bool RotationLag, float LocationLagSpeed, float RotationLagSpeed);
		void ViewChanged(bool bShowingZoneMap);
		void Update_ZoneMap_DMIs();
		void FocusOnPlanet(class UPlanetData* Planet);
		void SpawnGalaxyMapPOIs(class UGalaxyMapData_C* GalaxyMapData);
		void GetGalaxyRotationTarget(float DeltaSeconds);
		void SetLevelMapPostProcess();
		bool K2_GetRotationYawTarget(float DeltaSeconds, float YawMin, float YawMax);
		bool K2_GetRotationPitchTarget(float DeltaSeconds);
		bool K2_GetNewTransformTarget(float DeltaSeconds, const struct FVector& TransformMin, const struct FVector& TransformMax, float TransformBuffer, float GlobalTransformScale, float ZoomDelta);
		bool K2_GetNewScaleTarget(float DeltaSeconds, float* ZoomDelta);
		bool K2_UpdateTransforms(float DeltaSeconds);
		void SetVisibleRadiusBP(TArray<class UMaterialInstanceDynamic*>* DMIArray, float Alpha, float RadiusAlpha, float Distortion);
		void LevelMapTickNative();
		void SetTransitioning(bool transitioning);
		void SetGlobalLUTVisibility(bool Visibile);
		void GetNewScaleTarget(float DeltaSeconds, float ScaleMin, float ScaleMax, float ScaleRate, float* ZoomDelta);
		float GetNormalizedDistanceToPOICenter(class USphereComponent* POICollisionSphere, const struct FVector& HitLocation);
		void ResetAxisInput();
		bool K2_HandleInputAction(const class FName& InputAction);
		bool K2_HandleAxisInput(const class FName& InputAction, float AxisValue);
		void UpdatePartyMemeberLocations();
		void FocusLevel(class UZoneMapData* Level, bool bInstant);
		struct FRotator GetRotationForLevelTransition();
		void TransitionToLevel(class UZoneMapData* LevelData);
		void TransitionToPlanet(class UPlanetMapData_C* PlanetMapData);
		void GetDefaultLevelMapPivot(struct FVector* PointOfInterestTransformLocation);
		void BaseTick(float DeltaSeconds);
		void DestroyGalaxyMapComponents();
		void GalaxyMapTick();
		void InitializeMapForGalaxy(class UGalaxyMapData_C* GalaxyMapData);
		void DestroyPlanetMapComponents();
		void DestroyMapActor();
		void GetRotationPitchTarget(float DeltaSeconds);
		void GetRotationYawTarget(float DeltaSeconds, float YawMin, float YawMax);
		void PlanetMapTick();
		void LevelMapTick();
		void CreateCompassandGrid();
		void InitializeMapForPlanet(class UPlanetData* PlanetData);
		void SetPivottoActorWorldLocation(const struct FVector& WorldLocation);
		void DestroyLevelMapComponents();
		void GetNewTransformTarget(float DeltaSeconds, const struct FVector& TransformMin, const struct FVector& TransformMax, float TransformBuffer, float GlobalTransformScale, float ZoomDelta);
		void AddZoneMapMeshSections(class UZoneMapMeshData* ZoneMapMeshData);
		void GetPlayersCurrentZoneSection(int32_t* SectionIndex);
		void CycleZoneMapSections(int32_t Direction);
		void BoxConstraint(const struct FVector& VectorToConstrain, const struct FVector& BoundsOrigin, const struct FVector& BoundsExtent, struct FVector* Result);
		void InitializePointCloudParticleSystem(class UZoneMapMeshData* ZoneMapMeshData);
		void UpdateTransformsForLevelMap(float DeltaSeconds);
		void InitializeMapForLevel(class UZoneMapData* LevelMapData);
		void SetPivotToActor(class AActor* Actor, bool bInstant);
		void ResetMapOrienation(bool SnaptoPlayer, bool ResetOrientation, bool Instant);
		void AddDecorationMeshes();
		void UserConstructionScript();
		void Alpha__FinishedFunc();
		void Alpha__UpdateFunc();
		void Alpha__TransitionDone__EventFunc();
		void Dismiss__FinishedFunc();
		void Dismiss__UpdateFunc();
		void GalaxyToPlanet__FinishedFunc();
		void GalaxyToPlanet__UpdateFunc();
		void PlanetFromGalaxy__FinishedFunc();
		void PlanetFromGalaxy__UpdateFunc();
		void PlanetFromGalaxy__TransitionOver__EventFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_1__TransitionOver__EventFunc();
		void PlanettoGalaxy__FinishedFunc();
		void PlanettoGalaxy__UpdateFunc();
		void PlanetToLevel__FinishedFunc();
		void PlanetToLevel__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_0__TransitionOver__EventFunc();
		void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11(const struct FKey& Key);
		void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveDestroyed();
		void GbxMenu_RightStickAxisX(float AxisValue);
		void GbxMenu_RightStickAxisY(float AxisValue);
		void OakMenu_MapZoomOut(float AxisValue);
		void OakMenu_MapZoomIn(float AxisValue);
		void StopLevelMapEffects();
		void OpenParentMenu();
		void ShutdownMap(bool bInstantShutdown);
		void GbxMenu_LeftStickAxisX(float AxisValue);
		void GbxMenu_LeftStickAxisY(float AxisValue);
		void PlayPlanetMapEffects();
		void StopPlanetMapEffects();
		void PlayGalaxyMapEffects();
		void StopGalaxyMapEffects();
		void CloseLevelMode();
		void ClosePlanetMode();
		void OnCompletedDismissalEffects();
		void CloseGalaxyMode();
		void SetLocalWaypoint();
		void ManualRecenter();
		void K2_GotoLevelMap(class UZoneMapData* InLevelData);
		void K2_GotoPlanetMap(class UPlanetData* InPlanetData);
		void K2_GotoParentMap();
		void K2_ResetAxisInput();
		void K2_FocusOnTransform(const struct FTransform& Transform);
		void K2_CenterOnPlayer();
		void K2_FocusOnLevel(class UZoneMapData* Level);
		void K2_FocusOnPlanet(class UPlanetData* Planet);
		void K2_SetCustomWaypoint();
		void K2_PostLoadedMapMesh();
		void K2_OnMiniMapShown();
		void K2_OnEchoOpened();
		void K2_OnZoneMapShown();
		void K2_OnEchoClosed();
		void CustomEvent_1(class AActor* NewlyFocusedPOI);
		void DEBUGCyclePlanetMapPOIs();
		void PlayLevelMapEffects();
		void K2_OnZoneMapHidden();
		void K2_PostLoadedPlanetClass();
		void ExecuteUbergraph_BP_ZoneMap(int32_t EntryPoint);
		void OnCloseLevelMode__DelegateSignature();
		void OnCloseGalaxyMode__DelegateSignature();
		void OnClosePlanetMode__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
