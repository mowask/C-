#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "String.h"
#include "Time.h"
#include "Date.h"


using namespace std;

int String::count{ 0 };



int main() {

	/*String string1;
	String string2 ("String 2");
	String string3 (100);

	string1.setText("String 1");
	string3.input();

	string1.show();
	string2.show();
	string3.show();

	cout << String::getCount() << endl;*/

	/*Time time1;
	time1.showTime();
	Time time2(19, 51);
	time2.showTime();*/

	Date date1;
	date1.print();
	Date date2(1, 1, 1970);
	date2.print();
	Date date3(24);
	date2.print();
	if (date1.equals(date3)) {
		cout << "same";
	}
	else {
		cout << "different";
	}

	const Date date4(15, 4, 2024);
	date4.print();

	

}