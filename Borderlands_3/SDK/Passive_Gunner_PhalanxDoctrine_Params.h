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
	 * Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.OnActivated
	 */
	struct UPassive_Gunner_PhalanxDoctrine_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.CausedDeath_PhalanxDoctrine
	 */
	struct UPassive_Gunner_PhalanxDoctrine_C_CausedDeath_PhalanxDoctrine_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine
	 */
	struct UPassive_Gunner_PhalanxDoctrine_C_ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8EB3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
