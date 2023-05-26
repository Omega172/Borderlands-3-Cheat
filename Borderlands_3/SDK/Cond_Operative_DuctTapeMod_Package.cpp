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
	 * 		Name   -> Function Cond_Operative_DuctTapeMod.Cond_Operative_DuctTapeMod_C.EvaluateCondition
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     OptionalContext                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCond_Operative_DuctTapeMod_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cond_Operative_DuctTapeMod.Cond_Operative_DuctTapeMod_C.EvaluateCondition");
		
		UCond_Operative_DuctTapeMod_C_EvaluateCondition_Params params {};
		params.Context = Context;
		params.OptionalContext = OptionalContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCond_Operative_DuctTapeMod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCond_Operative_DuctTapeMod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cond_Operative_DuctTapeMod.Cond_Operative_DuctTapeMod_C");
		return ptr;
	}

}


