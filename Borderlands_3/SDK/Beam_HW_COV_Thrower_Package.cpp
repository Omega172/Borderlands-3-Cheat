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
	 * 		Name   -> PredefinedFunction UBeam_HW_COV_Thrower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeam_HW_COV_Thrower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Beam_HW_COV_Thrower.Beam_HW_COV_Thrower_C");
		return ptr;
	}

}


