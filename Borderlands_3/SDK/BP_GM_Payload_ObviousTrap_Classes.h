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
	 * BlueprintGeneratedClass BP_GM_Payload_ObviousTrap.BP_GM_Payload_ObviousTrap_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UBP_GM_Payload_ObviousTrap_C : public UGrenadeBehavior_PayloadSticky
	{
	public:
		void K2_GrenadeStuckTo(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, class AActor* StickTarget, struct FPayloadInstanceData* InstanceData, const struct FHitResult& HitResult);
		void K2_GrenadeExplode(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, struct FPayloadInstanceData* InstanceData);
		void K2_GrenadeImpact(class AGrenade* Grenade, class AGrenadeMod* GrenadeMod, const struct FHitResult& HitResult, struct FPayloadInstanceData* InstanceData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
