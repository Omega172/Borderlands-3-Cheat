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
	 * BlueprintGeneratedClass Init_AR_BipodMode_AccuracyScale.Init_AR_BipodMode_AccuracyScale_C
	 * Size -> 0x0004 (FullSize[0x0034] - InheritedSize[0x0030])
	 */
	class UInit_AR_BipodMode_AccuracyScale_C : public UAttributeInitializer
	{
	public:
		float                                                      AccuracyScale;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
