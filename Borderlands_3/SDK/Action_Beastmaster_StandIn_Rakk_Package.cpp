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
	 * 		Name   -> PredefinedFunction UAction_Beastmaster_StandIn_Rakk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Beastmaster_StandIn_Rakk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_StandIn_Rakk.Action_Beastmaster_StandIn_Rakk_C");
		return ptr;
	}

}


