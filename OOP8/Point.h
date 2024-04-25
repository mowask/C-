#pragma once
#include <iostream>

using std::cout;

class Point
{
private:

	int x;
	int y;

public:

	Point() : x{ 0 }, y{ 0 } {
		//	x = 1;
		//	y = 1;		
		//std::cout << "default Cnstr\n";
	};
	Point(int newX, int newY) : x{ newX }, y{ newY } {
		//	x = newX;
		//	y = newY;
		//std::cout << "Parameter Cnstr\n";
	};

	int getX();
	int getY();
	void setX(int newX);
	void setY(int newY);
	void print() const;
	
	friend Point add(Point& p1, Point& p2);
	friend Point sub(Point& p1, Point& p2);

	friend Point operator+(Point& p1, Point& p2);
	friend Point operator-(Point& p1, Point& p2);

	Point operator* (/*Point this , */ const Point& p2) const {					  
		Point p3(x * p2.x,  y * p2.y) ;		
		return p3;
	}

	Point operator/ (/* Point this , */ const  Point& p2) const {					 
		int xP = p2.x == 0 ? 1 : p2.x;
		int yP = p2.y == 0 ? 1 : p2.y;
			Point p3(x / xP, y / yP);
		return p3;
	}

	Point operator- () const {
		Point p3(-x, -y);
		return p3;
	}

	~Point() {

		//std::cout << "Destructor\n";
	};
};

