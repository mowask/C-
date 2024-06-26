#pragma once
#include <iostream>
#include "IceCream.h"
#include "IceCreamDecorator.h"


class CaramelToppingDecorator : public IceCreamDecorator
{
public:
	CaramelToppingDecorator(IceCream* iceCreamP) : IceCreamDecorator(iceCreamP) {}

	std:: string getDescription() {
		return iceCream->getDescription() + " with Caramel";
	}

	double cost() {
		return iceCream->cost() + 80.0;
	}

};


