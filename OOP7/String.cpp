#include <iostream>
#include "String.h"


void String::show() {
	cout << text << endl;
}

void String::input() {
	char* temp = new char[1000];
	std::cin >> temp;

	int size = strlen(temp) + 1;

	delete[] text;
	text = new char[size];

	strcpy_s(text, size, temp);
	delete[] temp;
}

void String::setText(const char* newText) {
	int size = strlen(newText) + 1;
	delete[] text;
	text = new char[size];
	strcpy_s(text, size, newText);
}
const char* String::getText() {
	return text;
}

int String::getCount() {
	return count;
}