#pragma once

#include <Windows.h>
#include <string>

bool AddFirewallRule(bool add, LPWSTR exeName, LPWSTR exeFile);

bool IsServiceRunningW(LPCWSTR serviceName);
bool MyCreateServiceW(LPCWSTR serviceName, LPCWSTR displayName, LPCWSTR binaryPath);
bool MyDeleteServiceW(LPCWSTR serviceName);
bool MyStartServiceW(LPCWSTR serviceName);
bool MyStopServiceW(LPCWSTR serviceName);

std::wstring ReadConfig(const std::wstring& filename, const std::wstring& key);
