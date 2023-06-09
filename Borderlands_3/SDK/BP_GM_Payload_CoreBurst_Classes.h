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
	 * BlueprintGeneratedClass BP_GM_Payload_CoreBurst.BP_GM_Payload_CoreBurst_C
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UBP_GM_Payload_CoreBurst_C : public UGrenadeBehavior_PayloadForce
	{
	public:
		void K2_GrenadeImpact(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, const struct FHitResult& HitResult, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeBeginPlay(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
