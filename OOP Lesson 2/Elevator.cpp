#include "Elevator.h"
#include <iostream>
using namespace std;

void Elevator::up() {
	if (currentFloor < top) currentFloor++;
}
void Elevator::down() {
	if (currentFloor > bottom) currentFloor--;
}
void Elevator::setBottom(int newBottom) {
	newBottom = bottom;
}
int Elevator::getBottom() {
	return bottom;
}
void Elevator::setTop(int newTop) {
	newTop = top;
}
int Elevator::getTop() {
	return top;
}
void Elevator::setPeopleCount(int newPeopleCount) {
	newPeopleCount = peopleCount;
}
int Elevator::getPeopleCount() {
	return peopleCount;
}
int Elevator::getCurrentFloor() {
	return currentFloor;
}

