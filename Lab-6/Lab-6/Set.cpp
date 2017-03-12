#include <iostream>
#include "Set.h""

using namespace std;

Set::Set()
{
	size = 0;
	mas = new int[MAXSIZE];
}
Set::~Set()
{
	delete[] mas;
}

void Set::print()
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

void Set::operator + (int x)
{
	if (size < MAXSIZE)
	{
		mas[size] = x;
		size++;
	}
	else
	{
		cout << "ОШИБКА. Допустимый рамер множества 64" << endl;
	}
}
void Set::operator - (int x)
{
	for (int i = 0; i < this->size; i++)
	{
		if (this->mas[i] == x)
		{
			for (; i < this->size; i++)
			{
				mas[i] = mas[i + 1];
			}
			size--;
		}
	}
}
void Set::operator * (Set &s2)
{
	Set temp;

	for (int i = 0; i < this->size; i++)
	{
		for (int j = 0; j < s2.size; j++)
		{
			if (this->mas[i] == s2.mas[j])
			{
				temp + this->mas[i];
			}
		}
	}

	temp.print();
}
bool Set::operator > (Set &s2)
{
	int key = 0;

	for (int i = 0; i < this->size; i++)
	{
		for (int j = 0; j < s2.size; j++)
		{
			if (this->mas[i] == s2.mas[j])
			{
				key++;
			}
		}
	}

	if (key == s2.size)
		return true;
	else
		return false;

}
bool Set::operator != (Set &s2)
{
	if ((*this > s2) && (s2 > *this))
		return false;
	else
		return true;
}