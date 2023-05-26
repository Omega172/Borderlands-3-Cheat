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
	 * Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.OnActivated
	 */
	struct UPassive_Gunner_SomeForTheRoad_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.BronzeAgeRage_ExitedIronBear
	 */
	struct UPassive_Gunner_SomeForTheRoad_C_BronzeAgeRage_ExitedIronBear_Params
	{
	public:
		class AOakCharacter_IronBear*                              IronBear;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.ExecuteUbergraph_Passive_Gunner_SomeForTheRoad
	 */
	struct UPassive_Gunner_SomeForTheRoad_C_ExecuteUbergraph_Passive_Gunner_SomeForTheRoad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5OWQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif