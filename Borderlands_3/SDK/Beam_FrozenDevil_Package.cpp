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
	 * 		Name   -> PredefinedFunction UBeam_FrozenDevil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeam_FrozenDevil_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Beam_FrozenDevil.Beam_FrozenDevil_C");
		return ptr;
	}

}


