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
	 * 		Name   -> PredefinedFunction UBPCamShake_Melee_Siren_Miss_Child_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCamShake_Melee_Siren_Miss_Child_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_Melee_Siren_Miss_Child_01.BPCamShake_Melee_Siren_Miss_Child_01_C");
		return ptr;
	}

}


