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
	 * 		Name   -> PredefinedFunction UARandom_PetJabbermon_Melee_Run_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARandom_PetJabbermon_Melee_Run_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_PetJabbermon_Melee_Run.ARandom_PetJabbermon_Melee_Run_C");
		return ptr;
	}

}


