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
	 * 		Name   -> PredefinedFunction UAction_Phasetrance_DLCSkill_7_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Phasetrance_DLCSkill_7_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_DLCSkill_8.Action_Phasetrance_DLCSkill_7_C");
		return ptr;
	}

}


