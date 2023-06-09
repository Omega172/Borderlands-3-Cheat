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
	 * 		Name   -> Function BPAnim_PlayerCharacter_BaseHead.BPAnim_PlayerCharacter_BaseHead_C.ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_PlayerCharacter_BaseHead_C::ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_PlayerCharacter_BaseHead.BPAnim_PlayerCharacter_BaseHead_C.ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead");
		
		UBPAnim_PlayerCharacter_BaseHead_C_ExecuteUbergraph_BPAnim_PlayerCharacter_BaseHead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_PlayerCharacter_BaseHead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_PlayerCharacter_BaseHead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_PlayerCharacter_BaseHead.BPAnim_PlayerCharacter_BaseHead_C");
		return ptr;
	}

}


