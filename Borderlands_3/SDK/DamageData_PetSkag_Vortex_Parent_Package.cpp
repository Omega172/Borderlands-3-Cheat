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
	 * 		Name   -> PredefinedFunction UDamageData_PetSkag_Vortex_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageData_PetSkag_Vortex_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_PetSkag_Vortex_Parent.DamageData_PetSkag_Vortex_Parent_C");
		return ptr;
	}

}


