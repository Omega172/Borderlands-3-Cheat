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
	 * 		Name   -> Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Artifact_Sparkplug_Augment_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.UserConstructionScript");
		
		AProj_Artifact_Sparkplug_Augment_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Artifact_Sparkplug_Augment_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug");
		
		AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_3_OakTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params params {};
		params.TouchingActor = TouchingActor;
		params.bIsPlayer = bIsPlayer;
		params.ComponentTouched = ComponentTouched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LeavingActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProj_Artifact_Sparkplug_Augment_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug(class AActor* LeavingActor, bool bIsPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug");
		
		AProj_Artifact_Sparkplug_Augment_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_4_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_Artifact_Sparkplug_Params params {};
		params.LeavingActor = LeavingActor;
		params.bIsPlayer = bIsPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AProj_Artifact_Sparkplug_Augment_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ReceiveDestroyed");
		
		AProj_Artifact_Sparkplug_Augment_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Artifact_Sparkplug_Augment_C::ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C.ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment");
		
		AProj_Artifact_Sparkplug_Augment_C_ExecuteUbergraph_Proj_Artifact_Sparkplug_Augment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Artifact_Sparkplug_Augment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Artifact_Sparkplug_Augment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Artifact_Sparkplug_Augment.Proj_Artifact_Sparkplug_Augment_C");
		return ptr;
	}

}


