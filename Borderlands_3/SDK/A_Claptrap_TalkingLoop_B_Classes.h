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
	 * BlueprintGeneratedClass A_Claptrap_TalkingLoop_B.A_Claptrap_TalkingLoop_B_C
	 * Size -> 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
	 */
	class UA_Claptrap_TalkingLoop_B_C : public UGbxAction_Loop
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) Transient, DuplicateTransient

	public:
		void OnLoop(class AActor* Actor);
		void ExecuteUbergraph_A_Claptrap_TalkingLoop_B(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
