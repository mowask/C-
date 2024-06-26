#pragma once
#include <iostream>
#include <vector>

#include "Component.h"

using namespace std;

class Box : public Component
{
	std::vector< Component* > children;
public:
	void add(Component* child) {
		children.push_back(child);
	}

	vector<Component*>& getChildren() {
		return children;
	}

	float getPrice() const {
		float total = 0;
		for (Component* child : children) {
			total += child->getPrice();
		}
		return total;
	}

};

