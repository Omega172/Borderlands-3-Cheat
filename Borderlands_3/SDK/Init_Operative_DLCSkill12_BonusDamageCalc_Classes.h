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
	 * BlueprintGeneratedClass Init_Operative_DLCSkill12_BonusDamageCalc.Init_Operative_DLCSkill12_BonusDamageCalc_C
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UInit_Operative_DLCSkill12_BonusDamageCalc_C : public UAttributeInitializer
	{
	public:
		struct FDataTableValueHandle                               BonusDamage;                                             // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
