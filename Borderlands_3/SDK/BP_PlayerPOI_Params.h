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
	 * Function BP_PlayerPOI.BP_PlayerPOI_C.UserConstructionScript
	 */
	struct ABP_PlayerPOI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PlayerPOI.BP_PlayerPOI_C.Activate POI
	 */
	struct ABP_PlayerPOI_C_ActivatePOI_Params
	{	};

	/**
	 * Function BP_PlayerPOI.BP_PlayerPOI_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerPOI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerPOI.BP_PlayerPOI_C.Begin Zone Map Cursor Over
	 */
	struct ABP_PlayerPOI_C_BeginZoneMapCursorOver_Params
	{	};

	/**
	 * Function BP_PlayerPOI.BP_PlayerPOI_C.End Zone Map Cursor Over
	 */
	struct ABP_PlayerPOI_C_EndZoneMapCursorOver_Params
	{	};

	/**
	 * Function BP_PlayerPOI.BP_PlayerPOI_C.ExecuteUbergraph_BP_PlayerPOI
	 */
	struct ABP_PlayerPOI_C_ExecuteUbergraph_BP_PlayerPOI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQNW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
