#include <windows.h>
#include <conio.h>
#include <array>
#include <queue>
#include <iterator>
#include "Product.h"

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Product pr1, pr2, pr3, pr4, pr5, pr6, pr7, pr8, pr9, pr10, pr11;
	pr1.setPrice(10);
	pr2.setPrice(20);
	pr3.setPrice(30);
	pr4.setPrice(40);
	pr5.setPrice(50);
	pr6.setPrice(11);
	pr7.setPrice(22);
	pr8.setPrice(33);
	pr9.setPrice(44);
	pr10.setPrice(55);

	/*----- 1 -----*/
	const int N = 5;
	array<Product, N> myarray;
	shared_ptr<array<Product, N>> arr_sptr(new array<Product, N>);
	arr_sptr->at(0) = pr1;
	arr_sptr->at(1) = pr2;
	arr_sptr->at(2) = pr3;
	arr_sptr->at(3) = pr4;
	arr_sptr->at(4) = pr5;

	cout << "array: ";
	array<Product, N>::iterator it;
	for (it = arr_sptr->begin(); it != arr_sptr->end(); it++)
		cout << "[" << *it << "] ";

	/*----- 2 -----*/
	arr_sptr->at(0) = pr6;
	arr_sptr->at(1) = pr7;
	arr_sptr->at(2) = pr8;

	cout << "\n\narray: ";
	for (it = arr_sptr->begin(); it != arr_sptr->end(); it++)
		cout << "[" << *it << "] ";

	/*----- 3 -----*/
	cout << "\n\nconst_iterator";
	cout << "\narray: ";
	array<Product, N>::const_iterator c_it;
	for (c_it = arr_sptr->cbegin(); c_it != arr_sptr->cend(); c_it++)
		cout << "[" << *c_it << "] ";

	cout << "\n\nreverse_iterator";
	cout << "\narray: ";
	array<Product, N>::reverse_iterator r_it;
	for (r_it = arr_sptr->rbegin(); r_it != arr_sptr->rend(); r_it++)
		cout << "[" << *r_it << "] ";

	/*----- 4 -----*/
	queue<Product> myqueue;
	unique_ptr<queue<Product>> queue_uptr(new queue<Product>);
	queue_uptr->push(pr9);
	queue_uptr->push(pr10);

	cout << "\n\nqueue: ";
	cout << "[" << queue_uptr->front() << "] [" << queue_uptr->back() << "]" << endl;

	/*----- 5 -----*/
	arr_sptr->at(3) = pr11;
	arr_sptr->at(4) = pr11;
	
	cout << "\narray: ";
	for (it = arr_sptr->begin(); it != arr_sptr->end(); it++)
		cout << "[" << *it << "] ";
	cout << "\nqueue: ";
	cout << "[" << queue_uptr->front() << "] [" << queue_uptr->back() << "]" << endl;

	it = arr_sptr->begin() + 3;
	*it = queue_uptr->front();
	it = arr_sptr->begin() + 4;
	*it = queue_uptr->back();

	cout << "\narray: ";
	for (it = arr_sptr->begin(); it != arr_sptr->end(); it++)
		cout << "[" << *it << "] ";
	cout << "\nqueue: ";
	cout << "[" << queue_uptr->front() << "] [" << queue_uptr->back() << "]" << endl;
	
	_getch();
}
