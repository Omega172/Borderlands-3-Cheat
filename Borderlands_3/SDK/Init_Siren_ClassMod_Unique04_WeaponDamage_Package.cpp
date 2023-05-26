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
	 * 		Name   -> Function Init_Siren_ClassMod_Unique04_WeaponDamage.Init_Siren_ClassMod_Unique04_WeaponDamage_C.CalculateAttributeInitialValue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UInit_Siren_ClassMod_Unique04_WeaponDamage_C::CalculateAttributeInitialValue(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_Siren_ClassMod_Unique04_WeaponDamage.Init_Siren_ClassMod_Unique04_WeaponDamage_C.CalculateAttributeInitialValue");
		
		UInit_Siren_ClassMod_Unique04_WeaponDamage_C_CalculateAttributeInitialValue_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInit_Siren_ClassMod_Unique04_WeaponDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_Siren_ClassMod_Unique04_WeaponDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_Siren_ClassMod_Unique04_WeaponDamage.Init_Siren_ClassMod_Unique04_WeaponDamage_C");
		return ptr;
	}

}


