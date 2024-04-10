#pragma once
#include <iostream>

class A
{
public:
	static int x;

	A() {
		x++;
	}
	static void print() {
		std::cout << "From A, x = " << x << std::endl;
	}

};

