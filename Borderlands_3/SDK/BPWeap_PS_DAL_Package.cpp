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
	 * 		Name   -> PredefinedFunction ABPWeap_PS_DAL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_PS_DAL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_PS_DAL.BPWeap_PS_DAL_C");
		return ptr;
	}

}


