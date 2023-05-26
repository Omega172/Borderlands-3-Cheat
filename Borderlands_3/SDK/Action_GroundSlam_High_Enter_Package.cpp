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
	 * 		Name   -> Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GroundSlam_High_Enter_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.OnEnd");
		
		UAction_GroundSlam_High_Enter_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GroundSlam_High_Enter_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.OnBegin");
		
		UAction_GroundSlam_High_Enter_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.ExecuteUbergraph_Action_GroundSlam_High_Enter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_GroundSlam_High_Enter_C::ExecuteUbergraph_Action_GroundSlam_High_Enter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C.ExecuteUbergraph_Action_GroundSlam_High_Enter");
		
		UAction_GroundSlam_High_Enter_C_ExecuteUbergraph_Action_GroundSlam_High_Enter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_GroundSlam_High_Enter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_GroundSlam_High_Enter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C");
		return ptr;
	}

}


