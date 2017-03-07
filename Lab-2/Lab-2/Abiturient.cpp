#include <iostream>
#include "Abiturient.h"

using namespace std;

Abiturient::Abiturient()
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ ����������� �� ��������� ~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	id = getIdAbiturient();

	cout << "| ������� ���: ";
	cin >> lastName;
	cin >> firstName;
	cin >> middleName;
	cout << "| ������� �����: "; cin >> addres;
	cout << "| ������� �������: "; cin >> phoneNumber;
	cout << "| ������� ������: " << endl;
	cout << "|\t\t�������: "; cin >> scores[0];
	cout << "|\t\t����������: "; cin >> scores[1];
	cout << "|\t\t������: "; cin >> scores[2];
}
Abiturient::Abiturient(int Id, string LastName, string FirstName, string MiddleName, string Addres, string PhoneNumber, int Scores[])
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ ����������� � ����������� ����������� ~~~~~~~~~~~" << endl;
	id = Id;
	lastName = LastName;
	firstName = FirstName;
	middleName = MiddleName;
	addres = Addres;
	phoneNumber = PhoneNumber;
	for (int i = 0; i < 3; ++i)
		scores[i] = Scores[i];
	
	cout << "| ���������: " << faculty << endl;
	cout << "| id: " << id << endl;
	cout << "| ���: " << lastName << " " << firstName << " " << middleName << endl;
	cout << "| �����: " << addres << endl;
	cout << "| �������: " << phoneNumber << endl;
	cout << "| ������: " << endl;
	cout << "|\t�������: " << scores[0] << endl;
	cout << "|\t����������: " << scores[1] << endl;
	cout << "|\t������: " << scores[2] << endl;
}
Abiturient::Abiturient(const Abiturient &obj)
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ ����������� ����������� ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	id = obj.id;
	lastName = obj.lastName;
	firstName = obj.firstName;
	middleName = obj.middleName;
	addres = obj.addres;
	phoneNumber = obj.phoneNumber;
	for (int i = 0; i < 3; ++i)
		scores[i] = obj.scores[i];

	cout << "| ���������: " << faculty << endl;
	cout << "| id: " << id << endl;
	cout << "| ���: " << lastName << " " << firstName << " " << middleName << endl;
	cout << "| �����: " << addres << endl;
	cout << "| �������: " << phoneNumber << endl;
	cout << "| ������: " << endl;
	cout << "|\t�������: " << scores[0] << endl;
	cout << "|\t����������: " << scores[1] << endl;
	cout << "|\t������: " << scores[2] << endl;
}
Abiturient::Abiturient(int N)
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ �������� ����������� ~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
Abiturient::~Abiturient()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~ ���������� ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~ Id �����������: " << this->id << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}

void Abiturient::printAbiturient()
{
	cout << "| ���������: " << faculty << endl;
	cout << "| id: " << id << endl;
	cout << "| ���: " << lastName << " " << firstName << " " << middleName << endl;
	cout << "| �����: " << addres << endl;
	cout << "| �������: " << phoneNumber << endl;
	cout << "| ������: " << endl;
	cout << "|\t�������: " << scores[0] << endl;
	cout << "|\t����������: " << scores[1] << endl;
	cout << "|\t������: " << scores[2] << endl;
}
void Abiturient::printName()
{
	cout << lastName << " " << firstName << " " << middleName << endl;
}
int Abiturient::getId()
{
	return id;
}
string Abiturient::getAddres()
{
	return addres;
}
void Abiturient::setName(string LastName, string FirstName, string MiddleName)
{
	lastName = LastName;
	firstName = FirstName;
	middleName = MiddleName;
}

void Abiturient::listOfBadAbiturient(int score_rus, int score_math,int score_fiz)
{
	if ((scores[0] <= score_rus) && (scores[1] <= score_math) && (scores[2] <= score_fiz))
	{
		cout << "| Id ����������: " << getId() << endl;
		cout << "| ��� ����������: "; printName();
		cout << "| ������: " << endl;
		cout << "|\t�������: " << scores[0] << endl;
		cout << "|\t����������: " << scores[1] << endl;
		cout << "|\t������: " << scores[2] << endl << endl;
	}
}
void Abiturient::listOfGoodAbiturient(int score)
{
	if ((scores[0] + scores[1] + scores[2]) >= score)
	{
		cout << "| Id ����������: " << getId() << endl;
		cout << "| ��� ����������: "; printName();
		cout << "| ������: " << endl;
		cout << "|\t�������: " << scores[0] << endl;
		cout << "|\t����������: " << scores[1] << endl;
		cout << "|\t������: " << scores[2] << endl;
		cout << "| ����� ������ = " << (scores[0] + scores[1] + scores[2]) << endl << endl;
	}
}