#include <iostream>
#include <time.h>
#include <limits.h>
#include <string.h>
#include <cstdio>
#include "Student.h"
#include "Point.h"
#include "Elevator.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
//===================================================================
	Student student("John", 5, 4, 3);

	/*student.setName("John");
	student.setMark(0, 5);
	student.setMark(1, 4);
	student.setMark(2, 5);*/

	cout << student.getName() << endl;
	for (int i = 0; i < 3; i++) {
		cout << student.getMark(i) << endl;
	}
//===================================================================

	Point A(5, 4, 10);
	printf("Point A (%i, %i, %i)\n", A.getX(), A.getY(), A.getZ());
	

//===================================================================
	Elevator elevator(0,10,5);
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.up();
	elevator.down();
	elevator.down();
	elevator.down();

	cout << "Current floor: " << elevator.getCurrentFloor() << endl;;

	return 0;
}