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
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Murder on Eschaton Row]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::MysteriouslierMurderonEschatonRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Murder on Eschaton Row]");
		
		UMissionGraph_Ixora2_C_MysteriouslierMurderonEschatonRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: The Vanishing of Hizzen Mays]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::MysteriouslierTheVanishingofHizzenMays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: The Vanishing of Hizzen Mays]");
		
		UMissionGraph_Ixora2_C_MysteriouslierTheVanishingofHizzenMays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Ghosts of Karass Canyon]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::MysteriouslierGhostsofKarassCanyon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Ghosts of Karass Canyon]");
		
		UMissionGraph_Ixora2_C_MysteriouslierGhostsofKarassCanyon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Horror at Scryer's Crypt]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::MysteriouslierHorroratScryersCrypt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[Mysteriouslier: Horror at Scryer's Crypt]");
		
		UMissionGraph_Ixora2_C_MysteriouslierHorroratScryersCrypt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[You. Will. Die. (Over and Over.)]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Ixora2_C::You_Will_Die_OverandOver_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.[You. Will. Die. (Over and Over.)]");
		
		UMissionGraph_Ixora2_C_You_Will_Die_OverandOver__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.ExecuteUbergraph_MissionGraph_Ixora2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionGraph_Ixora2_C::ExecuteUbergraph_MissionGraph_Ixora2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Ixora2.MissionGraph_Ixora2_C.ExecuteUbergraph_MissionGraph_Ixora2");
		
		UMissionGraph_Ixora2_C_ExecuteUbergraph_MissionGraph_Ixora2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionGraph_Ixora2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionGraph_Ixora2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_Ixora2.MissionGraph_Ixora2_C");
		return ptr;
	}

}


