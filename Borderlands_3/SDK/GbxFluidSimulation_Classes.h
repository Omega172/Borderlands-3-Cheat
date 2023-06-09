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
	 * Class GbxFluidSimulation.VoxelDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelDataProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxFluidSimulation.FluidSimDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFluidSimDataProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxFluidSimulation.QuickFluidVelocitySolverDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UQuickFluidVelocitySolverDataProvider : public UFluidSimDataProvider
	{
	public:
		void StepSim();
		void RunSim();
		void ResetSim();
		void InitSim();
		void ClearData();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
