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
	 * 		Name   -> PredefinedFunction UBPCamShake_Damage_AOE_Low_R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCamShake_Damage_AOE_Low_R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_Damage_AOE_Low_R.BPCamShake_Damage_AOE_Low_R_C");
		return ptr;
	}

}


