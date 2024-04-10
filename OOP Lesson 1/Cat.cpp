#include "Cat.h"

void Cat::setMood(int x) {
	if (x > 0 && x <= 10) {
		mood = x;
	}
}
int Cat::getMood() {
	return mood;
}
void Cat::setHungry(int x) {
	if (x > 0 && x <= 10) {
		hungry = x;
	}
}
int Cat::getHungry() {
	return hungry;
}
void Cat::setEnergy(int x) {
	if (x > 0 && x <= 10) {
		hungry = x;
	}
}
int Cat::getEnergy() {
	return hungry;
}
