#pragma once
#include <iostream>
#include <vector>
#include "Observer.h"

class WeatherStation
{
	float temperature;
	float wind;
	bool rain;
	std::vector< Observer*> observers;

public: 
	WeatherStation() : temperature{ 20 }, wind{ 5 }, rain{ false } {}

	void registerObserver(Observer* observer) {
		observers.push_back(observer);
	}

	void notifyObservers() {
		for (Observer* observer : observers) {
			observer->update(temperature, wind, rain);
		}
	}

	void setTemperature(float temperatureP) {
		temperature = temperatureP;
		notifyObservers();			// уведомление при узменении температуры
		}
	
	void setWind(float windP) {
		wind = windP;
		notifyObservers();
	}

	void setRain(bool rainP) {
		rain = rainP;
		notifyObservers();
	}

};

