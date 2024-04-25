#pragma once
#include <iostream>

class Date
{
	int day;
	int month;
	int year;
public:																												
	explicit Date(int dayP=5, int monthP=1, int yearP=1970) : day{ dayP }, month{ monthP}, year{ yearP } {				// explicit 
		//std::cout << "cstr: " << dayP << std::endl;
		printf("from  cstr  %02d.%02d.%d \n", day, month, year);
	}

	void print() const {																								//	const
		std::cout << typeid(this).name() << std::endl;
		printf("%02d.%02d.%d \n", day, month, year);
	}

	bool equals(Date date) {
		if (year == date.year && month == date.month && day == date.day) {
			return true;
		}
		return false;
	}

};

