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
	 * 		Name   -> PredefinedFunction UAction_GhostArms_Furl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_GhostArms_Furl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_GhostArms_Furl.Action_GhostArms_Furl_C");
		return ptr;
	}

}


