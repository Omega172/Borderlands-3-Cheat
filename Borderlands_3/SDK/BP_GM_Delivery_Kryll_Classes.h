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
	 * BlueprintGeneratedClass BP_GM_Delivery_Kryll.BP_GM_Delivery_Kryll_C
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UBP_GM_Delivery_Kryll_C : public UGrenadeBehavior_DeliveryHoming
	{
	public:
		void K2_GrenadeInitialized(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
