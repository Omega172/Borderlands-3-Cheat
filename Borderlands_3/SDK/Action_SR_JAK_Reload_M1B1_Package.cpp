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
	 * 		Name   -> PredefinedFunction UAction_SR_JAK_Reload_M1B1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SR_JAK_Reload_M1B1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_JAK_Reload_M1B1.Action_SR_JAK_Reload_M1B1_C");
		return ptr;
	}

}


