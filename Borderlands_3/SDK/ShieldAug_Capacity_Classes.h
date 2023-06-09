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
	 * BlueprintGeneratedClass ShieldAug_Capacity.ShieldAug_Capacity_C
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UShieldAug_Capacity_C : public UAttributeValueResolver
	{
	public:
		struct FDataTableRowHandle                                 Table_ShieldAug;                                         // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UGbxAttributeData*                                   Attribute_AugTier;                                       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
