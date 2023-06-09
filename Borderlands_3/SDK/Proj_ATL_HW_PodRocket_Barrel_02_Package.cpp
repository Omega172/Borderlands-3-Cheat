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
	 * 		Name   -> Function Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_ATL_HW_PodRocket_Barrel_02_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C.UserConstructionScript");
		
		AProj_ATL_HW_PodRocket_Barrel_02_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_ATL_HW_PodRocket_Barrel_02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C.ReceiveBeginPlay");
		
		AProj_ATL_HW_PodRocket_Barrel_02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C.ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_ATL_HW_PodRocket_Barrel_02_C::ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C.ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_02");
		
		AProj_ATL_HW_PodRocket_Barrel_02_C_ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_ATL_HW_PodRocket_Barrel_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_ATL_HW_PodRocket_Barrel_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C");
		return ptr;
	}

}


