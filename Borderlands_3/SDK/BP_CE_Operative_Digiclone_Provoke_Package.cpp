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
	 * 		Name   -> Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Operative_Digiclone_Provoke_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnBegin");
		
		UBP_CE_Operative_Digiclone_Provoke_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Operative_Digiclone_Provoke_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnEnd");
		
		UBP_CE_Operative_Digiclone_Provoke_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ProvokeSoundStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CE_Operative_Digiclone_Provoke_C::ProvokeSoundStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ProvokeSoundStop");
		
		UBP_CE_Operative_Digiclone_Provoke_C_ProvokeSoundStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Operative_Digiclone_Provoke_C::ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke");
		
		UBP_CE_Operative_Digiclone_Provoke_C_ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CE_Operative_Digiclone_Provoke_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CE_Operative_Digiclone_Provoke_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C");
		return ptr;
	}

}


