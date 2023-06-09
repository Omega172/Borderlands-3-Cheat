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
	 * 		Name   -> Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.SetBinds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UChallenge_Grenade_DeliveryKill_C::SetBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.SetBinds");
		
		UChallenge_Grenade_DeliveryKill_C_SetBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.CheckKillCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         DeathDetails                                               (BlueprintVisible, Parm, OutParm, ReferenceParm)
	 */
	void UChallenge_Grenade_DeliveryKill_C::CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.CheckKillCondition");
		
		UChallenge_Grenade_DeliveryKill_C_CheckKillCondition_Params params {};
		params.DamageReceiver = DamageReceiver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeathDetails != nullptr)
			*DeathDetails = params.DeathDetails;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Grenade_DeliveryKill_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.OnInitChallengeInstance");
		
		UChallenge_Grenade_DeliveryKill_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Grenade_DeliveryKill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Grenade_DeliveryKill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C");
		return ptr;
	}

}


