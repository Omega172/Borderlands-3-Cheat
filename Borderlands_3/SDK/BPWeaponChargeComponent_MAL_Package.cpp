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
	 * 		Name   -> PredefinedFunction UBPWeaponChargeComponent_MAL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeaponChargeComponent_MAL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponChargeComponent_MAL.BPWeaponChargeComponent_MAL_C");
		return ptr;
	}

}


