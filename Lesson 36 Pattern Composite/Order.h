#pragma once
#include <iostream>
#include <vector>
#include <Algorithm>

#include "Component.h"

using namespace std;

class Order
{
	vector< Component*> items;
public:
	Order(vector< Component*> items) : items{ items } {}

	float caculateTotalPrice() const {
		float total = 0;
		for (Component* item : items)
			total += item->getPrice();
		//for_each (items.begin(), item.end(), [&total]Component)
			return total;
	}
};

