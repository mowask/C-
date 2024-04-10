#pragma once
#include <iostream>
#include "Point.h"

class Rectangle
{
	int w;	// weight
	int h;	// hight
	Point corner;
public:
	Rectangle() {};
	Rectangle(int newW) : w{ newW }, corner{ 5,0 } {};	// calls Point (int newX, int newY)
	Rectangle(int newW, int newH) : w{ newW }, h{ newH } {};
	Rectangle(int newW, int newH, int newX, int newY)
		: w{ newW }, h{ newH }, corner{ newX, newY } {};

};

