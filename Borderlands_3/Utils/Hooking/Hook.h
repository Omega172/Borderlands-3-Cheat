#pragma once

template <class T>
class Hook
{
private:
	bool bHooked = false;

	DWORD oldProtect = 0;
	void** VFTable = nullptr;
	int _offset = 0;

public:
	using FN = T;
	FN oFunc = 0;

	void CreateHook(void** TargetVFTable, int offset, T CallBackFunc)
	{
		VirtualProtect(&TargetVFTable[offset], 8, PAGE_EXECUTE_READWRITE, &oldProtect);
		oFunc = reinterpret_cast<decltype(oFunc)>(TargetVFTable[offset]);
		TargetVFTable[offset] = CallBackFunc;

		VirtualProtect(&TargetVFTable[offset], 8, oldProtect, 0);

		VFTable = TargetVFTable;
		_offset = offset;

		bHooked = true;
	}

	void RestoreHook()
	{
		if (!bHooked)
			return;

		VirtualProtect(&VFTable[_offset], 8, PAGE_EXECUTE_READWRITE, &oldProtect);

		VFTable[_offset] = oFunc;

		VirtualProtect(&VFTable[_offset], 8, oldProtect, 0);
	}
};