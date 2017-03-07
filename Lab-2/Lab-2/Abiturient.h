#include <string>

using namespace std;

class Abiturient
{
private:
	const string faculty = "ФИТ"; // Факультет
	int          id;              // id
	static int   next_id;
	string       lastName;        // Фамилия
	string       firstName;       // Имя
	string       middleName;      // Отчество
	string       addres;          // Адрес
	string       phoneNumber;     // Телефон
	int          scores[3];       // Оценки
	Abiturient(int);              // Закрытый конструктор

public:
	Abiturient();                                                   // Кноструктор по умолчанию
	Abiturient(int, string, string, string, string, string, int[]); // Кноструктор с параметрами
	Abiturient(const Abiturient &obj);                              // Кноструктор копирования
	~Abiturient();                                                  // Деструктор

	void printAbiturient();               // Вывод абитуриента
	void printName();                     // Вывод ФИО абитуриента
	int getId();                          // Получение id абитуриента
	string getAddres();                   // Получение адреса абитуриента
	void setName(string, string, string); // Установка ФИО абитуриента

	void listOfBadAbiturient(int, int, int); // Список абитуриентов, имеющих неудовлетворительные оценки
	void listOfGoodAbiturient(int);          // Список абитуриентов, у которых сумма баллов выше заданной

	static int getIdAbiturient()
	{
		return ++next_id;
	}
};