#pragma once
#include<iostream>

class Account
{
	int rub;
	int kop;
public:
	Account(int rubP, int kopP) : rub{ rubP }, kop{ kopP } {}
	Account() : Account(0, 0) {}

	Account operator+ (/*this, */ const Account& b) const {				// Account a + Account b
		Account c;
		c.kop = (kop + b.kop) % 100;
		c.rub = rub + b.rub + (kop + b.kop) / 100;
		
		return c;
	}

	friend Account operator- (Account a, Account b);

	void print() {
		printf("%d,%02d\n", rub, kop);
	}


	/*
	member function (inside class)
	Account a;
	Account c= -a;	
	*/

	Account& operator- (/*this, */) const {
		Account c;
		c.kop = -kop;
		c.rub = -rub;
		return c;
	}

	friend Account& operator+ (const Account& a);


	Account operator-- (/*const this (a) */) {
		Account c;
		--kop;
		--rub;
		return *this;
	}

	friend Account& operator++ (Account& a);

	Account& operator-- (/*this (a), */ int) {
		Account temp = *this;
		kop--;
		rub--;
		return temp;
	}

	friend Account operator++ (Account& a,int );

	//Output
	friend std::ostream& operator << (std::ostream& cout, Account a);



};

