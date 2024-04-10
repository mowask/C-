#include "Student.h"
#include <iostream>

void Student::setMark(int index, int x) {
	if (index < 0 || index >= MARKS_SIZE) return;
	marks[index] = x;
}
int Student::getMark(int index) {
	if (index < 0 || index >= MARKS_SIZE) return -1;
	return marks[index];
}
double Student::getAverage() {
	double sum = 0;
	for (int j = 0; j < MARKS_SIZE; j++)
		sum += marks[j];
	return sum / MARKS_SIZE;
}
int Student::getMax() {
	int max = INT_MIN;
	for (int i = 0; i < MARKS_SIZE; i++)
		if (marks[i] > max)
			max = marks[i];
	return max;
}
int Student::getMin() {
	int min = INT_MAX;
	for (int i = 0; i < MARKS_SIZE; i++)
		if (marks[i] < min)
			min = marks[i];
	return min;
}