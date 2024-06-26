#pragma once

#include "Component.h"

class Product : public Component
{
protected:
	float price;
public:
	Product(float priceP) : price{ priceP } {}
	float getPrice() const {
		return price;
	}
};

