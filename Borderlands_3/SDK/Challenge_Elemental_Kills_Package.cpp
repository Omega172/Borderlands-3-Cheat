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
	 * 		Name   -> PredefinedFunction UChallenge_Elemental_Kills_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Elemental_Kills_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Elemental_Kills.Challenge_Elemental_Kills_C");
		return ptr;
	}

}


