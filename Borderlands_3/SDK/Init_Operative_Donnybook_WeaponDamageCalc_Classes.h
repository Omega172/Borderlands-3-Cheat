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
	 * BlueprintGeneratedClass Init_Operative_Donnybook_WeaponDamageCalc.Init_Operative_Donnybook_WeaponDamageCalc_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInit_Operative_Donnybook_WeaponDamageCalc_C : public UInit_Operative_KillSkill_Parent_C
	{
	public:
		float CalculateAttributeInitialValue(class UObject* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
