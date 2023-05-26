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
	 * BlueprintGeneratedClass Interface_Operative_DigiClone.Interface_Operative_DigiClone_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface_Operative_DigiClone_C : public UInterface
	{
	public:
		void StartSeperationAnxietyNova(const struct FVector& loc);
		void NotifyPanicButtonTriggered();
		void GetDigiCloneReference(class AActor** Digiclone);
		void IsDigiCloneActive(bool* Return);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
