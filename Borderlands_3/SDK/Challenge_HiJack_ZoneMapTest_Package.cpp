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
	 * 		Name   -> PredefinedFunction UChallenge_HiJack_ZoneMapTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_HiJack_ZoneMapTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_HiJack_ZoneMapTest.Challenge_HiJack_ZoneMapTest_C");
		return ptr;
	}

}


