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
	 * 		Name   -> PredefinedFunction UDamageSource_Passive_Skill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageSource_Passive_Skill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Passive_Skill.DamageSource_Passive_Skill_C");
		return ptr;
	}

}


