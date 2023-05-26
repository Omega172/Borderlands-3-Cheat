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
	 * Function A_Pet_Taunt.A_Pet_Taunt_C.Notify_Taunt
	 */
	struct UA_Pet_Taunt_C_Notify_Taunt_Params
	{	};

	/**
	 * Function A_Pet_Taunt.A_Pet_Taunt_C.ExecuteUbergraph_A_Pet_Taunt
	 */
	struct UA_Pet_Taunt_C_ExecuteUbergraph_A_Pet_Taunt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZM9J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
