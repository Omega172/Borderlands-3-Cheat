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
	 * 		Name   -> PredefinedFunction UARand_Beastmaster_Cloak_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARand_Beastmaster_Cloak_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ARand_Beastmaster_Cloak.ARand_Beastmaster_Cloak_C");
		return ptr;
	}

}

