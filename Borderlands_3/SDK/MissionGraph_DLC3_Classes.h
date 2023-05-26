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
	 * BlueprintGeneratedClass MissionGraph_DLC3.MissionGraph_DLC3_C
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMissionGraph_DLC3_C : public UMissionGraph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0068(0x0008) Transient, DuplicateTransient

	public:
		void RidingtoRuin();
		void DevilRustlers();
		void SaurdewValley();
		void DirtyDeeds();
		void TheLegendofMcSmugger();
		void TheMeatmanProphecy();
		void LostandFound();
		void TheDandyandDamsel();
		void OfBloodandBeans();
		void MiracleElixirFixer();
		void MoneyBackGuarantee();
		void TheQuickandtheQuickerer();
		void WhereitallStarted();
		void OfftheRails();
		void TheNameoftheLaw();
		void BloodFromaStone();
		void ExecuteUbergraph_MissionGraph_DLC3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
