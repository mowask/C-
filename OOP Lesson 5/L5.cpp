#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "NumberStorage.h"
#include "Utils.h"
#include "Date.h"
#include "Fraction.h"


using namespace std;

uint32_t NumberStorage::usedMemory{0};

void show(Fraction f) {
	f.print();
}

int main() {

	/*int z = 6;
	Utils::addOne(z);
	cout << "\n z= " << z << endl << endl;*/
	/*cout << Utils::sum(5, 6);
	cout  << "\n___________________________________\n\n";

	NumberStorage first(10);
	NumberStorage second(10);
	NumberStorage arr[5]{
		{4}, {4}, {4}, {4}, {4}
	};
	cout << "___________________________________\n\n";

	cout <<"NumberStorage::getUsedMemory(): " << NumberStorage::getUsedMemory() << endl;
	cout << "first.getUsedMemory(): " << first.getUsedMemory() << endl;
	cout << "___________________________________\n\n";*/

	/*Date today(10, 4, 2024);
	Date yesterday(9, 4, 2024);
	today.setYear(2022);
	today.print();
	yesterday.print();
	
	Date* tomorow = new Date();
	tomorow->print();

	Date bithday;
	bithday.setDay(5).setMonth(5).setYear(2005).print();
	cout << "___________________________________\n\n";*/


	Fraction fraction1(1,2);
	fraction1.print();

	Fraction fractionCopy(fraction1);
	fractionCopy.print();

	Fraction fractionCopy2 = fraction1;
	fractionCopy2.print();

	Fraction fractionCopy3{ fraction1 } ;
	fractionCopy3.print();

	show(fraction1);
}