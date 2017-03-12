#pragma once
#include <ctime>

class Set
{
private:
	static const int MAXSIZE = 64;
	int size;
	int *mas;

public:
	Set();
	~Set();

	void print();

	void operator + (int);// ���������� �������� � ���������
	void operator - (int);// �������� �������� �� ���������
	void operator * (Set&);// ����������� �������� (������ ���������� ��������)
	bool operator > (Set&);// �������� �� ������������
	bool operator != (Set&);// �������� �������� �� �����������
};