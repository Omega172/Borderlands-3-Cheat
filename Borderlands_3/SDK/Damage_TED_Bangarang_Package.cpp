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
	 * 		Name   -> PredefinedFunction UDamage_TED_Bangarang_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamage_TED_Bangarang_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Damage_TED_Bangarang.Damage_TED_Bangarang_C");
		return ptr;
	}

}


