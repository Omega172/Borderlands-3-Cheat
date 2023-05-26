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
	 * 		Name   -> Function StandIn_PhaseSlam_Frontend.StandIn_PhaseSlam_Frontend_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStandIn_PhaseSlam_Frontend_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_PhaseSlam_Frontend.StandIn_PhaseSlam_Frontend_C.UserConstructionScript");
		
		AStandIn_PhaseSlam_Frontend_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function StandIn_PhaseSlam_Frontend.StandIn_PhaseSlam_Frontend_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStandIn_PhaseSlam_Frontend_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_PhaseSlam_Frontend.StandIn_PhaseSlam_Frontend_C.ReceiveBeginPlay");
		
		AStandIn_PhaseSlam_Frontend_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function StandIn_PhaseSlam_Frontend.StandIn_PhaseSlam_Frontend_C.ExecuteUbergraph_StandIn_PhaseSlam_Frontend
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandIn_PhaseSlam_Frontend_C::ExecuteUbergraph_StandIn_PhaseSlam_Frontend(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_PhaseSlam_Frontend.StandIn_PhaseSlam_Frontend_C.ExecuteUbergraph_StandIn_PhaseSlam_Frontend");
		
		AStandIn_PhaseSlam_Frontend_C_ExecuteUbergraph_StandIn_PhaseSlam_Frontend_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStandIn_PhaseSlam_Frontend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandIn_PhaseSlam_Frontend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_PhaseSlam_Frontend.StandIn_PhaseSlam_Frontend_C");
		return ptr;
	}

}


