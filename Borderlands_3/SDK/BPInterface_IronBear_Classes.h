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
	 * BlueprintGeneratedClass BPInterface_IronBear.BPInterface_IronBear_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPInterface_IronBear_C : public UInterface
	{
	public:
		void IronBear_DoMeleeAttack();
		void ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation);
		void SetBubbleShieldFXModOverrideEnabled(bool Enabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
