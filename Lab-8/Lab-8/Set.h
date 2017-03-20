#pragma once
#include "Product.h"

template<class Type>
class Set
{
private:
	static const int MAXSIZE = 32;
	int size;
	Type *mas;

public:
	Set();
	~Set();

	void print();

	void operator + (Type);// ���������� �������� � ���������
	void operator - (Type);// �������� �������� �� ���������
	void operator * (Set<Type>&);// ����������� �������� (������ ���������� ��������)
	bool operator > (Set<Type>&);// �������� �� ������������
	bool operator != (Set<Type>&);// �������� �������� �� �����������

	int Set<Type>::getSize();

	Type &operator[](int position) const
	{
		try 
		{
			if (position < 0 || position > size-1)
				throw IncorrectIndex(position);
		}
		catch (IncorrectIndex exp)
		{
			std::cout << "���������� ������ Set � ������������ ������: " << exp.getIndex() << std::endl;
			std::cout << "��������� ������� � �������� 0 : ";
			return mas[0];
		}
		return mas[position];
	}
};

template<class Type>
Set<Type>::Set()
{
	size = 0;
	mas = new Type[MAXSIZE];
}

template<class Type>
Set<Type>::~Set()
{
	delete[] mas;
	size = 0;
}


template<class Type>
void Set<Type>::print()
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

template<class Type>
void Set<Type>::operator + (Type x)
{
	try
	{
		if (size > MAXSIZE-1)
		{
			throw IncorrectSize(size);
		}
		else
		{
			mas[size] = x;
			size++;
		}
	}
	catch (IncorrectSize exp)
	{
		std::cout << "���������� ������ Set � �������� ���������� ����� ��������� = " << exp.getSize() << std::endl;
		return;
	}
}

template<class Type>
void Set<Type>::operator - (Type x)
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

template<class Type>
void Set<Type>::operator * (Set<Type> &s2)
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

template<class Type>
bool Set<Type>::operator > (Set<Type> &s2)
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

template<class Type>
bool Set<Type>::operator != (Set<Type> &s2)
{
	if ((*this > s2) && (s2 > *this))
		return false;
	else
		return true;
}

template<class Type>
int Set<Type>::getSize()
{
	return size;
}