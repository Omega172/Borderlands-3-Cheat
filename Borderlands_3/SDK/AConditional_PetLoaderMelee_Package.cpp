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
	 * 		Name   -> PredefinedFunction UAConditional_PetLoaderMelee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAConditional_PetLoaderMelee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AConditional_PetLoaderMelee.AConditional_PetLoaderMelee_C");
		return ptr;
	}

}


