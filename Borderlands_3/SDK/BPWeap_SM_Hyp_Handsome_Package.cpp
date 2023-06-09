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
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryAdvancingAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::TryAdvancingAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryAdvancingAudio");
		
		ABPWeap_SM_Hyp_Handsome_C_TryAdvancingAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryIdleAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::TryIdleAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryIdleAudio");
		
		ABPWeap_SM_Hyp_Handsome_C_TryIdleAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Tediore_WeaponData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageRadius                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumMirvProjectiles                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FireRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LoadedAmmo                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ThrowType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32_t* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int32_t* ThrowType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Tediore_WeaponData");
		
		ABPWeap_SM_Hyp_Handsome_C_Tediore_WeaponData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageRadius != nullptr)
			*DamageRadius = params.DamageRadius;
		if (DamageTypeClass != nullptr)
			*DamageTypeClass = params.DamageTypeClass;
		if (NumMirvProjectiles != nullptr)
			*NumMirvProjectiles = params.NumMirvProjectiles;
		if (FireRate != nullptr)
			*FireRate = params.FireRate;
		if (LoadedAmmo != nullptr)
			*LoadedAmmo = params.LoadedAmmo;
		if (ThrowType != nullptr)
			*ThrowType = params.ThrowType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.UserConstructionScript");
		
		ABPWeap_SM_Hyp_Handsome_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Notify_ReloadStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAutoReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::Notify_ReloadStarted(bool bAutoReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Notify_ReloadStarted");
		
		ABPWeap_SM_Hyp_Handsome_C_Notify_ReloadStarted_Params params {};
		params.bAutoReload = bAutoReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponAttached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::WeaponAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponAttached");
		
		ABPWeap_SM_Hyp_Handsome_C_WeaponAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.EquipEventNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::EquipEventNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.EquipEventNotify");
		
		ABPWeap_SM_Hyp_Handsome_C_EquipEventNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponPutDownEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::WeaponPutDownEvent(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponPutDownEvent");
		
		ABPWeap_SM_Hyp_Handsome_C_WeaponPutDownEvent_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.OnKilledEnemy_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.OnKilledEnemy_Event");
		
		ABPWeap_SM_Hyp_Handsome_C_OnKilledEnemy_Event_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.ExecuteUbergraph_BPWeap_SM_Hyp_Handsome
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPWeap_SM_Hyp_Handsome_C::ExecuteUbergraph_BPWeap_SM_Hyp_Handsome(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.ExecuteUbergraph_BPWeap_SM_Hyp_Handsome");
		
		ABPWeap_SM_Hyp_Handsome_C_ExecuteUbergraph_BPWeap_SM_Hyp_Handsome_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPWeap_SM_Hyp_Handsome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPWeap_SM_Hyp_Handsome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C");
		return ptr;
	}

}


