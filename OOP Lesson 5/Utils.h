#pragma once
#include <iostream>

class Utils
{
public:
	static int sum(int x, int y) {
		return x + y;
	}

	static void addOne(int& x) {
		std::cout << x + 1;
	}
};

