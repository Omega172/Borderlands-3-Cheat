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
	 * BlueprintGeneratedClass DamageData_Operative_Zzzap.DamageData_Operative_Zzzap_C
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UDamageData_Operative_Zzzap_C : public UOakDamageData
	{
	public:
		void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
