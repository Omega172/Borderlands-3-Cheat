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
	 * 		Name   -> Function Item_Season02_AssassinDrop_Repeatable.Item_Season02_AssassinDrop_Repeatable_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AItem_Season02_AssassinDrop_Repeatable_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Item_Season02_AssassinDrop_Repeatable.Item_Season02_AssassinDrop_Repeatable_C.UserConstructionScript");
		
		AItem_Season02_AssassinDrop_Repeatable_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItem_Season02_AssassinDrop_Repeatable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItem_Season02_AssassinDrop_Repeatable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Item_Season02_AssassinDrop_Repeatable.Item_Season02_AssassinDrop_Repeatable_C");
		return ptr;
	}

}


