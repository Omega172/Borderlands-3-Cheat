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
	 * 		Name   -> PredefinedFunction UInit_MissionPickup_RandQuantity_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_MissionPickup_RandQuantity_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_MissionPickup_RandQuantity_2.Init_MissionPickup_RandQuantity_1_C");
		return ptr;
	}

}


