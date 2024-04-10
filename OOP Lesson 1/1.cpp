#include <iostream>
#include "Student.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));

	cout << "Student's academic performance." << endl << endl;

	Student student;
	Cat pushestic;
	Dog bobik;

	pushestic.setEnergy(10);
	cout << "PUSHEEESTIC'S ENEGRY: " << pushestic.getEnergy() << "\n\n";

	bobik.setSound("Bark!");
	bobik.setAge(12);

	cout << "bobik's sound: " << bobik.getSound() << "\n";
	cout << "bobik's age: " << bobik.getAge() << "\n\n";

	strcpy_s(student.name, 20, "Petrov A.I.");

	for (int i = 0; i < MARKS_SIZE; i++) {
		student.setMark(i, rand()%4+2);
	}
	for (int i = 0; i < MARKS_SIZE; i++) {
		cout << student.name << " - " << student.getMark(i) << "\n";
	}
	cout << endl;
	cout << "Average grade: " << student.getAverage() << endl;
	cout << "MAX: " << student.getMax() << endl;
	cout << "MIN: " << student.getMin();

	return 0;
}