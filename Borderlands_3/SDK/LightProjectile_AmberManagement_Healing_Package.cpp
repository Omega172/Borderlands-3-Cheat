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
	 * 		Name   -> Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.TryEnableHoming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakLightProjectile*                         LightProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_AmberManagement_Healing_C::TryEnableHoming(class UOakLightProjectile* LightProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.TryEnableHoming");
		
		ULightProjectile_AmberManagement_Healing_C_TryEnableHoming_Params params {};
		params.LightProjectile = LightProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.EnableProjectileHoming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakLightProjectile*                         LightProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_AmberManagement_Healing_C::EnableProjectileHoming(class UOakLightProjectile* LightProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.EnableProjectileHoming");
		
		ULightProjectile_AmberManagement_Healing_C_EnableProjectileHoming_Params params {};
		params.LightProjectile = LightProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.OnLifetimeExpired
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_AmberManagement_Healing_C::OnLifetimeExpired(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C.OnLifetimeExpired");
		
		ULightProjectile_AmberManagement_Healing_C_OnLifetimeExpired_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectile_AmberManagement_Healing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_AmberManagement_Healing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_AmberManagement_Healing.LightProjectile_AmberManagement_Healing_C");
		return ptr;
	}

}


