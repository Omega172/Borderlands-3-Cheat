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
	 * BlueprintGeneratedClass LightProjectile_DAL_SR_AutoAime.LightProjectile_DAL_SR_AutoAime_C
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class ULightProjectile_DAL_SR_AutoAime_C : public ULightProjectile_JAK_PS_C
	{
	public:
		void HomeIn(class UOakLightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
