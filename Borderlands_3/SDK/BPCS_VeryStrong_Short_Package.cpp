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
	 * 		Name   -> PredefinedFunction UBPCS_VeryStrong_Short_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCS_VeryStrong_Short_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_VeryStrong_Short.BPCS_VeryStrong_Short_C");
		return ptr;
	}

}


