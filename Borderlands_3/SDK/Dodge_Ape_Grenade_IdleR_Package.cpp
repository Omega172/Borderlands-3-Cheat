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
	 * 		Name   -> PredefinedFunction UDodge_Ape_Grenade_IdleR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodge_Ape_Grenade_IdleR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_Ape_Grenade_IdleR.Dodge_Ape_Grenade_IdleR_C");
		return ptr;
	}

}


