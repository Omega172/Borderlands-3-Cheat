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
	 * 		Name   -> PredefinedFunction UDiscoveryChallenge_Ixora_Area19_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscoveryChallenge_Ixora_Area19_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DiscoveryChallenge_Ixora_Area19.DiscoveryChallenge_Ixora_Area19_C");
		return ptr;
	}

}


