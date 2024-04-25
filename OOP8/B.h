#pragma once
#include <iostream>
#include "A.h"


class A;
class B
{
private:
	int number = 5;
public:
	friend void A::showB(B& b);
	
};

