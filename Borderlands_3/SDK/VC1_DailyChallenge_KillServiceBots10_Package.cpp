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
	 * 		Name   -> PredefinedFunction UVC1_DailyChallenge_KillServiceBots10_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC1_DailyChallenge_KillServiceBots10_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC1_DailyChallenge_KillServiceBots10.VC1_DailyChallenge_KillServiceBots10_C");
		return ptr;
	}

}


