#pragma once
#include <iostream>

//using std::cout;

class Point
{
private:

	int x{0};
	int y{0};

public:

	Point() : x{ 0 }, y{0} {
	//	x = 1;
	//	y = 1;		
	std::cout << "default Cnstr\n";
	};
	Point(int newX, int newY) : x{ newX }, y{ newY } {
	//	x = newX;
	//	y = newY;
		std::cout << "Parameter Cnstr\n";
	};

	int getX();
	int getY();
	void setX(int newX);
	void setY(int newY);

	~Point() {
		std::cout << "Destructor\n";
	};


};

