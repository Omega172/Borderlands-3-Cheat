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
	 * 		Name   -> Function Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_CM_Ixora_OPE_L01_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C.OnActivated");
		
		UAbility_CM_Ixora_OPE_L01_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C.OnActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CM_Ixora_OPE_L01_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C.OnActionSkillActivated");
		
		UAbility_CM_Ixora_OPE_L01_C_OnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C.ExecuteUbergraph_Ability_CM_Ixora_OPE_L01
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CM_Ixora_OPE_L01_C::ExecuteUbergraph_Ability_CM_Ixora_OPE_L01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C.ExecuteUbergraph_Ability_CM_Ixora_OPE_L01");
		
		UAbility_CM_Ixora_OPE_L01_C_ExecuteUbergraph_Ability_CM_Ixora_OPE_L01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_CM_Ixora_OPE_L01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CM_Ixora_OPE_L01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora_OPE_L01.Ability_CM_Ixora_OPE_L01_C");
		return ptr;
	}

}


