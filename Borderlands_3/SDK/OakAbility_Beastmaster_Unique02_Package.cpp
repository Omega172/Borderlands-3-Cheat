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
	 * 		Name   -> PredefinedFunction UOakAbility_Beastmaster_Unique02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Beastmaster_Unique02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Beastmaster_Unique02.OakAbility_Beastmaster_Unique02_C");
		return ptr;
	}

}


