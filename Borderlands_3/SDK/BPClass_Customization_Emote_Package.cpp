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
	 * 		Name   -> PredefinedFunction ABPClass_Customization_Emote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPClass_Customization_Emote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_Customization_Emote.BPClass_Customization_Emote_C");
		return ptr;
	}

}


