#pragma once
#include <iostream>

class Observer
{
protected:
	float oldTemperature = 0;
	float oldWind = 0;
	bool oldRain = false;
public:
	virtual void update(float temperature, float wind, bool rain) = 0;
};

