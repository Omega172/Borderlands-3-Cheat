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
	 * 		Name   -> PredefinedFunction UActionCont_Melee_HW_Miss_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionCont_Melee_HW_Miss_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionCont_Melee_HW_Miss.ActionCont_Melee_HW_Miss_C");
		return ptr;
	}

}


