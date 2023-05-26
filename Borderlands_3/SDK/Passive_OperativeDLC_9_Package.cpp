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
	 * 		Name   -> PredefinedFunction UPassive_OperativeDLC_8_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_OperativeDLC_8_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_9.Passive_OperativeDLC_8_C");
		return ptr;
	}

}


