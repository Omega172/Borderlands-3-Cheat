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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryAdvancingAudio
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_TryAdvancingAudio_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.TryIdleAudio
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_TryIdleAudio_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Tediore_WeaponData
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_Tediore_WeaponData_Params
	{
	public:
		float                                                      DamageRadius;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_76CG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumMirvProjectiles;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRate;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LoadedAmmo;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ThrowType;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.UserConstructionScript
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.Notify_ReloadStarted
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponAttached
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.EquipEventNotify
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_EquipEventNotify_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.WeaponPutDownEvent
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_WeaponPutDownEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.OnKilledEnemy_Event
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_OnKilledEnemy_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPWeap_SM_Hyp_Handsome.BPWeap_SM_Hyp_Handsome_C.ExecuteUbergraph_BPWeap_SM_Hyp_Handsome
	 */
	struct ABPWeap_SM_Hyp_Handsome_C_ExecuteUbergraph_BPWeap_SM_Hyp_Handsome_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SN4C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
