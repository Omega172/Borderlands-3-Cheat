﻿/**
 * Name: Borderlands_3
 * Version: OAK-PATCHWIN640-328
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PhaseTranceSingularity_Slam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PhaseTranceSingularity_Slam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseTranceSingularity_Slam.BP_PhaseTranceSingularity_Slam_C");
		return ptr;
	}

}


