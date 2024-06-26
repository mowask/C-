#pragma once
#include <iostream>
#include <vector>
#include "Observer.h"

using namespace std;

class SMS : public Observer
{
	void notifyRain(bool rain) {
		if (rain == oldRain)return;
			if (rain)		cout << " sms: It's rainy today \n";
			else			cout << " sms: It's sunnyy today \n";
		}
	
	void notifytemperature(float temperature) {
		if (temperature == oldTemperature) return;
			if (temperature > 30)		cout << " sms: Be careful, temperature is above 30 \n";			
		}

public:

	void update(float temperature, float wind, bool rain) {
		
		notifyRain(rain);
		notifytemperature(temperature);
		
		oldTemperature = temperature;
		oldWind = wind;
		oldRain = rain;

		cout << endl;
	}
};

