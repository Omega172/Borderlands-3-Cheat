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
	 * 		Name   -> PredefinedFunction UBPWidget_DuelingNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWidget_DuelingNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_DuelingNotification.BPWidget_DuelingNotification_C");
		return ptr;
	}

}


