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
	 * Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnActivated
	 */
	struct UPassiveSkill_Siren_Dread_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnGraspedTarget
	 */
	struct UPassiveSkill_Siren_Dread_C_OnGraspedTarget_Params
	{
	public:
		class AGbxCharacter*                                       GraspedTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.OnKilledGraspedTarget
	 */
	struct UPassiveSkill_Siren_Dread_C_OnKilledGraspedTarget_Params
	{
	public:
		class AActor*                                              Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       GraspedTarget;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Dread.PassiveSkill_Siren_Dread_C.ExecuteUbergraph_PassiveSkill_Siren_Dread
	 */
	struct UPassiveSkill_Siren_Dread_C_ExecuteUbergraph_PassiveSkill_Siren_Dread_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T98K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
