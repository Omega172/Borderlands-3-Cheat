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
	 * 		Name   -> PredefinedFunction UDiscoveryChallege_Ixora_Area05_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryChallege_Ixora_Area05_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DiscoveryChallege_Ixora_Area05.DiscoveryChallege_Ixora_Area05_C");
		return ptr;
	}

}


