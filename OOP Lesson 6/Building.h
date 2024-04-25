#pragma once
#include <iostream>

class Building
{
	int kv;
	int* peopleFlat; // = { 5,4,3,0 };
	char* street;
	char* dom;
	int floors;					//2
	int kvOnFloors;
public:
	
		// getAverageKvInfloat();
		//getAveragePeopleInKv();		//4
		//getAveragePeopleInFloor();	//6

	Building(int kvP,	int floorsP,	const char* newStreet,	const char* newDom,		int * peopleFlatP) : 
		kv{ kvP }, floors{ floorsP },
		street{ newStreet ? new char[(int)strlen(newStreet) + 1] : nullptr },
		peopleFlat{ peopleFlatP ? new int[kvP] : nullptr }
	{	
		if (!newDom) dom = nullptr;
		else {
			int size = strlen(newDom) + 1;
			dom = new char[size];
			for (int i = 0; i < size; i++) {
				dom[i] = newDom[i];
			}
		}
		
		if(newStreet)
			strcpy_s(street, strlen(newStreet) + 1, newStreet);

		if(peopleFlat)
			for (int i = 0; i < kvP; i++) {
				peopleFlat[i] = peopleFlatP[i];
			}

	}

	Building() {
	}

	Building(int kvP, int floorsP) :  Building( kvP, floorsP, 0,0,0)
	{
	}

	

	Building(int kvP, int floorsP, const char* newStreet)  : Building(kvP, floorsP, newStreet, 0, 0) {
	}

	Building(int kvP, int floorsP, const char* newStreet, const char* newDom) : Building(kvP, floorsP, newStreet, newDom, 0 ) {
	}

	~Building() {}

	int getAverageKvInFloor();
	int getTotalPeaople();
	int getAveragePeopleInKv();
	int getAveragePeopleInFloor();



};

