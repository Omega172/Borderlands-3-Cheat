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
	 * 		Name   -> PredefinedFunction ULightBeam_Weapon_Redistributor_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBeam_Weapon_Redistributor_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_Weapon_Redistributor_Child.LightBeam_Weapon_Redistributor_Child_C");
		return ptr;
	}

}


