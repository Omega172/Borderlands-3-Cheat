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
	 * BlueprintGeneratedClass DroneProj_MessyBreakup_BackupDrone.DroneProj_MessyBreakup_BackupDrone_C
	 * Size -> 0x0070 (FullSize[0x07A0] - InheritedSize[0x0730])
	 */
	class ADroneProj_MessyBreakup_BackupDrone_C : public AOakDroneProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0730(0x0008) Transient, DuplicateTransient
		class UOakDialogComponent*                                 OakDialog;                                               // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BoosterFX;                                               // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Muzzle;                                                  // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MyBody;                                                  // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         CachedWeaponFireWwiseEvent;                              // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              DamageType;                                              // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              DamageSource;                                            // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             TargetLocation;                                          // 0x0778(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BulletDamage;                                            // 0x0784(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      FireRate;                                                // 0x0788(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_VO99[0x4];                                   // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPWeap_Tediore_BaseWeapon_C*                        Weapon;                                                  // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShield*                                             Shield;                                                  // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BreakVO();
		void DistanceCHeck();
		void NoFriends();
		void StopFire();
		void StartFire();
		void FireWeapon();
		void UserConstructionScript();
		void OnBeginExplode();
		void BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon(class AOakDroneProjectile* Drone);
		void ReceiveBeginPlay();
		void OnExplode();
		void ExecuteUbergraph_DroneProj_MessyBreakup_BackupDrone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
