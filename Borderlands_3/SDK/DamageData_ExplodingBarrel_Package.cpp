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
	 * 		Name   -> PredefinedFunction UDamageData_ExplodingBarrel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageData_ExplodingBarrel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_ExplodingBarrel.DamageData_ExplodingBarrel_C");
		return ptr;
	}

}


