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
	 * 		Name   -> PredefinedFunction UBeam_CoolBeans_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeam_CoolBeans_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Beam_CoolBeans.Beam_CoolBeans_C");
		return ptr;
	}

}


