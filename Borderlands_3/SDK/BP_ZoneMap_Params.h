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
	 * Function BP_ZoneMap.BP_ZoneMap_C.PlanetMap_ZoneMagnetism
	 */
	struct ABP_ZoneMap_C_PlanetMap_ZoneMagnetism_Params
	{
	public:
		bool                                                       Magnetized;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0MJN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Initialize_Level_Map_DMIs
	 */
	struct ABP_ZoneMap_C_Initialize_Level_Map_DMIs_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Set_Keyframes
	 */
	struct ABP_ZoneMap_C_Set_Keyframes_Params
	{
	public:
		struct FVector                                             Transform_Target_Keyframe;                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rotation_Pitch_Target_Keyframe;                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale_Target_Keyframe;                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Clear_Keyframes
	 */
	struct ABP_ZoneMap_C_Clear_Keyframes_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Gimbal_Target
	 */
	struct ABP_ZoneMap_C_Get_Planet_Gimbal_Target_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_and_Galaxy_Scale_Target
	 */
	struct ABP_ZoneMap_C_Get_Planet_and_Galaxy_Scale_Target_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Rotation_Target
	 */
	struct ABP_ZoneMap_C_Get_Planet_Rotation_Target_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Initialize_LevelMap_Camera_Properties
	 */
	struct ABP_ZoneMap_C_Initialize_LevelMap_Camera_Properties_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.SetGamma
	 */
	struct ABP_ZoneMap_C_SetGamma_Params
	{
	public:
		float                                                      Gamma;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet_Recenter
	 */
	struct ABP_ZoneMap_C_Planet_Recenter_Params
	{
	public:
		bool                                                       bInstant;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C9E5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.SetCameraLag
	 */
	struct ABP_ZoneMap_C_SetCameraLag_Params
	{
	public:
		bool                                                       LocationLag;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RotationLag;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZQ6[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LocationLagSpeed;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RotationLagSpeed;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.ViewChanged
	 */
	struct ABP_ZoneMap_C_ViewChanged_Params
	{
	public:
		bool                                                       bShowingZoneMap;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Update_ZoneMap_DMIs
	 */
	struct ABP_ZoneMap_C_Update_ZoneMap_DMIs_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.FocusOnPlanet
	 */
	struct ABP_ZoneMap_C_FocusOnPlanet_Params
	{
	public:
		class UPlanetData*                                         Planet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.SpawnGalaxyMapPOIs
	 */
	struct ABP_ZoneMap_C_SpawnGalaxyMapPOIs_Params
	{
	public:
		class UGalaxyMapData_C*                                    GalaxyMapData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.GetGalaxyRotationTarget
	 */
	struct ABP_ZoneMap_C_GetGalaxyRotationTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OZBG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.SetLevelMapPostProcess
	 */
	struct ABP_ZoneMap_C_SetLevelMapPostProcess_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationYawTarget
	 */
	struct ABP_ZoneMap_C_K2_GetRotationYawTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YawMin;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YawMax;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationPitchTarget
	 */
	struct ABP_ZoneMap_C_K2_GetRotationPitchTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewTransformTarget
	 */
	struct ABP_ZoneMap_C_K2_GetNewTransformTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TransformMin;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TransformMax;                                            // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TransformBuffer;                                         // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GlobalTransformScale;                                    // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZoomDelta;                                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WPCH[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewScaleTarget
	 */
	struct ABP_ZoneMap_C_K2_GetNewScaleTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZoomDelta;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9JHN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_UpdateTransforms
	 */
	struct ABP_ZoneMap_C_K2_UpdateTransforms_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.SetVisibleRadiusBP
	 */
	struct ABP_ZoneMap_C_SetVisibleRadiusBP_Params
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    DMIArray;                                                // 0x0000(0x0010)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      Alpha;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RadiusAlpha;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distortion;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.LevelMapTickNative
	 */
	struct ABP_ZoneMap_C_LevelMapTickNative_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Set Transitioning
	 */
	struct ABP_ZoneMap_C_SetTransitioning_Params
	{
	public:
		bool                                                       transitioning;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Set Global LUT Visibility
	 */
	struct ABP_ZoneMap_C_SetGlobalLUTVisibility_Params
	{
	public:
		bool                                                       Visibile;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JL7T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get New Scale Target
	 */
	struct ABP_ZoneMap_C_GetNewScaleTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaleMin;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaleMax;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaleRate;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZoomDelta;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get Normalized Distance To POI Center
	 */
	struct ABP_ZoneMap_C_GetNormalizedDistanceToPOICenter_Params
	{
	public:
		class USphereComponent*                                    POICollisionSphere;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Reset Axis Input
	 */
	struct ABP_ZoneMap_C_ResetAxisInput_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleInputAction
	 */
	struct ABP_ZoneMap_C_K2_HandleInputAction_Params
	{
	public:
		class FName                                                InputAction;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5M2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleAxisInput
	 */
	struct ABP_ZoneMap_C_K2_HandleAxisInput_Params
	{
	public:
		class FName                                                InputAction;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisValue;                                               // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Update Party Memeber Locations
	 */
	struct ABP_ZoneMap_C_UpdatePartyMemeberLocations_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Focus Level
	 */
	struct ABP_ZoneMap_C_FocusLevel_Params
	{
	public:
		class UZoneMapData*                                        Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInstant;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation For Level Transition
	 */
	struct ABP_ZoneMap_C_GetRotationForLevelTransition_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XSGH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.TransitionToLevel
	 */
	struct ABP_ZoneMap_C_TransitionToLevel_Params
	{
	public:
		class UZoneMapData*                                        LevelData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.TransitionToPlanet
	 */
	struct ABP_ZoneMap_C_TransitionToPlanet_Params
	{
	public:
		class UPlanetMapData_C*                                    PlanetMapData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get Default Level Map Pivot
	 */
	struct ABP_ZoneMap_C_GetDefaultLevelMapPivot_Params
	{
	public:
		struct FVector                                             PointOfInterestTransformLocation;                        // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Base Tick
	 */
	struct ABP_ZoneMap_C_BaseTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.DestroyGalaxyMapComponents
	 */
	struct ABP_ZoneMap_C_DestroyGalaxyMapComponents_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.GalaxyMapTick
	 */
	struct ABP_ZoneMap_C_GalaxyMapTick_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForGalaxy
	 */
	struct ABP_ZoneMap_C_InitializeMapForGalaxy_Params
	{
	public:
		class UGalaxyMapData_C*                                    GalaxyMapData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Destroy Planet Map Components
	 */
	struct ABP_ZoneMap_C_DestroyPlanetMapComponents_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Destroy Map Actor
	 */
	struct ABP_ZoneMap_C_DestroyMapActor_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Pitch Target
	 */
	struct ABP_ZoneMap_C_GetRotationPitchTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EL80[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Yaw Target
	 */
	struct ABP_ZoneMap_C_GetRotationYawTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YawMin;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YawMax;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet Map Tick
	 */
	struct ABP_ZoneMap_C_PlanetMapTick_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Level Map Tick
	 */
	struct ABP_ZoneMap_C_LevelMapTick_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Create Compass and Grid
	 */
	struct ABP_ZoneMap_C_CreateCompassandGrid_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForPlanet
	 */
	struct ABP_ZoneMap_C_InitializeMapForPlanet_Params
	{
	public:
		class UPlanetData*                                         PlanetData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot to Actor World Location
	 */
	struct ABP_ZoneMap_C_SetPivottoActorWorldLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FH78[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Destroy Level Map Components
	 */
	struct ABP_ZoneMap_C_DestroyLevelMapComponents_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get New Transform Target
	 */
	struct ABP_ZoneMap_C_GetNewTransformTarget_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TransformMin;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TransformMax;                                            // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TransformBuffer;                                         // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GlobalTransformScale;                                    // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZoomDelta;                                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Add Zone Map Mesh Sections
	 */
	struct ABP_ZoneMap_C_AddZoneMapMeshSections_Params
	{
	public:
		class UZoneMapMeshData*                                    ZoneMapMeshData;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Get Player's Current Zone Section
	 */
	struct ABP_ZoneMap_C_GetPlayersCurrentZoneSection_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GYUS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Cycle Zone Map Sections
	 */
	struct ABP_ZoneMap_C_CycleZoneMapSections_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Box Constraint
	 */
	struct ABP_ZoneMap_C_BoxConstraint_Params
	{
	public:
		struct FVector                                             VectorToConstrain;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BoundsOrigin;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BoundsExtent;                                            // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Result;                                                  // 0x0024(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Initialize Point Cloud Particle System
	 */
	struct ABP_ZoneMap_C_InitializePointCloudParticleSystem_Params
	{
	public:
		class UZoneMapMeshData*                                    ZoneMapMeshData;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Update Transforms For Level Map
	 */
	struct ABP_ZoneMap_C_UpdateTransformsForLevelMap_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForLevel
	 */
	struct ABP_ZoneMap_C_InitializeMapForLevel_Params
	{
	public:
		class UZoneMapData*                                        LevelMapData;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot To Actor
	 */
	struct ABP_ZoneMap_C_SetPivotToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInstant;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AA2O[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Reset Map Orienation 
	 */
	struct ABP_ZoneMap_C_ResetMapOrienation_Params
	{
	public:
		bool                                                       SnaptoPlayer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetOrientation;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Instant;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T7J6[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Add Decoration Meshes
	 */
	struct ABP_ZoneMap_C_AddDecorationMeshes_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.UserConstructionScript
	 */
	struct ABP_ZoneMap_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Alpha__FinishedFunc
	 */
	struct ABP_ZoneMap_C_Alpha__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Alpha__UpdateFunc
	 */
	struct ABP_ZoneMap_C_Alpha__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Alpha__Transition Done__EventFunc
	 */
	struct ABP_ZoneMap_C_Alpha__TransitionDone__EventFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__FinishedFunc
	 */
	struct ABP_ZoneMap_C_Dismiss__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__UpdateFunc
	 */
	struct ABP_ZoneMap_C_Dismiss__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__FinishedFunc
	 */
	struct ABP_ZoneMap_C_GalaxyToPlanet__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__UpdateFunc
	 */
	struct ABP_ZoneMap_C_GalaxyToPlanet__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__FinishedFunc
	 */
	struct ABP_ZoneMap_C_PlanetFromGalaxy__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__UpdateFunc
	 */
	struct ABP_ZoneMap_C_PlanetFromGalaxy__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__Transition Over__EventFunc
	 */
	struct ABP_ZoneMap_C_PlanetFromGalaxy__TransitionOver__EventFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__FinishedFunc
	 */
	struct ABP_ZoneMap_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__UpdateFunc
	 */
	struct ABP_ZoneMap_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__Transition Over__EventFunc
	 */
	struct ABP_ZoneMap_C_Timeline_1__TransitionOver__EventFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__FinishedFunc
	 */
	struct ABP_ZoneMap_C_PlanettoGalaxy__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__UpdateFunc
	 */
	struct ABP_ZoneMap_C_PlanettoGalaxy__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__FinishedFunc
	 */
	struct ABP_ZoneMap_C_PlanetToLevel__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__UpdateFunc
	 */
	struct ABP_ZoneMap_C_PlanetToLevel__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__FinishedFunc
	 */
	struct ABP_ZoneMap_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__UpdateFunc
	 */
	struct ABP_ZoneMap_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__Transition Over__EventFunc
	 */
	struct ABP_ZoneMap_C_Timeline_0__TransitionOver__EventFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9
	 */
	struct ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.ReceiveBeginPlay
	 */
	struct ABP_ZoneMap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.ReceiveTick
	 */
	struct ABP_ZoneMap_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.ReceiveDestroyed
	 */
	struct ABP_ZoneMap_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisX
	 */
	struct ABP_ZoneMap_C_GbxMenu_RightStickAxisX_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisY
	 */
	struct ABP_ZoneMap_C_GbxMenu_RightStickAxisY_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomOut
	 */
	struct ABP_ZoneMap_C_OakMenu_MapZoomOut_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomIn
	 */
	struct ABP_ZoneMap_C_OakMenu_MapZoomIn_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Stop Level Map Effects
	 */
	struct ABP_ZoneMap_C_StopLevelMapEffects_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Open Parent Menu
	 */
	struct ABP_ZoneMap_C_OpenParentMenu_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Shutdown Map
	 */
	struct ABP_ZoneMap_C_ShutdownMap_Params
	{
	public:
		bool                                                       bInstantShutdown;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisX
	 */
	struct ABP_ZoneMap_C_GbxMenu_LeftStickAxisX_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisY
	 */
	struct ABP_ZoneMap_C_GbxMenu_LeftStickAxisY_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Play Planet Map Effects
	 */
	struct ABP_ZoneMap_C_PlayPlanetMapEffects_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Stop Planet Map Effects
	 */
	struct ABP_ZoneMap_C_StopPlanetMapEffects_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Play Galaxy Map Effects
	 */
	struct ABP_ZoneMap_C_PlayGalaxyMapEffects_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Stop Galaxy Map Effects
	 */
	struct ABP_ZoneMap_C_StopGalaxyMapEffects_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Close Level Mode
	 */
	struct ABP_ZoneMap_C_CloseLevelMode_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Close Planet Mode
	 */
	struct ABP_ZoneMap_C_ClosePlanetMode_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.On Completed Dismissal Effects
	 */
	struct ABP_ZoneMap_C_OnCompletedDismissalEffects_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Close Galaxy Mode
	 */
	struct ABP_ZoneMap_C_CloseGalaxyMode_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Set Local Waypoint
	 */
	struct ABP_ZoneMap_C_SetLocalWaypoint_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Manual Recenter
	 */
	struct ABP_ZoneMap_C_ManualRecenter_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoLevelMap
	 */
	struct ABP_ZoneMap_C_K2_GotoLevelMap_Params
	{
	public:
		class UZoneMapData*                                        InLevelData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoPlanetMap
	 */
	struct ABP_ZoneMap_C_K2_GotoPlanetMap_Params
	{
	public:
		class UPlanetData*                                         InPlanetData;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoParentMap
	 */
	struct ABP_ZoneMap_C_K2_GotoParentMap_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_ResetAxisInput
	 */
	struct ABP_ZoneMap_C_K2_ResetAxisInput_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnTransform
	 */
	struct ABP_ZoneMap_C_K2_FocusOnTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_CenterOnPlayer
	 */
	struct ABP_ZoneMap_C_K2_CenterOnPlayer_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnLevel
	 */
	struct ABP_ZoneMap_C_K2_FocusOnLevel_Params
	{
	public:
		class UZoneMapData*                                        Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnPlanet
	 */
	struct ABP_ZoneMap_C_K2_FocusOnPlanet_Params
	{
	public:
		class UPlanetData*                                         Planet;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_SetCustomWaypoint
	 */
	struct ABP_ZoneMap_C_K2_SetCustomWaypoint_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedMapMesh
	 */
	struct ABP_ZoneMap_C_K2_PostLoadedMapMesh_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_OnMiniMapShown
	 */
	struct ABP_ZoneMap_C_K2_OnMiniMapShown_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoOpened
	 */
	struct ABP_ZoneMap_C_K2_OnEchoOpened_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapShown
	 */
	struct ABP_ZoneMap_C_K2_OnZoneMapShown_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoClosed
	 */
	struct ABP_ZoneMap_C_K2_OnEchoClosed_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.CustomEvent_1
	 */
	struct ABP_ZoneMap_C_CustomEvent_1_Params
	{
	public:
		class AActor*                                              NewlyFocusedPOI;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.DEBUG Cycle Planet Map POIs
	 */
	struct ABP_ZoneMap_C_DEBUGCyclePlanetMapPOIs_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.Play Level Map Effects
	 */
	struct ABP_ZoneMap_C_PlayLevelMapEffects_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapHidden
	 */
	struct ABP_ZoneMap_C_K2_OnZoneMapHidden_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedPlanetClass
	 */
	struct ABP_ZoneMap_C_K2_PostLoadedPlanetClass_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.ExecuteUbergraph_BP_ZoneMap
	 */
	struct ABP_ZoneMap_C_ExecuteUbergraph_BP_ZoneMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.On Close Level Mode__DelegateSignature
	 */
	struct ABP_ZoneMap_C_OnCloseLevelMode__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.On Close Galaxy Mode__DelegateSignature
	 */
	struct ABP_ZoneMap_C_OnCloseGalaxyMode__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ZoneMap.BP_ZoneMap_C.On Close Planet Mode__DelegateSignature
	 */
	struct ABP_ZoneMap_C_OnClosePlanetMode__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
