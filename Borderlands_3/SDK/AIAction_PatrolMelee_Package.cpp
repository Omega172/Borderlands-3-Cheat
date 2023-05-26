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
	 * 		Name   -> Function AIAction_PatrolMelee.AIAction_PatrolMelee_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAIAction_PatrolMelee_C::BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PatrolMelee.AIAction_PatrolMelee_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol");
		
		UAIAction_PatrolMelee_C_BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol_Params params {};
		params.AIController = AIController;
		params.Character = Character;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIAction_PatrolMelee.AIAction_PatrolMelee_C.ExecuteUbergraph_AIAction_PatrolMelee
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PatrolMelee_C::ExecuteUbergraph_AIAction_PatrolMelee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PatrolMelee.AIAction_PatrolMelee_C.ExecuteUbergraph_AIAction_PatrolMelee");
		
		UAIAction_PatrolMelee_C_ExecuteUbergraph_AIAction_PatrolMelee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_PatrolMelee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_PatrolMelee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_PatrolMelee.AIAction_PatrolMelee_C");
		return ptr;
	}

}


