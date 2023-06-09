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
	 * 		Name   -> Function LightProjectile_LovableRogue_Ricochet.LightProjectile_LovableRogue_Ricochet_C.HomeIn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_LovableRogue_Ricochet_C::HomeIn(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_LovableRogue_Ricochet.LightProjectile_LovableRogue_Ricochet_C.HomeIn");
		
		ULightProjectile_LovableRogue_Ricochet_C_HomeIn_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectile_LovableRogue_Ricochet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_LovableRogue_Ricochet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_LovableRogue_Ricochet.LightProjectile_LovableRogue_Ricochet_C");
		return ptr;
	}

}


