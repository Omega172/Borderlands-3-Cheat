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
	 * 		Name   -> PredefinedFunction UbpData_BTS_VideoContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UbpData_BTS_VideoContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass bpData_BTS_VideoContainer.bpData_BTS_VideoContainer_C");
		return ptr;
	}

}


