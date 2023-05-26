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
	 * 		Name   -> Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorDied
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnDLCSCript_Cartels_C::OnActorDied(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorDied");
		
		USpawnDLCSCript_Cartels_C_OnActorDied_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorSpawned
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USpawnerComponent*                           SpawnerComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnDLCSCript_Cartels_C::OnActorSpawned(class USpawnerComponent* SpawnerComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C.OnActorSpawned");
		
		USpawnDLCSCript_Cartels_C_OnActorSpawned_Params params {};
		params.SpawnerComponent = SpawnerComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnDLCSCript_Cartels_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnDLCSCript_Cartels_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpawnDLCSCript_Cartels.SpawnDLCSCript_Cartels_C");
		return ptr;
	}

}


