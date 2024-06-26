#pragma once
#include <iostream>

#include "IceCream.h"

using namespace std;
class VanillaIceCream : public IceCream
{
public:
	string getDescription() {
		return "Vanilla Icecream";
	}
	double cost() {
		return 160.0;
	}
};

