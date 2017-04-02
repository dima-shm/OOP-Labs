#pragma once
#pragma warning (disable:4244)

extern "C" _declspec(dllexport) int Multiply(int a, int b);

class MyClass
{
public:
	static __declspec(dllexport) int Multiply(int a, int b);
};