#include "DynArr.h"



int DynArr:: getElement(int index) const {
	return arr[index];
}
void DynArr::setElement(int index, int value) {
	arr[index] = value;
}

void DynArr::print() const {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}
void DynArr::fillRand() {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
}
