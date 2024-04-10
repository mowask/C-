#pragma once
#include <iostream>

using std::cout;
using std::endl;

class NumberStorage
{
private:
	int* storage;
	uint32_t elementsCount;
	static uint32_t usedMemory;
public:
	NumberStorage(uint32_t ElementCountP) : elementsCount{ ElementCountP } {
		if (elementsCount > 0) {
			storage = new int[elementsCount];
			for (int i = 0; i < elementsCount; i++) {
				*(storage + i) = rand() % 100;		//storage[i]
			}
		}
		else {
			storage = nullptr;
		}
		uint32_t memory{ elementsCount * sizeof(int) };
		usedMemory += memory;
		cout << memory << " was added. Totoal : " << usedMemory << endl;
	}

	static uint32_t getUsedMemory() {
		return usedMemory;
	}

	~NumberStorage() {
		delete[] storage;

		uint32_t memory{ elementsCount * sizeof(int) };
		usedMemory -= memory;
		cout << memory << " was added. Totoal : " << usedMemory << endl;
	}

};

