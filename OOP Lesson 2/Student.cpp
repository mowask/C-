#include "Student.h"
#include <iostream>

const char* Student::getName() {
	return name;
}
void Student::setName(const char* newName) {
	strcpy_s(name, 20, newName);
}
int Student::getMark(int index) {
	return marks[index];
}
void Student::setMark(int index, int mark) {
	marks[index] = mark;
}
