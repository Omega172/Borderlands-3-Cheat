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
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 4 Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            arrayindex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterialInstance                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayIndexOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::SetPerElementLayer4BaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic* DefaultMaterialIn, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* ArrayIndexOut, class UMaterialInstanceDynamic** DefaultMaterialOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 4 Base Material Parameters");
		
		APC_OakClothActor_C_SetPerElementLayer4BaseMaterialParameters_Params params {};
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		params.arrayindex = arrayindex;
		params.DefaultMaterialIn = DefaultMaterialIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterialInstance != nullptr)
			*DynamicMaterialInstance = params.DynamicMaterialInstance;
		if (ArrayIndexOut != nullptr)
			*ArrayIndexOut = params.ArrayIndexOut;
		if (DefaultMaterialOut != nullptr)
			*DefaultMaterialOut = params.DefaultMaterialOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 3 Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            arrayindex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterialInstance                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayIndexOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::SetPerElementLayer3BaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic* DefaultMaterialIn, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* ArrayIndexOut, class UMaterialInstanceDynamic** DefaultMaterialOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 3 Base Material Parameters");
		
		APC_OakClothActor_C_SetPerElementLayer3BaseMaterialParameters_Params params {};
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		params.arrayindex = arrayindex;
		params.DefaultMaterialIn = DefaultMaterialIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterialInstance != nullptr)
			*DynamicMaterialInstance = params.DynamicMaterialInstance;
		if (ArrayIndexOut != nullptr)
			*ArrayIndexOut = params.ArrayIndexOut;
		if (DefaultMaterialOut != nullptr)
			*DefaultMaterialOut = params.DefaultMaterialOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 2 Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            arrayindex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterialInstance                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayIndexOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::SetPerElementLayer2BaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic* DefaultMaterialIn, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* ArrayIndexOut, class UMaterialInstanceDynamic** DefaultMaterialOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Layer 2 Base Material Parameters");
		
		APC_OakClothActor_C_SetPerElementLayer2BaseMaterialParameters_Params params {};
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		params.arrayindex = arrayindex;
		params.DefaultMaterialIn = DefaultMaterialIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterialInstance != nullptr)
			*DynamicMaterialInstance = params.DynamicMaterialInstance;
		if (ArrayIndexOut != nullptr)
			*ArrayIndexOut = params.ArrayIndexOut;
		if (DefaultMaterialOut != nullptr)
			*DefaultMaterialOut = params.DefaultMaterialOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Randomized Colorization
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterial                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamicOut                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialIDOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::SetRandomizedColorization(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t MaterialID, class UMaterialInstanceDynamic* DefaultMaterial, class UMaterialInstanceDynamic** MaterialInstanceDynamicOut, int32_t* MaterialIDOut, class UMaterialInstanceDynamic** DefaultMaterialOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Randomized Colorization");
		
		APC_OakClothActor_C_SetRandomizedColorization_Params params {};
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		params.MaterialID = MaterialID;
		params.DefaultMaterial = DefaultMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialInstanceDynamicOut != nullptr)
			*MaterialInstanceDynamicOut = params.MaterialInstanceDynamicOut;
		if (MaterialIDOut != nullptr)
			*MaterialIDOut = params.MaterialIDOut;
		if (DefaultMaterialOut != nullptr)
			*DefaultMaterialOut = params.DefaultMaterialOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Base Material Parameters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            arrayindex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMaterialInstance                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialIDOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DefaultMaterialOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::SetPerElementBaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* MaterialIDOut, class UMaterialInstanceDynamic** DefaultMaterialOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Per Element Base Material Parameters");
		
		APC_OakClothActor_C_SetPerElementBaseMaterialParameters_Params params {};
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		params.arrayindex = arrayindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterialInstance != nullptr)
			*DynamicMaterialInstance = params.DynamicMaterialInstance;
		if (MaterialIDOut != nullptr)
			*MaterialIDOut = params.MaterialIDOut;
		if (DefaultMaterialOut != nullptr)
			*DefaultMaterialOut = params.DefaultMaterialOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Create Dynamic Material Instance
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          MaterialInstanceInterface                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ElementIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMeshComponent*                              MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaterialID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::CreateDynamicMaterialInstance(class UMaterialInterface* MaterialInstanceInterface, int32_t ElementIndex, class UMeshComponent* MeshComponent, class UMaterialInstanceDynamic** MaterialInstanceDynamic, int32_t* MaterialID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Create Dynamic Material Instance");
		
		APC_OakClothActor_C_CreateDynamicMaterialInstance_Params params {};
		params.MaterialInstanceInterface = MaterialInstanceInterface;
		params.ElementIndex = ElementIndex;
		params.MeshComponent = MeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaterialInstanceDynamic != nullptr)
			*MaterialInstanceDynamic = params.MaterialInstanceDynamic;
		if (MaterialID != nullptr)
			*MaterialID = params.MaterialID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Set Level ColorScheme
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APC_OakClothActor_C::SetLevelColorScheme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Set Level ColorScheme");
		
		APC_OakClothActor_C_SetLevelColorScheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.Per Instance Master Material Parameters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              TargetComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APC_OakClothActor_C::PerInstanceMasterMaterialParameters(class UMeshComponent* TargetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.Per Instance Master Material Parameters");
		
		APC_OakClothActor_C_PerInstanceMasterMaterialParameters_Params params {};
		params.TargetComponent = TargetComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PC_OakClothActor.PC_OakClothActor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APC_OakClothActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PC_OakClothActor.PC_OakClothActor_C.UserConstructionScript");
		
		APC_OakClothActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APC_OakClothActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APC_OakClothActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PC_OakClothActor.PC_OakClothActor_C");
		return ptr;
	}

}


