#pragma once
#include <iostream>
#include "Point.h"
#include "Rectangle.h"

class Person
{
private:
	int nameSize;
	char* name;
	int age;
	int inn;
public:

	Person(const char* newName, int newAge, int newInn) 
		: age{ newAge }, inn{ newInn }, nameSize { newName ? (int)strlen(newName) + 1 : 0 }
		, name{ newName ? new char[nameSize ] : nullptr} {
		if (name) {
			strcpy_s(name, nameSize, newName);
		}
		std::cout << "Constr 3\n";
	}

	Person() : Person(nullptr, 0, 0) {
		std::cout << "Constr 0\n";
	}

	Person(const char* newName) : Person(newName, 0, 0) {
		std::cout << "Constr 1\n";
	}

	Person(const char* newName, int newAge) : Person(newName, newAge, 0) {
		std::cout << "Constr 2\n";
	}

	~Person() {
		if (name) {
			delete[] name;
		}
	}
	


};

