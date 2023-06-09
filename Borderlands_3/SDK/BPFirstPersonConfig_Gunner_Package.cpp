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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFirstPersonConfig_Gunner.BPFirstPersonConfig_Gunner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPFirstPersonConfig_Gunner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFirstPersonConfig_Gunner.BPFirstPersonConfig_Gunner_C.UserConstructionScript");
		
		ABPFirstPersonConfig_Gunner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPFirstPersonConfig_Gunner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPFirstPersonConfig_Gunner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFirstPersonConfig_Gunner.BPFirstPersonConfig_Gunner_C");
		return ptr;
	}

}


