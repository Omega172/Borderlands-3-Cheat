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
	 * 		Name   -> PredefinedFunction UInit_HealthCalc_IO_Barrel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_HealthCalc_IO_Barrel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_HealthCalc_IO_Barrel.Init_HealthCalc_IO_Barrel_C");
		return ptr;
	}

}


