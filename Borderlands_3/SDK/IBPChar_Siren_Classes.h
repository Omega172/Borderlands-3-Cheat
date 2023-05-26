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
	 * BlueprintGeneratedClass IBPChar_Siren.IBPChar_Siren_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBPChar_Siren_C : public UInterface
	{
	public:
		void GetSoulSapProjectile(class UClass** res);
		void GetStillnessOfMindControlledMove(class UClass** res);
		void SirenHasAscendantSkill(bool* res);
		void GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** _3rdPersonMesh, class UGbxSkeletalMeshComponent** _1stPersonMesh);
		void SetArmsElement(EPhaseTranceElementalType Type);
		void PlayTattooFade(bool bVisible);
		void SetArmsMaterial(class UMaterialInstance* Material);
		void Play3rdPersonArmFade(bool bInstant, bool bVisible);
		void GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms);
		void GetSirenArmsReference(class UGbxSkeletalMeshComponent** SkelMesh3rd, class UGbxSkeletalMeshComponent** SkelMesh1st);
		void GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
