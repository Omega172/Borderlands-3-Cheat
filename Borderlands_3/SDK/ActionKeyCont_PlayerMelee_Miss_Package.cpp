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
	 * 		Name   -> PredefinedFunction UActionKeyCont_PlayerMelee_Miss_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionKeyCont_PlayerMelee_Miss_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionKeyCont_PlayerMelee_Miss.ActionKeyCont_PlayerMelee_Miss_C");
		return ptr;
	}

}


