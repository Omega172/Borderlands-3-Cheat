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
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.UserConstructionScript
	 */
	struct ABP_ZoneMap_Galaxy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__FinishedFunc
	 */
	struct ABP_ZoneMap_Galaxy_C_AnimateGalaxyMapComponents__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__UpdateFunc
	 */
	struct ABP_ZoneMap_Galaxy_C_AnimateGalaxyMapComponents__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition In
	 */
	struct ABP_ZoneMap_Galaxy_C_TransitionIn_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition In
	 */
	struct ABP_ZoneMap_Galaxy_C_InterruptTransitionIn_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition Out
	 */
	struct ABP_ZoneMap_Galaxy_C_TransitionOut_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition Out
	 */
	struct ABP_ZoneMap_Galaxy_C_InterruptTransitionOut_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveDestroyed
	 */
	struct ABP_ZoneMap_Galaxy_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveTick
	 */
	struct ABP_ZoneMap_Galaxy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ExecuteUbergraph_BP_ZoneMap_Galaxy
	 */
	struct ABP_ZoneMap_Galaxy_C_ExecuteUbergraph_BP_ZoneMap_Galaxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
