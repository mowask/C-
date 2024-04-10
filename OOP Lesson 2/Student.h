#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
	char name[21];
	int marks[3];
public:
	//конструктор Student()
	Student() {
		cout << "From Constructor 1" << endl;
	}
	Student(const char* newName) {
		cout << "From Constructor 2" << endl;
		strcpy_s(name, 20, newName);
	}
	Student(const char* newName, int mark0, int mark1, int mark2) {
		cout << "From Constructor 3" << endl;
		strcpy_s(name, 20, newName);
		marks[0] = mark0;
		marks[1] = mark1;
		marks[2] = mark2;
	}
	//деструктор - освобождает динамическую память
	~Student() {	
	}

	const char* getName();	
	void setName(const char* newName);
	int getMark(int index); //index - оценка конкретного предмета
	void setMark(int index, int mark);	
};

