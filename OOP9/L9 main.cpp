#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <time.h>
#include "DynArr.h"

using namespace std;


int globalvar = 20;
int& refFunction() {
	return globalvar;
}

int max(int a, int b) {
	return a > b ? a : b;
}

DynArr factory(int size) {
	DynArr arr{ size };
	arr.fillRand();
	return arr;
}
	
int main() {											// Elision прямая  копия без выделения памяти
	
	DynArr arr1{ move(factory(20)) };
	cout << "arr1: ";
	arr1.print();
	
	DynArr arr2{ arr1 };
	cout << "arr2: ";
	arr1.print();
}

int main1() {

	/*refFunction() = 25;
	cout << globalvar<<endl<< endl;

	int x{ 42 };
	int& refX{ x };
	const int& cRefX{ x };
	const int& cRefXX{ x +24 };

	cout << x << '\n'
		<< refX << '\n'
		<< cRefX << '\n'
		<< cRefXX << '\n';

	cout << "\n______________________________\n\n";*/

	//int&& rvalRef{ 2 + 3 };
	//rvalRef += 3;
	//cout << rvalRef << endl;

	//int&& res{ max(3,5) };
	//res += max(6, 4);
	//cout << res << endl;
	//int x{ 42 };

	//// itn&& rvalBad {x}; - Невозможно инициализировать rvalue -ссылку lvalue -объектом

	//int& lvalRef{ res };
	//cout << lvalRef << endl;



	

	
	srand(time(NULL));

	/*cout << "\n______________________________\n\n";
	DynArr arr6{6};
	arr6.fillRand();
	arr6.print();

	DynArr arr6_copy{move( arr6) };
	arr6.print();
	cout << "\n______________________________\n\n";*/


	/*DynArr arr10;
	arr10.fillRand();
	arr10.print();

	DynArr arr10_copy(arr10);
	arr10_copy.print();

	cout << "\n______________________________\n\n";

	arr10.setElement(0, -5);
	arr10.print();
	arr10_copy.print();
	cout << "\n______________________________\n\n";*/

	//DynArr arr8{8};
	//arr8.fillRand();
	//arr8.print();

	//DynArr arr8_copy;
	//cout << "\n ----- before copy\n";
	//arr8_copy = arr8;
	//cout << "\n ----- after copy\n";
	//arr8_copy.print();



	return 0;
}