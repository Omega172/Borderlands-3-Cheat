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
	 * 		Name   -> Function AttInit_MoxxiEvent_ElementalChance.AttInit_MoxxiEvent_ElementalChance_C.CalculateAttributeInitialValue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAttInit_MoxxiEvent_ElementalChance_C::CalculateAttributeInitialValue(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttInit_MoxxiEvent_ElementalChance.AttInit_MoxxiEvent_ElementalChance_C.CalculateAttributeInitialValue");
		
		UAttInit_MoxxiEvent_ElementalChance_C_CalculateAttributeInitialValue_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttInit_MoxxiEvent_ElementalChance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttInit_MoxxiEvent_ElementalChance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AttInit_MoxxiEvent_ElementalChance.AttInit_MoxxiEvent_ElementalChance_C");
		return ptr;
	}

}


