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
	 * 		Name   -> PredefinedFunction UBP_CE_Player_StandIn_ECHO_QuickOff_InnerOutline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CE_Player_StandIn_ECHO_QuickOff_InnerOutline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Player_StandIn_ECHO_QuickOff_InnerOutline.BP_CE_Player_StandIn_ECHO_QuickOff_InnerOutline_C");
		return ptr;
	}

}


