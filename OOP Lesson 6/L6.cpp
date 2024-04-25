#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Building.h"


using namespace std;


int main() {

	Building house1(24, 4);
	Building house2(24, 4, "lenina", "13A");
	Building house3(5, 3, "lenina", "13A", new int[5] {1,2,3,4,5});
	cout << house1.getAverageKvInFloor() << endl;
	cout << house3.getAveragePeopleInKv() << endl;

}