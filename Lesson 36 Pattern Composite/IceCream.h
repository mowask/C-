#pragma once
#include <iostream>

using namespace std;
class IceCream
{
public: 
	virtual string getDescription() = 0;
	virtual double cost() = 0;
};

