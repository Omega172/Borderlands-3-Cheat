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
	 * 		Name   -> PredefinedFunction ULightProjectile_TOR_AR_Varlope_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_TOR_AR_Varlope_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_AR_Varlope.LightProjectile_TOR_AR_Varlope_C");
		return ptr;
	}

}


