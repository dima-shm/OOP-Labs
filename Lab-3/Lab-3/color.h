#include <windows.h>

HANDLE consoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

void blue()
{
	SetConsoleTextAttribute(consoleOutput, 0x0B);
}

void white()
{
	SetConsoleTextAttribute(consoleOutput, 0x0F);
}

void green()
{
	SetConsoleTextAttribute(consoleOutput, 0x0A);
}

void red()
{
	SetConsoleTextAttribute(consoleOutput, 0x0C);
}