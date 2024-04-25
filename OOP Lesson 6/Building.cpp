#include "Building.h"

int Building::getAverageKvInFloor() {
	if (floors <= 0) return 0;
	else  return  kv / floors;
}
int Building::getTotalPeaople() {
	int totalPeople = 0;
	for (int i = 0; i < kv; i++) {
		totalPeople += peopleFlat[i];
		}
	return totalPeople;
}

int Building::getAveragePeopleInKv() {
	return getTotalPeaople() / kv;
}

int Building::getAveragePeopleInFloor() {
	return getTotalPeaople() / floors;
}