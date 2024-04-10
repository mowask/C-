#include <iostream>
#include "Student.h"

using namespace std;


void Student::greatName(const char* newName) {
	int nameLenght = strlen(newName) + 1;  //+1 = "\0"
	name = new char[nameLenght + 1];
	for (int i = 0; i < nameLenght; i++) {
		name[i] = newName[i];
	}
}

Student::Student(const char* newName, int newMarksCount, int* newMarks) {
	greatName(newName);

	marksCount = newMarksCount;
	marks = new int[marksCount];
	for (int i = 0; i < marksCount; i++) {
		marks[i] = newMarks[i];
	}
}

const char* Student::getName() {
	return name;
}

void Student::setName(const char* newName) {
	delete[] name;
	greatName(newName);
};

int Student::getMark(int index) {
	if (index >= 0 && index < marksCount)
		return marks[index];
	else
		return -1;
};

void Student::setMark(int index, int newMark) {
	if (index >= 0 && index < marksCount)
		marks[index] = newMark;
};

int Student::getMarksCount() {
	return marksCount;
};

double Student::getAverage() {
	double sum = 0;
	for (int i = 0; i < marksCount; i++) {
		sum += marks[i];
	}
	return sum/ marksCount;
};

void Student::writeToFileCSV(FILE* file) {
	if (file == NULL) {
		return;
	}
		fseek(file, 0, SEEK_END);  // to end of file
		int count = marksCount;
		fprintf(file, "%s;%i;", name, count);
		for (int i = 0; i < count; i++) {
			if (i == count - 1)
				fprintf(file, "%i\n", marks[i]);
			else
				fprintf(file, "%i; ", marks[i]);
		}
};

void Student::showStudent() {
	cout << name << " ";
	//cout << "Avg: " << getAverage() << " ";
	printf("Avg: %.02f ", getAverage());
	for (int i = 0; i < marksCount; i++) {
		cout << marks[i] << ' ';
	}
	cout << "\n";
};
