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
	 * 		Name   -> PredefinedFunction APickup_Season02_AssassinDrop_Repeatable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickup_Season02_AssassinDrop_Repeatable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pickup_Season02_AssassinDrop_Repeatable.Pickup_Season02_AssassinDrop_Repeatable_C");
		return ptr;
	}

}


