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
	 * 		Name   -> PredefinedFunction UVC1_WeeklyChallenge_KillArmyGuardian_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC1_WeeklyChallenge_KillArmyGuardian_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC1_WeeklyChallenge_KillArmyGuardian.VC1_WeeklyChallenge_KillArmyGuardian_C");
		return ptr;
	}

}


