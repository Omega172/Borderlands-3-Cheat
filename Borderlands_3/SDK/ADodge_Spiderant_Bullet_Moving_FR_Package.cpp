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
	 * 		Name   -> PredefinedFunction UADodge_Spiderant_Bullet_Moving_FR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UADodge_Spiderant_Bullet_Moving_FR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ADodge_Spiderant_Bullet_Moving_FR.ADodge_Spiderant_Bullet_Moving_FR_C");
		return ptr;
	}

}


