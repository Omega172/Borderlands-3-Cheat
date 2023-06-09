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
	 * BlueprintGeneratedClass TravelGraph_Cartels.TravelGraph_Cartels_C
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UTravelGraph_Cartels_C : public UTravelGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0090(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_TravelGraph_Cartels(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
