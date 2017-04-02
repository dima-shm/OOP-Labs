#include <iostream>
#include <windows.h>
#include "MyDLL.h"

using namespace std;

int getMemoryStatus()
{
	MEMORYSTATUS memStatus;

	GlobalMemoryStatus(&memStatus);

	return (int)memStatus.dwMemoryLoad;
}