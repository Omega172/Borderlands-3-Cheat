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
	 * 		Name   -> PredefinedFunction UDamageData_IronCub_Stomp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageData_IronCub_Stomp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_IronCub_Stomp.DamageData_IronCub_Stomp_C");
		return ptr;
	}

}


