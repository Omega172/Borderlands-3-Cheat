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
	 * Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree: Introduction]
	 */
	struct UMissionGraph_GearUp_C_ShlootingSpreeIntroduction_Params
	{
	public:
		unsigned char                                              UnknownData_A0AA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree]
	 */
	struct UMissionGraph_GearUp_C_ShlootingSpree_Params
	{
	public:
		unsigned char                                              UnknownData_UC87[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionGraph_GearUp.MissionGraph_GearUp_C.ExecuteUbergraph_MissionGraph_GearUp
	 */
	struct UMissionGraph_GearUp_C_ExecuteUbergraph_MissionGraph_GearUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9L1Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
