#pragma once

/**
 * Name: Borderlands_3
 * Version: OAK-PATCHWIN640-328
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PC_OakClothActor.PC_OakClothActor_C
	 * Size -> 0x0174 (FullSize[0x05EC] - InheritedSize[0x0478])
	 */
	class APC_OakClothActor_C : public AClothStaticMeshActor
	{
	public:
		class UWindAudioLoopComponent*                             WindAudioLoop;                                           // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       Random_Seed;                                             // 0x0488(0x0008) Edit, BlueprintVisible, NoDestructor
		float                                                      RandomFloatFromStream;                                   // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Level_Primary_Color1;                                    // 0x0494(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Level_Primary_Color2;                                    // 0x04A4(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Level_Secondary_Color1;                                  // 0x04B4(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Level_Secondary_Color2;                                  // 0x04C4(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Level_Tertiary_Color1;                                   // 0x04D4(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Level_Tertiary_Color2;                                   // 0x04E4(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UZSI[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          MaterialsArray;                                          // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             RandomVectorFromStream;                                  // 0x0508(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Randomize_On;                                            // 0x0514(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NPZ4[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_MasterMaterial_Colorize>             ColorizeArray;                                           // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UMaterialInterface*>                          DefaultMaterialsArray;                                   // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FStruct_MasterMaterial_BaseParams>           MaterialParamsArray;                                     // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      Colorize_HueShift_RandomAmount;                          // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Colorize_HueShift_Amount;                                // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMultiLayerMaterial;                                    // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ESPT[0x3];                                   // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MultiLayerNumberofLayers;                                // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_MasterMaterial_BaseParams_Layer2>    L2_MaterialParamsArray;                                  // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FStruct_MasterMaterial_BaseParams_Layer3>    L3_MaterialParamsArray;                                  // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FStruct_MasterMaterial_BaseParams_Layer4>    L4_MaterialParamsArray;                                  // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UMaterialInterface*>                          MaterialOverrides;                                       // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UWwiseEvent*                                         ClothAudio;                                              // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       NoBackstopMesh;                                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WindInfluenceMultiplier;                                 // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AOMD[0x4];                                   // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Backstopamount;                                          // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWindDirectionalSensitivity                         WindSensitivitynobackstop;                               // 0x05BC(0x0018) Edit, BlueprintVisible, NoDestructor
		struct FWindDirectionalSensitivity                         WindSensitivitywithbackstop;                             // 0x05D4(0x0018) Edit, BlueprintVisible, NoDestructor

	public:
		void SetPerElementLayer4BaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic* DefaultMaterialIn, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* ArrayIndexOut, class UMaterialInstanceDynamic** DefaultMaterialOut);
		void SetPerElementLayer3BaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic* DefaultMaterialIn, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* ArrayIndexOut, class UMaterialInstanceDynamic** DefaultMaterialOut);
		void SetPerElementLayer2BaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic* DefaultMaterialIn, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* ArrayIndexOut, class UMaterialInstanceDynamic** DefaultMaterialOut);
		void SetRandomizedColorization(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t MaterialID, class UMaterialInstanceDynamic* DefaultMaterial, class UMaterialInstanceDynamic** MaterialInstanceDynamicOut, int32_t* MaterialIDOut, class UMaterialInstanceDynamic** DefaultMaterialOut);
		void SetPerElementBaseMaterialParameters(class UMaterialInstanceDynamic* MaterialInstanceDynamic, int32_t arrayindex, class UMaterialInstanceDynamic** DynamicMaterialInstance, int32_t* MaterialIDOut, class UMaterialInstanceDynamic** DefaultMaterialOut);
		void CreateDynamicMaterialInstance(class UMaterialInterface* MaterialInstanceInterface, int32_t ElementIndex, class UMeshComponent* MeshComponent, class UMaterialInstanceDynamic** MaterialInstanceDynamic, int32_t* MaterialID);
		void SetLevelColorScheme();
		void PerInstanceMasterMaterialParameters(class UMeshComponent* TargetComponent);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
