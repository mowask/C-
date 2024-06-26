#pragma once
#include <iostream>
#include <vector>
#include "Observer.h"

using namespace std;

class Radio : public Observer
{
public:
	void update(float temperature, float wind, bool rain) {
		if ( oldTemperature!= temperature|| oldWind!= wind || oldRain!=rain) {
			cout << " Radio: \n";
			cout << " temperature: " << temperature << " C" << endl;
			cout << " wind: " << wind << "Km/h" << endl;
			cout << " rain: " << rain << endl;		}

		oldTemperature = temperature;
		oldWind = wind;
		oldRain = rain;

	}
};

