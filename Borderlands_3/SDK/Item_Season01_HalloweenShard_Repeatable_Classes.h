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
	 * BlueprintGeneratedClass Item_Season01_HalloweenShard_Repeatable.Item_Season01_HalloweenShard_Repeatable_C
	 * Size -> 0x0008 (FullSize[0x05C0] - InheritedSize[0x05B8])
	 */
	class AItem_Season01_HalloweenShard_Repeatable_C : public ABP_OakMissionItem_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
