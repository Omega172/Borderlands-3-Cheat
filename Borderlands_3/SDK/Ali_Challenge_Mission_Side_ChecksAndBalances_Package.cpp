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
	 * 		Name   -> PredefinedFunction UAli_Challenge_Mission_Side_ChecksAndBalances_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAli_Challenge_Mission_Side_ChecksAndBalances_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ali_Challenge_Mission_Side_ChecksAndBalances.Ali_Challenge_Mission_Side_ChecksAndBalances_C");
		return ptr;
	}

}


