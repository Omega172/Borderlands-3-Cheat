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
	 * 		Name   -> PredefinedFunction UADodgePicker_Ape_Grenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UADodgePicker_Ape_Grenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ADodgePicker_Ape_Grenade.ADodgePicker_Ape_Grenade_C");
		return ptr;
	}

}


