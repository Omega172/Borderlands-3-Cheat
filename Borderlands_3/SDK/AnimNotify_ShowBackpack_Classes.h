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
	 * BlueprintGeneratedClass AnimNotify_ShowBackpack.AnimNotify_ShowBackpack_C
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimNotify_ShowBackpack_C : public UAnimNotify
	{
	public:
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
