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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AIAction_ScriptedWait.AIAction_ScriptedWait_C
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UAIAction_ScriptedWait_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0148(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_AIAction_ScriptedWait(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
