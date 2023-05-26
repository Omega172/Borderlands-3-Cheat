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
	 * BlueprintGeneratedClass Interface_Operative_Character.Interface_Operative_Character_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface_Operative_Character_C : public UInterface
	{
	public:
		void CanActivateTrapCard(bool* res);
		void SetOperativeDeviceVisible(bool bVisible);
		void GetBarrierActionAbility(class UOakActionAbility_Barrier** res);
		void GetOperativeStatusEffectOverrides(struct FCauseDamageStatusEffectOverrides* Overrides);
		void GetDigiCloneShieldRemainingPercent(float* ShieldPercentRemaining);
		void GetOperativeShieldRemainingPercent(float* ShieldPercentRemaining);
		void GetGRMLNActionAbility(class UOakActionAbility_GRMLN** res);
		void GetDigicloneActionAbility(class UOakActionAbility_Digiclone** res);
		void SpawnAndThrowOperativeGrenade(class AActor* SpawnFromActor, const class FName& SpawnFromSocket, bool* res, class AActor** Grenade);
		void DoOperativeCryoNovaAtLocation(const struct FVector& Location, float Damage);
		void BlockOperativeActionSkillActivation(bool* ShouldBlock);
		void GetDroneSpawnLocation(struct FTransform* Transform);
		void HideOperativeDroneSpawnAnimation();
		void PlayerOperativeDroneSpawnAnimation();
		void GetMaterialsTPGun(TArray<class UMaterialInterface*>* Materials);
		void GetMaterialsFPGun(TArray<class UMaterialInterface*>* Materials);
		void GetMaterialsSkeletalMesh(TArray<class UMaterialInterface*>* Materials);
		void GetMaterialsLegs(TArray<class UMaterialInterface*>* Materials);
		void GetMaterialsArms(TArray<class UMaterialInterface*>* Materials);
		void GetMaterialsHead(TArray<class UMaterialInterface*>* Materials);
		void GetSkeletalMesh(class USkeletalMeshComponent** SkeletalMesh);
		void GetSkeletalMeshLegs(class UGbxSkeletalMeshComponent** Legs);
		void GetSkeletalMeshArms(class USkeletalMeshComponent** ArmsMesh);
		void GetSkeletalMeshHead(class UGbxSkeletalMeshComponent** HeadMesh);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
