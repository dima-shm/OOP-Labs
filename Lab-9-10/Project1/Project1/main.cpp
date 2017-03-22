#include <iostream>
#include <windows.h>
#include <conio.h>
#include <array>
#include <queue>
#include <iterator>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*----- 1 -----*/
	const int N = 5;
	array<double, N> myarray = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	cout << "array: ";
	for (int i = 0; i < N; i++)
		cout << "[" << myarray[i] << "] ";

	/*----- 2 -----*/
	myarray.at(1) = 1.1;
	myarray.at(1) = 2.2;
	myarray.at(2) = 3.3;

	cout << "\n\narray: ";
	for (int i = 0; i < N; i++)
		cout << "[" << myarray[i] << "] ";

	/*----- 3 -----*/
	cout << "\n\nconst_iterator";
	cout << "\narray: ";
	array<double, N>::const_iterator c_it;
	for (c_it = myarray.begin(); c_it != myarray.end(); c_it++)
		cout << "[" << *c_it << "] ";

	cout << "\n\nreverse_iterator";
	cout << "\narray: ";
	array<double, N>::reverse_iterator r_it;
	for (r_it = myarray.rbegin(); r_it != myarray.rend(); r_it++)
		cout << "[" << *r_it << "] ";

	/*----- 4 -----*/
	queue<double> myqueue;
	myqueue.push(4.4);
	myqueue.push(5.5);

	cout << "\n\nqueue: ";
	cout << "[" << myqueue.front() << "] [" << myqueue.back() << "]" << endl;
	
	/*----- 5 -----*/
	for (int i = 3; i < N; i++)
		myarray[i] = NULL;

	cout << "\narray: ";
	for (int i = 0; i < N; i++)
		cout << "[" << myarray[i] << "] ";
	cout << "\nqueue: ";
	cout << "[" << myqueue.front() << "] [" << myqueue.back() << "]" << endl;

	/*for (int i = 3; i < N; i++)
	{
		myarray[i] = myqueue.front();
		myqueue.pop();
	}*/

	myarray.at(3) = myqueue.front();
	myarray.at(4) = myqueue.back();

	cout << "\narray: ";
	for (int i = 0; i < N; i++)
		cout << "[" << myarray[i] << "] ";
	cout << "\nqueue: ";
	cout << "[" << myqueue.front() << "] [" << myqueue.back() << "]" << endl;
	_getch();
}