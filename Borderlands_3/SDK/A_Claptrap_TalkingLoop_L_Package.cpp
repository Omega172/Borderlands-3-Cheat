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
	 * 		Name   -> Function A_Claptrap_TalkingLoop_L.A_Claptrap_TalkingLoop_L_C.OnLoop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Claptrap_TalkingLoop_L_C::OnLoop(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Claptrap_TalkingLoop_L.A_Claptrap_TalkingLoop_L_C.OnLoop");
		
		UA_Claptrap_TalkingLoop_L_C_OnLoop_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Claptrap_TalkingLoop_L.A_Claptrap_TalkingLoop_L_C.ExecuteUbergraph_A_Claptrap_TalkingLoop_L
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Claptrap_TalkingLoop_L_C::ExecuteUbergraph_A_Claptrap_TalkingLoop_L(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Claptrap_TalkingLoop_L.A_Claptrap_TalkingLoop_L_C.ExecuteUbergraph_A_Claptrap_TalkingLoop_L");
		
		UA_Claptrap_TalkingLoop_L_C_ExecuteUbergraph_A_Claptrap_TalkingLoop_L_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_Claptrap_TalkingLoop_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_Claptrap_TalkingLoop_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Claptrap_TalkingLoop_L.A_Claptrap_TalkingLoop_L_C");
		return ptr;
	}

}


