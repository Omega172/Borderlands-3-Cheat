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
	 * 		Name   -> Function Action_Mood_Stressed.Action_Mood_Stressed_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Mood_Stressed_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Mood_Stressed.Action_Mood_Stressed_C.OnBegin");
		
		UAction_Mood_Stressed_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Mood_Stressed.Action_Mood_Stressed_C.ExecuteUbergraph_Action_Mood_Stressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Mood_Stressed_C::ExecuteUbergraph_Action_Mood_Stressed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Mood_Stressed.Action_Mood_Stressed_C.ExecuteUbergraph_Action_Mood_Stressed");
		
		UAction_Mood_Stressed_C_ExecuteUbergraph_Action_Mood_Stressed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Mood_Stressed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Mood_Stressed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mood_Stressed.Action_Mood_Stressed_C");
		return ptr;
	}

}


