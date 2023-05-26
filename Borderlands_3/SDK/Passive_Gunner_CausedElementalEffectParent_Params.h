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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.OnActivated
	 */
	struct UPassive_Gunner_CausedElementalEffectParent_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.GunnerCausedElementalEffect
	 */
	struct UPassive_Gunner_CausedElementalEffectParent_C_GunnerCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.Gunner_IronBearEnteredAndReady
	 */
	struct UPassive_Gunner_CausedElementalEffectParent_C_Gunner_IronBearEnteredAndReady_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent
	 */
	struct UPassive_Gunner_CausedElementalEffectParent_C_ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GSJB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
