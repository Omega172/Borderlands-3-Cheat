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
	 * 		Name   -> PredefinedFunction UDamage_GPart_TerrorHeal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamage_GPart_TerrorHeal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Damage_GPart_TerrorHeal.Damage_GPart_TerrorHeal_C");
		return ptr;
	}

}


