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
	 * 		Name   -> PredefinedFunction UBP_Challenge_Console_47_DLC1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Challenge_Console_47_DLC1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Console_47_DLC1.BP_Challenge_Console_47_DLC1_C");
		return ptr;
	}

}


