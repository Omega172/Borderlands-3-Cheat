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
	 * 		Name   -> PredefinedFunction UBPInvSlot_BaseShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInvSlot_BaseShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInvSlot_BaseShield.BPInvSlot_BaseShield_C");
		return ptr;
	}

}


