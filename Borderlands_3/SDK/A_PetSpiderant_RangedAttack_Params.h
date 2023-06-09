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
	 * Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.OnBegin
	 */
	struct UA_PetSpiderant_RangedAttack_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.Notify_Throw
	 */
	struct UA_PetSpiderant_RangedAttack_C_Notify_Throw_Params
	{	};

	/**
	 * Function A_PetSpiderant_RangedAttack.A_PetSpiderant_RangedAttack_C.ExecuteUbergraph_A_PetSpiderant_RangedAttack
	 */
	struct UA_PetSpiderant_RangedAttack_C_ExecuteUbergraph_A_PetSpiderant_RangedAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PPPI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
