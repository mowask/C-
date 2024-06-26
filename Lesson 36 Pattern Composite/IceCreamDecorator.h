#pragma once
#include <iostream>
#include "IceCream.h"


class IceCreamDecorator : public IceCream
{
protected:
	IceCream* iceCream;
public:
	IceCreamDecorator(IceCream* iceCreamP) : iceCream{ iceCreamP } {}

	std:: string getDescription() {
		return iceCream->getDescription();
	}

	double cost() {
		return iceCream->cost();
	}

};

