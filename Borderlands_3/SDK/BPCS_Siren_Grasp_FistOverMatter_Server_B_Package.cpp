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
	 * 		Name   -> PredefinedFunction UBPCS_Siren_Grasp_FistOverMatter_Server_B_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCS_Siren_Grasp_FistOverMatter_Server_B_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCS_Siren_Grasp_FistOverMatter_Server_B.BPCS_Siren_Grasp_FistOverMatter_Server_B_C");
		return ptr;
	}

}

