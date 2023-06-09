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
	 * 		Name   -> Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.TryBuffFeedbackLightProjectile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Buff_C::TryBuffFeedbackLightProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.TryBuffFeedbackLightProjectile");
		
		AProj_Drone_VDayHeart_Buff_C_TryBuffFeedbackLightProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Buff_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.UserConstructionScript");
		
		AProj_Drone_VDayHeart_Buff_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Buff_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire");
		
		AProj_Drone_VDayHeart_Buff_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Buff
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Buff_C::ExecuteUbergraph_Proj_Drone_VDayHeart_Buff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Buff");
		
		AProj_Drone_VDayHeart_Buff_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Buff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Drone_VDayHeart_Buff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Drone_VDayHeart_Buff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Drone_VDayHeart_Buff.Proj_Drone_VDayHeart_Buff_C");
		return ptr;
	}

}


