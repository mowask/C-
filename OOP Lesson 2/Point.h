#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point(){		
	}
	Point(int pX, int pY, int pZ) {
		x = pX;
		y = pY;
		z = pZ;
	}
	void setX(int pX);
	int getX();
	void setY(int pY);
	int getY();
	void setZ(int pZ);
	int getZ();
};

