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
	 * 		Name   -> PredefinedFunction UALI_Challenge_Crew_Anger3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALI_Challenge_Crew_Anger3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ALI_Challenge_Crew_Anger3.ALI_Challenge_Crew_Anger3_C");
		return ptr;
	}

}


