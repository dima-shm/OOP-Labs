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
	cout << "| Ââåäèòå ðàçìåð ìàññèâà îáúåêòîâ: ";
	cin >> size;

	Abiturient *abiturient;
	abiturient = new Abiturient[size];

	int k, exit = 0;
	for (;;)
	{
		cout << endl; cout << "\t======================= ÌÅÍÞ =======================" << endl;
		cout << "\t\t\t" << "[1]" << " - ÂÛÂÎÄ ÎÁÚÅÊÒÎÂ" << endl;
		cout << "\t\t\t" << "[2]" << " - ÂÛÂÎÄ ÀÁÈÒÓÐÈÅÍÒÎÂ Ñ ÏËÎÕÈÌÈ ÎÖÅÍÊÀÌÈ" << endl;
		cout << "\t\t\t" << "[3]" << " - ÂÛÂÎÄ ÀÁÈÒÓÐÈÅÍÒÎÂ Ñ ÕÎÐÎØÅÉ ÑÓÌÌÎÉ ÎÖÅÍÎÊ" << endl;
		cout << "\t\t\t" << "[4]" << " - ÈÇÌÅÍÈÒÜ ÈÌß (setName)" << endl;
		cout << "\t\t\t" << "[5]" << " - ÏÎËÓ×ÈÒÜ ÀÄÐÅÑ (getAddres)" << endl;
		cout << "\t\t\t" << "[6]" << " - ÊÎÍÑÒÐÓÊÒÎÐ Ñ ÏÀÐÀÌÅÒÐÀÌÈ" << endl;
		cout << "\t\t\t" << "[0]" << " - ÂÛÕÎÄ" << endl;
		cout << "\t\t\tÂûáåðèòå äåéñòâèå: "; cin >> k;
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
			cout << "| Ââåäèòå áàëëû ñ êîòîðîé íåîáõîäèìî ñðàâíèòü: " << endl; 
			cout << "| Ðóññêèé: "; cin >> score_rus;
			cout << "| Ìàòåìàòèêà: "; cin >> score_math;
			cout << "| Ôèçèêà: "; cin >> score_fiz;
			cout << endl;

			for (i = 0; i < size; i++)
				abiturient[i].listOfBadAbiturient(score_rus, score_math, score_fiz);
		} break;
		case 3:
		{
			int score;
			cout << "| Ââåäèòå ñóììó áàëëîâ ñ êîòîðîé íåîáõîäèìî ñðàâíèòü: "; cin >> score; cout << endl;

			for (i = 0; i < size; i++)
				abiturient[i].listOfGoodAbiturient(score);
		} break;
		case 4:
		{
			int id;
			string LastName, FirstName, MiddleName;
			bool checkId;

			cout << "| Ââåäèòå id àáèòóðèåíòà, ÷òîáû èçìåíèòü åãî èìÿ: "; cin >> id; cout << endl;
			
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
				cout << "| Ââåäèòå íîâûå ÔÈÎ: ";
				cin >> LastName;
				cin >> FirstName;
				cin >> MiddleName;

				abiturient[id - 1].setName(LastName, FirstName, MiddleName);
			}
			else
				cout << "| Àáèòóðèåíò ñ id " << id << " íå íàéäåí" << endl;
		} break;
		case 5:
		{
			int id;
			cout << "| Ââåäèòå id àáèòóðèåíòà, ÷òîáû ïîëó÷èòü åãî àäðåñ: "; cin >> id;
			cout << "| Àäðåñ: " << abiturient[id - 1].getAddres();	
		} break;
		case 6:
		{
			int scores[3] = { 62, 56, 37 };
			Abiturient abiturient_2(1320, "Ñîáîëåâ", "Þðèé", "Äìèòðååâè÷", "ïð-ò Ðîêîñîâñêîãî 4", "123-45-67", scores);
			Abiturient abiturient_3(abiturient_2);
		} break;
		default: 
			cout << "\t\t\t|| [" << k << "] - íåèçâåñòíàÿ êîìàíäà ||" << endl; break;
		}

		if (exit == 1) 
			break;
	}

	for (i = 0; i < size; i++) // Âûçîâ äåñòðóêòîðà
		abiturient[i].~Abiturient();

	_getch();
}