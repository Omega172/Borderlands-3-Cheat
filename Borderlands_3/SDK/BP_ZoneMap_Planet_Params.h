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
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize
	 */
	struct ABP_ZoneMap_Planet_C_Initialize_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.UserConstructionScript
	 */
	struct ABP_ZoneMap_Planet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__FinishedFunc
	 */
	struct ABP_ZoneMap_Planet_C_AnimateOrbitalComponents__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__UpdateFunc
	 */
	struct ABP_ZoneMap_Planet_C_AnimateOrbitalComponents__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveBeginPlay
	 */
	struct ABP_ZoneMap_Planet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveTick
	 */
	struct ABP_ZoneMap_Planet_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition In
	 */
	struct ABP_ZoneMap_Planet_C_TransitionIn_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition In
	 */
	struct ABP_ZoneMap_Planet_C_InterruptTransitionIn_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition Out
	 */
	struct ABP_ZoneMap_Planet_C_TransitionOut_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition Out
	 */
	struct ABP_ZoneMap_Planet_C_InterruptTransitionOut_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveDestroyed
	 */
	struct ABP_ZoneMap_Planet_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize Planet
	 */
	struct ABP_ZoneMap_Planet_C_InitializePlanet_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Update
	 */
	struct ABP_ZoneMap_Planet_C_Update_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Stop Animation
	 */
	struct ABP_ZoneMap_Planet_C_StopAnimation_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ExecuteUbergraph_BP_ZoneMap_Planet
	 */
	struct ABP_ZoneMap_Planet_C_ExecuteUbergraph_BP_ZoneMap_Planet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B3LJ[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
