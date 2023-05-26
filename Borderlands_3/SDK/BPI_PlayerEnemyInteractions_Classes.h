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
	 * BlueprintGeneratedClass BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PlayerEnemyInteractions_C : public UInterface
	{
	public:
		void Player_SpawnTransfusionProjectile(class UClass* DataBlueprintOverride, class UClass* DamageTypeOverride, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* CauserOverride);
		void Enemy_OnThoughtLockStop();
		void Enemy_OnThoughtLockStart();
		void Enemy_OnPhaseLockStop();
		void Enemy_OnPhaseLockStart();
		void Player_HealthDepleted(class AOakCharacter* Character);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
