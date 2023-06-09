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
	 * BlueprintGeneratedClass BPChar_StandIn_Gunner.BPChar_StandIn_Gunner_C
	 * Size -> 0x0008 (FullSize[0x2398] - InheritedSize[0x2390])
	 */
	class ABPChar_StandIn_Gunner_C : public ABPChar_StandInPlayer_C
	{
	public:
		class UGunnerStandInComponent*                             GunnerStandIn;                                           // 0x2390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
