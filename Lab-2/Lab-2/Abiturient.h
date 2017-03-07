#include <string>

using namespace std;

class Abiturient
{
private:
	const string faculty = "���"; // ���������
	int          id;              // id
	static int   next_id;
	string       lastName;        // �������
	string       firstName;       // ���
	string       middleName;      // ��������
	string       addres;          // �����
	string       phoneNumber;     // �������
	int          scores[3];       // ������
	Abiturient(int);              // �������� �����������

public:
	Abiturient();                                                   // ����������� �� ���������
	Abiturient(int, string, string, string, string, string, int[]); // ����������� � �����������
	Abiturient(const Abiturient &obj);                              // ����������� �����������
	~Abiturient();                                                  // ����������

	void printAbiturient();               // ����� �����������
	void printName();                     // ����� ��� �����������
	int getId();                          // ��������� id �����������
	string getAddres();                   // ��������� ������ �����������
	void setName(string, string, string); // ��������� ��� �����������

	void listOfBadAbiturient(int, int, int); // ������ ������������, ������� �������������������� ������
	void listOfGoodAbiturient(int);          // ������ ������������, � ������� ����� ������ ���� ��������

	static int getIdAbiturient()
	{
		return ++next_id;
	}
};