#pragma once
#include <iostream>

using std::cout;
using std::endl;

class String
{

	char* text;
	static int count;
public:

	String(int size) {
		text = new char[size];

		count++;
	}

	String() : String (80) {}

	String(const char* newText) {				// :String(strlen+1) 
		int size = strlen(newText) + 1;
		text = new char[size];
		strcpy_s(text, size, newText);			//size = strlen+1

		count++;
	}

	~String() {
		delete[] text;
	}

	void show();
	void input();
	void setText(const char* newText);
	const char* getText();
	static int getCount();
};

