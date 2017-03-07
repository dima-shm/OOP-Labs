#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Abiturient.h"

using namespace std;

int Abiturient::next_id = 0;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, size;
	cout << "| ������� ������ ������� ��������: ";
	cin >> size;

	Abiturient *abiturient;
	abiturient = new Abiturient[size];

	int k, exit = 0;
	for (;;)
	{
		cout << endl; cout << "\t======================= ���� =======================" << endl;
		cout << "\t\t\t" << "[1]" << " - ����� ��������" << endl;
		cout << "\t\t\t" << "[2]" << " - ����� ������������ � ������� ��������" << endl;
		cout << "\t\t\t" << "[3]" << " - ����� ������������ � ������� ������ ������" << endl;
		cout << "\t\t\t" << "[4]" << " - �������� ��� (setName)" << endl;
		cout << "\t\t\t" << "[5]" << " - �������� ����� (getAddres)" << endl;
		cout << "\t\t\t" << "[6]" << " - ����������� � �����������" << endl;
		cout << "\t\t\t" << "[0]" << " - �����" << endl;
		cout << "\t\t\t�������� ��������: "; cin >> k;
		cout << "\t===================================================="; cout << endl << endl;

		switch (k)
		{
		case 0: exit = 1; break;
		case 1:
		{
			for (i = 0; i < size; i++)
			{
				abiturient[i].printAbiturient();
				cout << endl;
			}			
		} break;
		case 2:
		{	int score_rus, score_math, score_fiz;
			cout << "| ������� ����� � ������� ���������� ��������: " << endl; 
			cout << "| �������: "; cin >> score_rus;
			cout << "| ����������: "; cin >> score_math;
			cout << "| ������: "; cin >> score_fiz;
			cout << endl;

			for (i = 0; i < size; i++)
				abiturient[i].listOfBadAbiturient(score_rus, score_math, score_fiz);
		} break;
		case 3:
		{
			int score;
			cout << "| ������� ����� ������ � ������� ���������� ��������: "; cin >> score; cout << endl;

			for (i = 0; i < size; i++)
				abiturient[i].listOfGoodAbiturient(score);
		} break;
		case 4:
		{
			int id;
			string LastName, FirstName, MiddleName;
			bool checkId;

			cout << "| ������� id �����������, ����� �������� ��� ���: "; cin >> id; cout << endl;
			
			for (i = 0; i < size; i++)
			{
				if (abiturient[i].getId() == id)
				{		
					checkId = true; 
					break;
				}
				else
					checkId = false;
			}

			if (checkId == true)
			{
				cout << "| ������� ����� ���: ";
				cin >> LastName;
				cin >> FirstName;
				cin >> MiddleName;

				abiturient[id - 1].setName(LastName, FirstName, MiddleName);
			}
			else
				cout << "| ���������� � id " << id << " �� ������" << endl;
		} break;
		case 5:
		{
			int id;
			cout << "| ������� id �����������, ����� �������� ��� �����: "; cin >> id;
			cout << "| �����: " << abiturient[id - 1].getAddres();	
		} break;
		case 6:
		{
			int scores[3] = { 62, 56, 37 };
			Abiturient abiturient_2(1320, "�������", "����", "����������", "��-� ������������ 4", "123-45-67", scores);
			Abiturient abiturient_3(abiturient_2);
		} break;
		default: 
			cout << "\t\t\t|| [" << k << "] - ����������� ������� ||" << endl; break;
		}

		if (exit == 1) 
			break;
	}

	for (i = 0; i < size; i++) // ����� �����������
		abiturient[i].~Abiturient();

	_getch();
}