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
	 * 		Name   -> PredefinedFunction UBPCS_Light_Normal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCS_Light_Normal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_Light_Normal.BPCS_Light_Normal_C");
		return ptr;
	}

}


