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
	 * 		Name   -> PredefinedFunction UAction_SR_HYP_PutDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_SR_HYP_PutDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_HYP_PutDown.Action_SR_HYP_PutDown_C");
		return ptr;
	}

}


