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
	 * 		Name   -> PredefinedFunction UVC3_WeeklyChallenge_ManufactureJakobs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC3_WeeklyChallenge_ManufactureJakobs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC3_WeeklyChallenge_ManufactureJakobs.VC3_WeeklyChallenge_ManufactureJakobs_C");
		return ptr;
	}

}


