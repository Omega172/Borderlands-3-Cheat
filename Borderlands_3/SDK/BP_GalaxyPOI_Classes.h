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
	 * BlueprintGeneratedClass BP_GalaxyPOI.BP_GalaxyPOI_C
	 * Size -> 0x0040 (FullSize[0x05E8] - InheritedSize[0x05A8])
	 */
	class ABP_GalaxyPOI_C : public AOakZoneMapIcon_POI
	{
	public:
		unsigned char                                              UnknownData_UO6L[0x8];                                   // 0x05A8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPlanetMapData_C*                                    PlanetMapData;                                           // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        Color;                                                   // 0x05D0(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AZoneMapViewer*                                      OwningZoneMap;                                           // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void EndZoneMapCursorOver();
		void BeginZoneMapCursorOver();
		void ActivatePOI();
		void ReceiveBeginPlay();
		void OnBeginZoneMapCursorOver();
		void OnEndZoneMapCursorOver();
		void ExecuteUbergraph_BP_GalaxyPOI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
