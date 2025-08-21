#include <windows.h>
#include <stdio.h>
int main() {
 STARTUPINFO si;
 PROCESS_INFORMATION pi;
 ZeroMemory(&si, sizeof(si));
 si.cb = sizeof(si);
 ZeroMemory(&pi, sizeof(pi));
 printf("Parent Process ID: %lu\n", GetCurrentProcessId());
 
 CloseHandle(pi.hProcess);
 CloseHandle(pi.hThread);
 return 0;
}

