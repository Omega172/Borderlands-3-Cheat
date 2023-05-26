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
	 * BlueprintGeneratedClass BP_Challenge_Console_25.BP_Challenge_Console_24_C
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UBP_Challenge_Console_24_C : public UBP_Challenge_Console_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDataTableRowHandle                                 HuntMailRow;                                             // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_BP_Challenge_Console_25(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
