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
	 * 		Name   -> PredefinedFunction UAbility_HeatRemoveShotcost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_HeatRemoveShotcost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_HeatRemoveShotcost.Ability_HeatRemoveShotcost_C");
		return ptr;
	}

}


