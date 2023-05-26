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
	 * 		Name   -> Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Melee_Operative_Miss_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnEnd");
		
		UAction_Melee_Operative_Miss_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Melee_Operative_Miss_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBeginBringUpWeapon");
		
		UAction_Melee_Operative_Miss_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOnOperativeBlades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Melee_Operative_Miss_C::TurnOnOperativeBlades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOnOperativeBlades");
		
		UAction_Melee_Operative_Miss_C_TurnOnOperativeBlades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOffOperativeBlades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Melee_Operative_Miss_C::TurnOffOperativeBlades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.TurnOffOperativeBlades");
		
		UAction_Melee_Operative_Miss_C_TurnOffOperativeBlades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Melee_Operative_Miss_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.OnBegin");
		
		UAction_Melee_Operative_Miss_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.ExecuteUbergraph_Action_Melee_Operative_Miss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Melee_Operative_Miss_C::ExecuteUbergraph_Action_Melee_Operative_Miss(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C.ExecuteUbergraph_Action_Melee_Operative_Miss");
		
		UAction_Melee_Operative_Miss_C_ExecuteUbergraph_Action_Melee_Operative_Miss_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Melee_Operative_Miss_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Melee_Operative_Miss_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Operative_Miss.Action_Melee_Operative_Miss_C");
		return ptr;
	}

}


