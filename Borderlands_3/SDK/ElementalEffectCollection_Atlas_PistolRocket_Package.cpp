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
	 * 		Name   -> PredefinedFunction UElementalEffectCollection_Atlas_PistolRocket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElementalEffectCollection_Atlas_PistolRocket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_Atlas_PistolRocket.ElementalEffectCollection_Atlas_PistolRocket_C");
		return ptr;
	}

}


