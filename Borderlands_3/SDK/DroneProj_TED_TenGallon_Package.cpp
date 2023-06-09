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
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.DistanceCHeck
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::DistanceCHeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.DistanceCHeck");
		
		ADroneProj_TED_TenGallon_C_DistanceCHeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.NoFriends
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::NoFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.NoFriends");
		
		ADroneProj_TED_TenGallon_C_NoFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StopFire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::StopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StopFire");
		
		ADroneProj_TED_TenGallon_C_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StartFire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::StartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StartFire");
		
		ADroneProj_TED_TenGallon_C_StartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.FireWeapon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::FireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.FireWeapon");
		
		ADroneProj_TED_TenGallon_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.UserConstructionScript");
		
		ADroneProj_TED_TenGallon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.RefillAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LoadedAmmo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_TenGallon_C::RefillAmmo(float LoadedAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.RefillAmmo");
		
		ADroneProj_TED_TenGallon_C_RefillAmmo_Params params {};
		params.LoadedAmmo = LoadedAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AOakDroneProjectile*                         Drone                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_TenGallon_C::BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon(class AOakDroneProjectile* Drone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon");
		
		ADroneProj_TED_TenGallon_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params params {};
		params.Drone = Drone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.PutDownNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_TenGallon_C::PutDownNotify(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.PutDownNotify");
		
		ADroneProj_TED_TenGallon_C_PutDownNotify_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.OnBeginExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::OnBeginExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.OnBeginExplode");
		
		ADroneProj_TED_TenGallon_C_OnBeginExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADroneProj_TED_TenGallon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ReceiveBeginPlay");
		
		ADroneProj_TED_TenGallon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ExecuteUbergraph_DroneProj_TED_TenGallon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroneProj_TED_TenGallon_C::ExecuteUbergraph_DroneProj_TED_TenGallon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ExecuteUbergraph_DroneProj_TED_TenGallon");
		
		ADroneProj_TED_TenGallon_C_ExecuteUbergraph_DroneProj_TED_TenGallon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroneProj_TED_TenGallon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroneProj_TED_TenGallon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C");
		return ptr;
	}

}


