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
	 * 		Name   -> PredefinedFunction UBPCS_Beastmaster_Enrage_FoV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCS_Beastmaster_Enrage_FoV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_Beastmaster_Enrage_FOV.BPCS_Beastmaster_Enrage_FoV_C");
		return ptr;
	}

}


