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
	 * 		Name   -> PredefinedFunction UChallenge_Salvage_Monestary1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Salvage_Monestary1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Salvage_Monestary1.Challenge_Salvage_Monestary1_C");
		return ptr;
	}

}

