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
	 * 		Name   -> PredefinedFunction UVC2_DailyChallenge_KillBossKatagawaBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVC2_DailyChallenge_KillBossKatagawaBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VC2_DailyChallenge_KillBossKatagawaBall.VC2_DailyChallenge_KillBossKatagawaBall_C");
		return ptr;
	}

}


