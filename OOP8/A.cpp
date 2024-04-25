#include "A.h"
#include "B.h"
#include <iostream>


void A::showB(B& b) {
	std::cout << b.number << std::endl;
}