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
	 * BlueprintGeneratedClass LightProjectile_HW_BanditLauncher_v2_Child.LightProjectile_HW_BanditLauncher_v2_Child_C
	 * Size -> 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
	 */
	class ULightProjectile_HW_BanditLauncher_v2_Child_C : public ULightProjectile_GM_Master_C
	{
	public:
		void Home(class UOakLightProjectile* Projectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
