#pragma once
#include <iostream>
#include "IceCream.h"
#include "IceCreamDecorator.h"


class ChocolateTopingDecorator : public IceCreamDecorator
{
public:
	ChocolateTopingDecorator(IceCream* iceCreamP) : IceCreamDecorator(iceCreamP) {}

	std:: string getDescription() {
		return iceCream->getDescription() + " with chocolate";
	}

	double cost() {
		return iceCream->cost() + 100.0;
	}

};

