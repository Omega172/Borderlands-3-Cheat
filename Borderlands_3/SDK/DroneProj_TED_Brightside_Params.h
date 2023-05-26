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
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.DistanceCHeck
	 */
	struct ADroneProj_TED_Brightside_C_DistanceCHeck_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.NoFriends
	 */
	struct ADroneProj_TED_Brightside_C_NoFriends_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.StopFire
	 */
	struct ADroneProj_TED_Brightside_C_StopFire_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.StartFire
	 */
	struct ADroneProj_TED_Brightside_C_StartFire_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.FireWeapon
	 */
	struct ADroneProj_TED_Brightside_C_FireWeapon_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.UserConstructionScript
	 */
	struct ADroneProj_TED_Brightside_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.ReceiveBeginPlay
	 */
	struct ADroneProj_TED_Brightside_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.PutDownNotify
	 */
	struct ADroneProj_TED_Brightside_C_PutDownNotify_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.OnBeginExplode
	 */
	struct ADroneProj_TED_Brightside_C_OnBeginExplode_Params
	{	};

	/**
	 * Function DroneProj_TED_Brightside.DroneProj_TED_Brightside_C.ExecuteUbergraph_DroneProj_TED_Brightside
	 */
	struct ADroneProj_TED_Brightside_C_ExecuteUbergraph_DroneProj_TED_Brightside_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G4C4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
