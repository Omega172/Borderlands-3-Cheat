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
	 * 		Name   -> PredefinedFunction UBPCS_VeryStrong_VeryShort_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCS_VeryStrong_VeryShort_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_VeryStrong_VeryShort.BPCS_VeryStrong_VeryShort_C");
		return ptr;
	}

}


