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
	 * 		Name   -> PredefinedFunction UAbility_GuardianRank_Desperado_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_GuardianRank_Desperado_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_Desperado.Ability_GuardianRank_Desperado_C");
		return ptr;
	}

}


