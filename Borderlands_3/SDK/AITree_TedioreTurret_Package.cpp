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
	 * 		Name   -> Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__Priority_Shoot_or_Walk.BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAITree_TedioreTurret_C::BndEvt__Priority_Shoot_or_Walk_BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__Priority_Shoot_or_Walk.BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret");
		
		UAITree_TedioreTurret_C_BndEvt__Priority_Shoot_or_Walk_BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret_Params params {};
		params.AIController = AIController;
		params.Character = Character;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITree_TedioreTurret_C::BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret");
		
		UAITree_TedioreTurret_C_BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret_Params params {};
		params.AIController = AIController;
		params.Character = Character;
		params.Context = Context;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITree_TedioreTurret_C::BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_TedioreTurret.AITree_TedioreTurret_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret");
		
		UAITree_TedioreTurret_C_BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret_Params params {};
		params.AIController = AIController;
		params.Character = Character;
		params.Context = Context;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AITree_TedioreTurret.AITree_TedioreTurret_C.ExecuteUbergraph_AITree_TedioreTurret
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITree_TedioreTurret_C::ExecuteUbergraph_AITree_TedioreTurret(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITree_TedioreTurret.AITree_TedioreTurret_C.ExecuteUbergraph_AITree_TedioreTurret");
		
		UAITree_TedioreTurret_C_ExecuteUbergraph_AITree_TedioreTurret_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITree_TedioreTurret_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITree_TedioreTurret_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AITree_TedioreTurret.AITree_TedioreTurret_C");
		return ptr;
	}

}


