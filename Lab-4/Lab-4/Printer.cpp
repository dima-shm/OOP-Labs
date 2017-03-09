#include <iostream>
#include "Printer.h"


using namespace std;

Printer::Printer()
{
	cout << "\t\t\t|| Конструктор Printer ||" << endl;
}
Printer::~Printer()
{
	cout << "\t\t|| Деструктор Printer ||" << endl;
}

void Printer::iAmPrinting(Mineral *someobj)
{
	cout << typeid(someobj).name() << endl;
	someobj->toConsole(); cout << endl;
}