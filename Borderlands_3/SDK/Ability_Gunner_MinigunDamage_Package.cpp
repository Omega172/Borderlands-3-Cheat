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
	 * 		Name   -> Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Gunner_MinigunDamage_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnActivated");
		
		UAbility_Gunner_MinigunDamage_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Gunner_MinigunDamage_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnDeactivated");
		
		UAbility_Gunner_MinigunDamage_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.ExecuteUbergraph_Ability_Gunner_MinigunDamage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Gunner_MinigunDamage_C::ExecuteUbergraph_Ability_Gunner_MinigunDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.ExecuteUbergraph_Ability_Gunner_MinigunDamage");
		
		UAbility_Gunner_MinigunDamage_C_ExecuteUbergraph_Ability_Gunner_MinigunDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Gunner_MinigunDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Gunner_MinigunDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C");
		return ptr;
	}

}


