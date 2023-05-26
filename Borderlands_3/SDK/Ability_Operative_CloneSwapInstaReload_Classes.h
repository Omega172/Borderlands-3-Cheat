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
	 * BlueprintGeneratedClass Ability_Operative_CloneSwapInstaReload.Ability_Operative_CloneSwapInstaReload_C
	 * Size -> 0x0000 (FullSize[0x0218] - InheritedSize[0x0218])
	 */
	class UAbility_Operative_CloneSwapInstaReload_C : public UAbility_AnointParent_Operative_C
	{
	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif