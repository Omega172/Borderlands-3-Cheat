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
	 * BlueprintGeneratedClass Proj_ATL_TrackerMaster_Base.Proj_ATL_TrackerMaster_Base_C
	 * Size -> 0x024E (FullSize[0x09D8] - InheritedSize[0x078A])
	 */
	class AProj_ATL_TrackerMaster_Base_C : public AProj_Weapon_BaseProjectile_C
	{
	public:
		unsigned char                                              UnknownData_9Z6A[0x6];                                   // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0790(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio_Master;                                       // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_ATL_Target_Highlight;                                 // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ProjectileTrail;                                         // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            TargetLocked;                                            // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABPWeap_ATL_BaseWeapon_C*                            MyWeapon;                                                // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      MyHomingTargets;                                         // 0x07C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		struct FEnvQueryParams                                     EnvQuery;                                                // 0x07D0(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UParticleSystem*                                     FX_MultiTarget;                                          // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          HitInfo_1;                                               // 0x0890(0x0090) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		struct FTimerHandle                                        Fuse;                                                    // 0x0920(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TMap<class AActor*, struct FWwisePlaybackInstance>         ActorToPlaybackInstance;                                 // 0x0928(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TMap<class AActor*, class UParticleSystemComponent*>       ActorToPSComponent;                                      // 0x0978(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AActor*                                              StuckTarget;                                             // 0x09C8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     TargetHighlight;                                         // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_StuckTarget();
		void StartAudioLoopOnActor(class AActor* TargetActor, class UWwiseEvent* WwiseEvent);
		void MultiTargetTag();
		void RemoveAllTargets();
		void SingleTargetTag();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnExplode();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void AttachedActorDeath();
		void FuseStart(float FuseTime);
		void FuseTriggered();
		void TargetStuck();
		void MultiTargetActorDeath_Event(class AActor* DamageReceiver, class AActor* DamageCauser);
		void ExecuteUbergraph_Proj_ATL_TrackerMaster_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
