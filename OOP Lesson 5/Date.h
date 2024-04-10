#pragma once
#include <iostream>


class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date(int dayP, int monthP, int yearP) : day{ dayP }, month{ monthP }, year{ yearP } {}

	Date() : Date(1, 1, 1970) {}

	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}
	Date& setDay(int day) {
		this->day = day;
		return *this;
	}
	Date& setMonth(int month) {
		this->month = month;
		return *this;
	}
	Date& setYear(int year) {
		this->year = year;
		return *this;
	}
	Date& print() {
		std::cout <<"this: " << typeid(this).name() << " " << this << std::endl;
		std::cout << day << "." << month << "." << year << std::endl;
		return *this;
	}

};

