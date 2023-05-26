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
	 * Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.OnActivated
	 */
	struct UPassiveSkill_Operative_Multitasker_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillActivated
	 */
	struct UPassiveSkill_Operative_Multitasker_C_Multitasker_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillCoolingDown
	 */
	struct UPassiveSkill_Operative_Multitasker_C_Multitasker_OnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.ExecuteUbergraph_PassiveSkill_Operative_Multitasker
	 */
	struct UPassiveSkill_Operative_Multitasker_C_ExecuteUbergraph_PassiveSkill_Operative_Multitasker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D20S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
