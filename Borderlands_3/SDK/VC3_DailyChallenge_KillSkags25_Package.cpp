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
	 * 		Name   -> PredefinedFunction UVC3_DailyChallenge_KillSkags25_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC3_DailyChallenge_KillSkags25_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC3_DailyChallenge_KillSkags25.VC3_DailyChallenge_KillSkags25_C");
		return ptr;
	}

}


