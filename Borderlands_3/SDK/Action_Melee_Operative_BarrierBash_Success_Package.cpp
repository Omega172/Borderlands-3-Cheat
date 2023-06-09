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
	 * 		Name   -> Function Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C.TurnOffOperativeBlades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Melee_Operative_BarrierBash_Success_C::TurnOffOperativeBlades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C.TurnOffOperativeBlades");
		
		UAction_Melee_Operative_BarrierBash_Success_C_TurnOffOperativeBlades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C.TurnOnOperativeBlades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Melee_Operative_BarrierBash_Success_C::TurnOnOperativeBlades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C.TurnOnOperativeBlades");
		
		UAction_Melee_Operative_BarrierBash_Success_C_TurnOnOperativeBlades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C.ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Melee_Operative_BarrierBash_Success_C::ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Success(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C.ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Success");
		
		UAction_Melee_Operative_BarrierBash_Success_C_ExecuteUbergraph_Action_Melee_Operative_BarrierBash_Success_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Melee_Operative_BarrierBash_Success_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Melee_Operative_BarrierBash_Success_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Melee_Operative_BarrierBash_Success.Action_Melee_Operative_BarrierBash_Success_C");
		return ptr;
	}

}


