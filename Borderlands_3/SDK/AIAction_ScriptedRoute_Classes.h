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
	 * AIActionBlueprintGeneratedClass AIAction_ScriptedRoute.AIAction_ScriptedRoute_C
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	class UAIAction_ScriptedRoute_C : public UAIAction_Priority
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_AIAction_ScriptedRoute(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
