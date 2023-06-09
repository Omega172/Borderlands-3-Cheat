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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged1.Passive_Beastmaster_Ranged1_C
	 * Size -> 0x0038 (FullSize[0x01E8] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged1_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FRandomStream                                       RandomStream_BulletRefundChance;                         // 0x01B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_Ranged1; // 0x01C0(0x0028)

	public:
		void OnActivated();
		void CausedDamage_Ranged1(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ResetLNTClamp();
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void ExecuteUbergraph_Passive_Beastmaster_Ranged1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
