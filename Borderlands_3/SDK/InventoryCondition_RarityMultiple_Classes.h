﻿#pragma once

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
	 * BlueprintGeneratedClass InventoryCondition_RarityMultiple.InventoryCondition_RarityMultiple_C
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UInventoryCondition_RarityMultiple_C : public UGbxCondition_Blueprint
	{
	public:
		TArray<class UOakInventoryRarityData*>                     Rarity;                                                  // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
