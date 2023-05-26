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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIActionSkill_Beastmaster_DLCSkill_C : public UInterface
	{
	public:
		void TrapFailedToSpawn(bool* res);
		void EndTrapEarly(bool* res);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
