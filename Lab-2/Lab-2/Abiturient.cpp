#include <iostream>
#include "Abiturient.h"

using namespace std;

Abiturient::Abiturient()
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ Кноструктор по умолчанию ~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	id = getIdAbiturient();

	cout << "| Введите ФИО: ";
	cin >> lastName;
	cin >> firstName;
	cin >> middleName;
	cout << "| Введите адрес: "; cin >> addres;
	cout << "| Введите телефон: "; cin >> phoneNumber;
	cout << "| Введите оценки: " << endl;
	cout << "|\t\tРусский: "; cin >> scores[0];
	cout << "|\t\tМатематика: "; cin >> scores[1];
	cout << "|\t\tФизика: "; cin >> scores[2];
}
Abiturient::Abiturient(int Id, string LastName, string FirstName, string MiddleName, string Addres, string PhoneNumber, int Scores[])
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ Кноструктор с параметрами абитуриента ~~~~~~~~~~~" << endl;
	id = Id;
	lastName = LastName;
	firstName = FirstName;
	middleName = MiddleName;
	addres = Addres;
	phoneNumber = PhoneNumber;
	for (int i = 0; i < 3; ++i)
		scores[i] = Scores[i];
	
	cout << "| Факультет: " << faculty << endl;
	cout << "| id: " << id << endl;
	cout << "| ФИО: " << lastName << " " << firstName << " " << middleName << endl;
	cout << "| Адрес: " << addres << endl;
	cout << "| Телефон: " << phoneNumber << endl;
	cout << "| Оценки: " << endl;
	cout << "|\tРусский: " << scores[0] << endl;
	cout << "|\tМатематика: " << scores[1] << endl;
	cout << "|\tФизика: " << scores[2] << endl;
}
Abiturient::Abiturient(const Abiturient &obj)
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ Конструктор копирования ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	id = obj.id;
	lastName = obj.lastName;
	firstName = obj.firstName;
	middleName = obj.middleName;
	addres = obj.addres;
	phoneNumber = obj.phoneNumber;
	for (int i = 0; i < 3; ++i)
		scores[i] = obj.scores[i];

	cout << "| Факультет: " << faculty << endl;
	cout << "| id: " << id << endl;
	cout << "| ФИО: " << lastName << " " << firstName << " " << middleName << endl;
	cout << "| Адрес: " << addres << endl;
	cout << "| Телефон: " << phoneNumber << endl;
	cout << "| Оценки: " << endl;
	cout << "|\tРусский: " << scores[0] << endl;
	cout << "|\tМатематика: " << scores[1] << endl;
	cout << "|\tФизика: " << scores[2] << endl;
}
Abiturient::Abiturient(int N)
{
	cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~ Закрытый конструктор ~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
Abiturient::~Abiturient()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~ Деструктор ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~ Id абитуриента: " << this->id << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}

void Abiturient::printAbiturient()
{
	cout << "| Факультет: " << faculty << endl;
	cout << "| id: " << id << endl;
	cout << "| ФИО: " << lastName << " " << firstName << " " << middleName << endl;
	cout << "| Адрес: " << addres << endl;
	cout << "| Телефон: " << phoneNumber << endl;
	cout << "| Оценки: " << endl;
	cout << "|\tРусский: " << scores[0] << endl;
	cout << "|\tМатематика: " << scores[1] << endl;
	cout << "|\tФизика: " << scores[2] << endl;
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
		cout << "| Id абитуриена: " << getId() << endl;
		cout << "| ФИО абитуриена: "; printName();
		cout << "| Оценки: " << endl;
		cout << "|\tРусский: " << scores[0] << endl;
		cout << "|\tМатематика: " << scores[1] << endl;
		cout << "|\tФизика: " << scores[2] << endl << endl;
	}
}
void Abiturient::listOfGoodAbiturient(int score)
{
	if ((scores[0] + scores[1] + scores[2]) >= score)
	{
		cout << "| Id абитуриена: " << getId() << endl;
		cout << "| ФИО абитуриена: "; printName();
		cout << "| Оценки: " << endl;
		cout << "|\tРусский: " << scores[0] << endl;
		cout << "|\tМатематика: " << scores[1] << endl;
		cout << "|\tФизика: " << scores[2] << endl;
		cout << "| Сумма баллов = " << (scores[0] + scores[1] + scores[2]) << endl << endl;
	}
}