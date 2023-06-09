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
	 * BlueprintGeneratedClass RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C
	 * Size -> 0x0048 (FullSize[0x07E8] - InheritedSize[0x07A0])
	 */
	class ARadiateDamageActor_Siren_Fracture_C : public AOakRadiateDamageActor_ActionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07A0(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       EffectCollision;                                         // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FPhaseTranceActivationComboData                     PhasetranceCombo;                                        // 0x07C8(0x0018) Edit, BlueprintVisible, Net, RepNotify, NoDestructor, ExposeOnSpawn
		class UOakActionAbility_PhaseTrance*                       PhasetranceActionAbility;                                // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void DoDamageToEnemy(class AActor* Enemy);
		void GetFractureDamage(float* res);
		void OnRep_PhasetranceCombo();
		void SetupModData();
		void DoAreaDamage();
		class UOakActionAbility* K2_GetOwnedActionAbility();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnHitEnemy(class AActor* EnemyActor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnPerformRadiateDamageTasks();
		void ExecuteUbergraph_RadiateDamageActor_Siren_Fracture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
