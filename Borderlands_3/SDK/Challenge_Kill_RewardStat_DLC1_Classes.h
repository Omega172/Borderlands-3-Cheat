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
	 * BlueprintGeneratedClass Challenge_Kill_RewardStat_DLC1.Challenge_Kill_RewardStat_DLC1_C
	 * Size -> 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
	 */
	class UChallenge_Kill_RewardStat_DLC1_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDataTableRowHandle                                 NPCMailRow;                                              // 0x0268(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FDialogTimeSlotReference                            CrewCompletionDialog;                                    // 0x0278(0x0040) Edit, BlueprintVisible

	public:
		void PlayCompletionVO(class AGbxPlayerController* PlayerController, bool* Played);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_Challenge_Kill_RewardStat_DLC1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
