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
	 * 		Name   -> PredefinedFunction AMI_Grunge_Patch_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMI_Grunge_Patch_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MI_Grunge_Patch_BP.MI_Grunge_Patch_BP_C");
		return ptr;
	}

}


