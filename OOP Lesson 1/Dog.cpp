#include "Dog.h"
#include <iostream>

void Dog::setAge(int index) {
	if (index > 0 && index <= 100) {
		age = index;
	}
};

int  Dog::getAge() {
	return age;
};

void Dog::setSound(const char* new_sound) {
	strcpy_s(sound, 20, new_sound);
};

const char* Dog::getSound() {
	return sound;
};