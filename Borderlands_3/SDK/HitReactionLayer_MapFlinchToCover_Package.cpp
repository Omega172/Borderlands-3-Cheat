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
	 * 		Name   -> PredefinedFunction UHitReactionLayer_MapFlinchToCover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitReactionLayer_MapFlinchToCover_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_MapFlinchToCover.HitReactionLayer_MapFlinchToCover_C");
		return ptr;
	}

}


