#pragma once
#include <iostream>

class Student
{
private:
	char* name;

	int marksCount;
	int* marks;

	void greatName(const char* newName); // Internial function (hidden)

public:
	Student() {
		name = nullptr;
		marksCount = 0;
		marks = nullptr;
	}
	Student(const char* newName, int newMarksCount, int* marks);

	void setName(const char* newName);
	const char* getName();
	void setMark(int newMark, int index);
	int getMark(int index);
	int getMarksCount();
	double getAverage();

	void showStudent();
	void writeToFileCSV(FILE* file);
	

	~Student() {
		delete[] name;
		delete[] marks;
	}

};

