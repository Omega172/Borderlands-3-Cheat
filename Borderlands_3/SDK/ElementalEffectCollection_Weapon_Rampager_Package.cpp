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
	 * 		Name   -> PredefinedFunction UElementalEffectCollection_Weapon_Rampager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElementalEffectCollection_Weapon_Rampager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_Weapon_Rampager.ElementalEffectCollection_Weapon_Rampager_C");
		return ptr;
	}

}


