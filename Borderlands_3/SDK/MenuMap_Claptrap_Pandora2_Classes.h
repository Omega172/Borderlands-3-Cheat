#pragma once

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
	 * BlueprintGeneratedClass MenuMap_Claptrap_Pandora2.MenuMap_Claptrap_Pandora2_C
	 * Size -> 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
	 */
	class AMenuMap_Claptrap_Pandora2_C : public AOakLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) Transient, DuplicateTransient
		int32_t                                                    MaxPlays;                                                // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalPlayed;                                             // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AGbxLevelSequenceActor*>                      Sequences;                                               // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AMenuMapClaptrapSkitControl*                         MenuMapClaptrapSkitControl_Pandora_ExecuteUbergraph_MenuMap_Claptrap_Pandora2_RefProperty; // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void BndEvt__MenuMapClaptrapSkitControl_Pandora_K2Node_ActorBoundEvent_4_OnPlaySkit__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P2_Skit_2_K2Node_ActorBoundEvent_16_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P2_Skit_K2Node_ActorBoundEvent_20_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P2_Skit_4_K2Node_ActorBoundEvent_26_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P2_Skit_3_K2Node_ActorBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P2_Skit_5_K2Node_ActorBoundEvent_1_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void BndEvt__SEQ_Claptrap_P2_Skit_0_K2Node_ActorBoundEvent_2_OnMovieSceneSequencePlayerEvent__DelegateSignature();
		void ExecuteUbergraph_MenuMap_Claptrap_Pandora2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
