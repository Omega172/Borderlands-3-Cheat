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
	 * 		Name   -> PredefinedFunction UAHitReact_Skag_Stagger_R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAHitReact_Skag_Stagger_R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Skag_Stagger_R.AHitReact_Skag_Stagger_R_C");
		return ptr;
	}

}


