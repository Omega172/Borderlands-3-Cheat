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
	 * 		Name   -> Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_All_SkillEnd_GenerateTerror_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.AnointTriggerEffect");
		
		UAbility_All_SkillEnd_GenerateTerror_C_AnointTriggerEffect_Params params {};
		params.TriggerEffect = TriggerEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.SkillCoolingDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SkillEnd_GenerateTerror_C::SkillCoolingDown(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.SkillCoolingDown");
		
		UAbility_All_SkillEnd_GenerateTerror_C_SkillCoolingDown_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.GenerateTerror
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillEnd_GenerateTerror_C::GenerateTerror()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.GenerateTerror");
		
		UAbility_All_SkillEnd_GenerateTerror_C_GenerateTerror_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.ResetTimers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillEnd_GenerateTerror_C::ResetTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.ResetTimers");
		
		UAbility_All_SkillEnd_GenerateTerror_C_ResetTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.AnointRemoveEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_All_SkillEnd_GenerateTerror_C::AnointRemoveEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.AnointRemoveEffect");
		
		UAbility_All_SkillEnd_GenerateTerror_C_AnointRemoveEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_All_SkillEnd_GenerateTerror_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.OnActivated");
		
		UAbility_All_SkillEnd_GenerateTerror_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.ExecuteUbergraph_Ability_All_SkillEnd_GenerateTerror
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_All_SkillEnd_GenerateTerror_C::ExecuteUbergraph_Ability_All_SkillEnd_GenerateTerror(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C.ExecuteUbergraph_Ability_All_SkillEnd_GenerateTerror");
		
		UAbility_All_SkillEnd_GenerateTerror_C_ExecuteUbergraph_Ability_All_SkillEnd_GenerateTerror_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_All_SkillEnd_GenerateTerror_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_All_SkillEnd_GenerateTerror_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C");
		return ptr;
	}

}


