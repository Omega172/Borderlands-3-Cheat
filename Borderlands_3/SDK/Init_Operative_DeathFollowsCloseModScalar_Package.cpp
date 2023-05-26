/**
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
	 * 		Name   -> Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.CalculateAttributeInitialValue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UInit_Operative_DeathFollowsCloseModScalar_C::CalculateAttributeInitialValue(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.CalculateAttributeInitialValue");
		
		UInit_Operative_DeathFollowsCloseModScalar_C_CalculateAttributeInitialValue_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.Get Death Follows Close Bonus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AbilityModBonus                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInit_Operative_DeathFollowsCloseModScalar_C::GetDeathFollowsCloseBonus(class UObject* Object, float* AbilityModBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C.Get Death Follows Close Bonus");
		
		UInit_Operative_DeathFollowsCloseModScalar_C_GetDeathFollowsCloseBonus_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbilityModBonus != nullptr)
			*AbilityModBonus = params.AbilityModBonus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInit_Operative_DeathFollowsCloseModScalar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_Operative_DeathFollowsCloseModScalar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_DeathFollowsCloseModScalar.Init_Operative_DeathFollowsCloseModScalar_C");
		return ptr;
	}

}


