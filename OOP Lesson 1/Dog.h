#pragma once
class Dog
{
private:
	int age;
	char sound[21];
public:
	void setAge(int x);
	int getAge();
	void setSound(const char* new_sound);
	const char* getSound();
};

