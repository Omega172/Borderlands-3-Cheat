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
	 * 		Name   -> PredefinedFunction UPassive_Siren_SteadyHands_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Siren_SteadyHands_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_SteadyHands.Passive_Siren_SteadyHands_C");
		return ptr;
	}

}


