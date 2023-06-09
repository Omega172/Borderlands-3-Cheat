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
	 * BlueprintGeneratedClass LightProjectile_Drone_CalledShot.LightProjectile_Drone_CalledShot_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Drone_CalledShot_C : public UOakLightProjectileData
	{
	public:
		void ShouldSimulateTriggerRelease(class AActor* ProjectileOwner, bool* bRes);
		void OnBegin(class ULightProjectile* Projectile);
		void StartHoming(class UOakLightProjectile* LightProjectile);
		void TryEnableHoming(class UOakLightProjectile* LightProjectile);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
