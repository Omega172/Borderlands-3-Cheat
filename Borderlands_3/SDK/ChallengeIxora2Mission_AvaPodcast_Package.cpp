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
	 * 		Name   -> PredefinedFunction UChallengeIxora2Mission_AvaPodcast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeIxora2Mission_AvaPodcast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeIxora2Mission_AvaPodcast.ChallengeIxora2Mission_AvaPodcast_C");
		return ptr;
	}

}


