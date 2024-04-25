#pragma once
#include <iostream>

class Time
{
	int hours;
	int minutes;
public:

	Time() : hours(0), minutes(0) {}

	Time(int h, int min) : hours{ h }, minutes{ min} {}

	int getHours() {
		return hours;
	}

	int getMinutes() {
		return minutes;
	}

	void setHours(int h) {
		if (hours < 0 || hours > 23) hours = 0;
		hours = h;
	}

	void setMinutes(int min) {
		if (minutes < 0 || hours > 59) minutes = 0;
		minutes = min;
	}

	void showTime() {
		std::cout << hours << ":" << minutes << std::endl;
	}

};

