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
	 * 		Name   -> PredefinedFunction UAbility_CompanyMan_CoV_MagSize_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CompanyMan_CoV_MagSize_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CompanyMan_CoV_MagSize.Ability_CompanyMan_CoV_MagSize_C");
		return ptr;
	}

}


