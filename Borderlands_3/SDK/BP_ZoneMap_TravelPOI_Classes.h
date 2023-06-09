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
	 * BlueprintGeneratedClass BP_ZoneMap_TravelPOI.BP_ZoneMap_TravelPOI_C
	 * Size -> 0x0010 (FullSize[0x05F0] - InheritedSize[0x05E0])
	 */
	class ABP_ZoneMap_TravelPOI_C : public AZoneMapTravelStationIcon_POI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ActivatePOI();
		void ReceiveBeginPlay();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void BeginZoneMapCursorOver();
		void EndZoneMapCursorOver();
		void ViewModeChanged();
		void ExecuteUbergraph_BP_ZoneMap_TravelPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
