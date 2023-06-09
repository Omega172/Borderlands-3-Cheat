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
	 * BlueprintGeneratedClass IBPChar_Ixora_Gunner.IBPChar_Ixora_Gunner_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBPChar_Ixora_Gunner_C : public UInterface
	{
	public:
		void SetGunnerHologramTemplate(class UParticleSystem* Template);
		void SetGunnerHologramVisible(bool Visible);
		void SetGunnerDeviceVisible(bool Visible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
