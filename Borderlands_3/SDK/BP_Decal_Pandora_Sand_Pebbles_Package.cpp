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
	 * 		Name   -> PredefinedFunction ABP_Decal_Pandora_Sand_Pebbles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Decal_Pandora_Sand_Pebbles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_Pandora_Sand_Pebbles.BP_Decal_Pandora_Sand_Pebbles_C");
		return ptr;
	}

}


