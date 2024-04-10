#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Person.h"
#include "A.h"

using namespace std;

int A::x{ 0 };

int main() {

	//Point a;
	//Point b (5,4);

	//Point* c = new Point;
	//Point* d = new Point(6, 7);

	//c->setX(10);
	//cout << c->getX() << endl;

	//Point* arr1 = new Point[5];			// default constructor
	//Point* arr2 = new Point[5]{			// parametr constructor
	//	{5,10},
	//	{6,10},
	//	{7,10},
	//	{8,10},
	//	{9,10},
	//};

	//delete c;
	//delete d;
	//delete[] arr1;
	//delete[] arr2;

	cout << "____________________________________________\n\n";
		Rectangle abcd;		//// default constructor Point 
		Rectangle pxyz(5);		//// parametr constructor Point 
	cout << "____________________________________________\n\n";

	Person unknow;
	cout << endl;
	Person john("John");
	cout << endl;
	Person jake ("Jake", 29);
	cout << endl;
	Person jane("Jane", 25, 123456);
	cout << endl;
	cout << "____________________________________________\n\n";

	A test1;
	cout << test1.x << endl;
	A test2;	
	cout << test2.x << endl;

	A* arr3 = new A[20];
	cout << test1.x << endl; 
	cout << test2.x << endl;
	cout << arr3 [6].x << endl;
	cout << A::x << endl;

	test1.print();
	A::print();
	A test3;
	A::print();

	cout << "____________________________________________\n\n";



	return 0;	
}
