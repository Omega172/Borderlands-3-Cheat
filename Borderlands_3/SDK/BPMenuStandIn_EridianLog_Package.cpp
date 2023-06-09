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
	 * 		Name   -> Function BPMenuStandIn_EridianLog.BPMenuStandIn_EridianLog_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPMenuStandIn_EridianLog_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPMenuStandIn_EridianLog.BPMenuStandIn_EridianLog_C.UserConstructionScript");
		
		ABPMenuStandIn_EridianLog_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPMenuStandIn_EridianLog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPMenuStandIn_EridianLog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPMenuStandIn_EridianLog.BPMenuStandIn_EridianLog_C");
		return ptr;
	}

}


