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
	 * 		Name   -> PredefinedFunction UAction_OperativeAuxiliary_Select_ActionSkill_Enter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_OperativeAuxiliary_Select_ActionSkill_Enter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_OperativeAuxiliary_Select_ActionSkill_Enter.Action_OperativeAuxiliary_Select_ActionSkill_Enter_C");
		return ptr;
	}

}


