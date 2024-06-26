#pragma once
#include <iostream>		
#include "Engine.h"
#include "Lights.h"

										//	 Fasade

class Car
{
	Engine* engine;
	Lights* lights;
public:
	Car() {
		engine = new Engine();
		lights = new Lights();
	}

	void starCar() {
		engine->start();
		lights->turnOn();
		std::cout << " - Car is ready to drive \n";
	}

	void stopCar() {
		engine->stop();
		lights->turnOff();		
		std::cout << " - Car stopped \n";
	}
};

