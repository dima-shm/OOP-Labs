#pragma once
#include <exception>
#include <string>

using namespace std;

class IncorrectIndex
	:public exception
{
private:
	int index;
public:
	IncorrectIndex() { index = 0; }
	IncorrectIndex(int Index) { index = Index; }
	int getIndex()
	{
		return index;
	}
};

class IncorrectSize
	:public exception
{
private:
	int size;
public:
	IncorrectSize() { size = 0; }
	IncorrectSize(int Size) { size = Size; }
	int getSize()
	{
		return size;
	}
};

class MyException 
	:public exception
{
private:
	char str[80];
public:
	MyException() { *str = 0; }
	MyException(char *s) { strcpy(str, s); }
	char const* what() const
	{
		return str;
	}
};