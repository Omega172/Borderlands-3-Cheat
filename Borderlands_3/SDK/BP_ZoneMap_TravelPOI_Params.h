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
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.UserConstructionScript
	 */
	struct ABP_ZoneMap_TravelPOI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Activate POI
	 */
	struct ABP_ZoneMap_TravelPOI_C_ActivatePOI_Params
	{	};

	/**
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveBeginPlay
	 */
	struct ABP_ZoneMap_TravelPOI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ReceiveActorBeginOverlap
	 */
	struct ABP_ZoneMap_TravelPOI_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.Begin Zone Map Cursor Over
	 */
	struct ABP_ZoneMap_TravelPOI_C_BeginZoneMapCursorOver_Params
	{	};

	/**
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.End Zone Map Cursor Over
	 */
	struct ABP_ZoneMap_TravelPOI_C_EndZoneMapCursorOver_Params
	{	};

	/**
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ViewModeChanged
	 */
	struct ABP_ZoneMap_TravelPOI_C_ViewModeChanged_Params
	{	};

	/**
	 * Function BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C.ExecuteUbergraph_BP_ZoneMap_TravelPOI
	 */
	struct ABP_ZoneMap_TravelPOI_C_ExecuteUbergraph_BP_ZoneMap_TravelPOI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_72F9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
