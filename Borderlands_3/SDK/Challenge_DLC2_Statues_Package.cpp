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
	 * 		Name   -> Function Challenge_DLC2_Statues.Challenge_DLC2_Statues_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_DLC2_Statues_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_DLC2_Statues.Challenge_DLC2_Statues_C.CompletedChallenge");
		
		UChallenge_DLC2_Statues_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_DLC2_Statues.Challenge_DLC2_Statues_C.ExecuteUbergraph_Challenge_DLC2_Statues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_DLC2_Statues_C::ExecuteUbergraph_Challenge_DLC2_Statues(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_DLC2_Statues.Challenge_DLC2_Statues_C.ExecuteUbergraph_Challenge_DLC2_Statues");
		
		UChallenge_DLC2_Statues_C_ExecuteUbergraph_Challenge_DLC2_Statues_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_DLC2_Statues_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_DLC2_Statues_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_DLC2_Statues.Challenge_DLC2_Statues_C");
		return ptr;
	}

}


