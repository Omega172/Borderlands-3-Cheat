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
	 * BlueprintGeneratedClass LightProjectile_TOR_GyroJet_Master.LightProjectile_TOR_GyroJet_Master_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_TOR_GyroJet_Master_C : public UOakLightProjectileData
	{
	public:
		void StickyLifetimeExpired(class ULightProjectile* Projectile);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
