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
	 * 		Name   -> PredefinedFunction ULightProjectile_Septimator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_Septimator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Septimator.LightProjectile_Septimator_C");
		return ptr;
	}

}

