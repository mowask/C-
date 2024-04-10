#pragma once
#include <iostream>


class Fraction
{
	int num;	//числитель
	int den;	//знаменатель
public:
	Fraction(int numP, int denP) : num{ numP }, den{ denP } {
		std::cout << "New Fraction: " << this << "\n\n";
	}

	Fraction() : Fraction(1, 1) {
		std::cout << "New Fraction: " << this << "\n\n";
	}

	Fraction(const Fraction& f) : num{ f.num }, den{ f.den } {
		std::cout << "Copy Fraction: " << this << "\n\n";
	}

	~Fraction() {
		std::cout << "Destroyed Fraction: " << this << "\n\n";
	}

	void print() {
		std::cout << "this: " << this << std::endl;
		std::cout << num << "/" << den  << "\n\n";
	}

};

