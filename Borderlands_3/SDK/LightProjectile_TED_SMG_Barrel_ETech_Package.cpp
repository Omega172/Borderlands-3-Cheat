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
	 * 		Name   -> PredefinedFunction ULightProjectile_TED_SMG_Barrel_ETech_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_TED_SMG_Barrel_ETech_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TED_SMG_Barrel_ETech.LightProjectile_TED_SMG_Barrel_ETech_C");
		return ptr;
	}

}


