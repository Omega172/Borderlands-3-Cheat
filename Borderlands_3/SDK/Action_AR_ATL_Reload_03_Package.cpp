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
	 * 		Name   -> PredefinedFunction UAction_AR_ATL_Reload_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_AR_ATL_Reload_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_AR_ATL_Reload_03.Action_AR_ATL_Reload_03_C");
		return ptr;
	}

}


