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
	 * 		Name   -> Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.DoMelee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_Global_GroundSlam_Base_C::DoMelee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.DoMelee");
		
		UControlledMove_Global_GroundSlam_Base_C_DoMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.GroundSlam_End
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_Global_GroundSlam_Base_C::GroundSlam_End(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.GroundSlam_End");
		
		UControlledMove_Global_GroundSlam_Base_C_GroundSlam_End_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MoveDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_Global_GroundSlam_Base_C::OnStart(float MoveDuration, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStart");
		
		UControlledMove_Global_GroundSlam_Base_C_OnStart_Params params {};
		params.MoveDuration = MoveDuration;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControlledMove_Global_GroundSlam_Base_C::OnStop(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStop");
		
		UControlledMove_Global_GroundSlam_Base_C_OnStop_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_Global_GroundSlam_Base_C::ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base");
		
		UControlledMove_Global_GroundSlam_Base_C_ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlledMove_Global_GroundSlam_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMove_Global_GroundSlam_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C");
		return ptr;
	}

}


