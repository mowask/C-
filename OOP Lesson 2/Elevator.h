#pragma once
#include <iostream>
using namespace std;

class Elevator
{
private:
	int bottom;
	int top;
	int peopleCount;
	int currentFloor;
public:
	Elevator() {
		currentFloor = 0;
	}
	Elevator(int newBottom, int newTop, int newPeopleCount) {
		currentFloor = newBottom;
		bottom = newBottom;
		top = newTop;
		peopleCount = newPeopleCount;
	}
	void setBottom(int newBottom);
	int getBottom();
	void setTop(int newTop);
	int getTop();
	void setPeopleCount(int newPeopleCount);
	int getPeopleCount();
	int getCurrentFloor();
	void up();
	void down();
};

