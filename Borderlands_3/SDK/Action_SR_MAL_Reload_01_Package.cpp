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
	 * 		Name   -> PredefinedFunction UAction_SR_MAL_Reload_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SR_MAL_Reload_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_MAL_Reload_01.Action_SR_MAL_Reload_01_C");
		return ptr;
	}

}


