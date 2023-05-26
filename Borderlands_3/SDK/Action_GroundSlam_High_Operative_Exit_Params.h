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
	 * Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnBeginBringUpWeapon
	 */
	struct UAction_GroundSlam_High_Operative_Exit_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnEnd
	 */
	struct UAction_GroundSlam_High_Operative_Exit_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0UJ4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.PlayVFX
	 */
	struct UAction_GroundSlam_High_Operative_Exit_C_PlayVFX_Params
	{	};

	/**
	 * Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.OnBegin
	 */
	struct UAction_GroundSlam_High_Operative_Exit_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_GroundSlam_High_Operative_Exit.Action_GroundSlam_High_Operative_Exit_C.ExecuteUbergraph_Action_GroundSlam_High_Operative_Exit
	 */
	struct UAction_GroundSlam_High_Operative_Exit_C_ExecuteUbergraph_Action_GroundSlam_High_Operative_Exit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
