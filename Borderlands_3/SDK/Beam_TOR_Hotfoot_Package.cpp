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
	 * 		Name   -> PredefinedFunction UBeam_TOR_Hotfoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeam_TOR_Hotfoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Beam_TOR_Hotfoot.Beam_TOR_Hotfoot_C");
		return ptr;
	}

}


