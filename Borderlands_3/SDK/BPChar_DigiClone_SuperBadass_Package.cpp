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
	 * 		Name   -> PredefinedFunction ABPChar_DigiClone_SuperBadass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_DigiClone_SuperBadass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_DigiClone_SuperBadass.BPChar_DigiClone_SuperBadass_C");
		return ptr;
	}

}


