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
	 * 		Name   -> PredefinedFunction UDamage_PetSpiderant_Charge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamage_PetSpiderant_Charge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Damage_PetSpiderant_Charge.Damage_PetSpiderant_Charge_C");
		return ptr;
	}

}


