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
	 * BlueprintGeneratedClass Action_Enter_Short_Gunner.Action_Enter_Short_Gunner_C
	 * Size -> 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
	 */
	class UAction_Enter_Short_Gunner_C : public UOakAction_Anim
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		class APlayerController*                                   PlayerController;                                        // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBegin(class AActor* Actor);
		void ExecuteUbergraph_Action_Enter_Short_Gunner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
