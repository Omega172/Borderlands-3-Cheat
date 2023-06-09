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
	 * 		Name   -> Function BPMenuActor_QuickChangeMenu.BPMenuActor_QuickChangeMenu_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPMenuActor_QuickChangeMenu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPMenuActor_QuickChangeMenu.BPMenuActor_QuickChangeMenu_C.UserConstructionScript");
		
		ABPMenuActor_QuickChangeMenu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPMenuActor_QuickChangeMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPMenuActor_QuickChangeMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPMenuActor_QuickChangeMenu.BPMenuActor_QuickChangeMenu_C");
		return ptr;
	}

}


