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
	 * 		Name   -> Function LightProjectile_Shield_Impaler.LightProjectile_Shield_Impaler_C.OnLifetimeExpired
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_Shield_Impaler_C::OnLifetimeExpired(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_Shield_Impaler.LightProjectile_Shield_Impaler_C.OnLifetimeExpired");
		
		ULightProjectile_Shield_Impaler_C_OnLifetimeExpired_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectile_Shield_Impaler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_Shield_Impaler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Shield_Impaler.LightProjectile_Shield_Impaler_C");
		return ptr;
	}

}


