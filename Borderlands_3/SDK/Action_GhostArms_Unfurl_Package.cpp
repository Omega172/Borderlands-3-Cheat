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
	 * 		Name   -> PredefinedFunction UAction_GhostArms_Unfurl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_GhostArms_Unfurl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_GhostArms_Unfurl.Action_GhostArms_Unfurl_C");
		return ptr;
	}

}


