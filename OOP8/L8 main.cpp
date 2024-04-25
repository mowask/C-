#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Point.h"
#include "A.h"
#include "B.h"

Point add(Point &p1, Point &p2) {
	//Point p3(p1.getX() + p2.getX(), p1.getY() + p2.getY());
	Point p3(p1.x + p2.x, p1.y + p2.y);
	return p3;
}

Point sub(Point& p1, Point& p2) {
	//Point p3(p1.getX() + p2.getX(), p1.getY() + p2.getY());
	Point p3(p1.x - p2.x, p1.y - p2.y);
	return p3;
}

Point operator+(Point& p1, Point& p2) {
	//Point p3(p1.getX() + p2.getX(), p1.getY() + p2.getY());
	Point p3(p1.x + p2.x, p1.y + p2.y);
	return p3;
}

Point operator-(Point& p1, Point& p2) {
	//Point p3(p1.getX() + p2.getX(), p1.getY() + p2.getY());
	Point p3(p1.x - p2.x, p1.y - p2.y);
	return p3;
}

Point operator*(Point& p1, int mult) {
	Point p3(p1.getX() * mult, p1.getY() * mult);
	//Point p3(p1.x - p2.x, p1.y - p2.y);
	return p3;
}


using namespace std;

int main() {

	Point p1(4, 4);
	Point p2(2, 2);
	Point p3 = add(p1,p2);
	Point p4 = sub(p1,p2);
	p3.print();
	p4.print();
	cout << "\n";

	Point p5 = operator+(p1, p2);
	p5.print();
	Point p6 = operator-(p1, p2);
	p6.print();
	Point p7 = operator*(p1, 2);
	p7.print();
	Point p8 = p1 * p2;
	p8.print();
	Point p9 = p1/p2;
	p9.print();
	cout << "\n";

	Point p10 = -p1;
	p10.print();
	p1.print();
	cout << "\n";

	const Point p11(9,11);
	Point p12 = -p11;
	p11.print();
	p12.print();
	

	cout << "\n";

	A a;
	B b;
	a.showB(b);



}