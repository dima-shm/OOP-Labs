#include "MyDLL.h"

int Multiply(int a, int b)
{
  return a * b;
}

int MyClass::Multiply(int a, int b)
{
	return a * b;
}