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
	 * BlueprintGeneratedClass LightProjectile_Dart.LightProjectile_Dart_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_Dart_C : public UWeapon_Default_LightProjectile_C
	{
	public:
		void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
		void OnLifetimeExpired(class ULightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
