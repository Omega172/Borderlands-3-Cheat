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
	 * 		Name   -> PredefinedFunction UAction_SG_TED_PickupEquip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SG_TED_PickupEquip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SG_TED_PickupEquip.Action_SG_TED_PickupEquip_C");
		return ptr;
	}

}


