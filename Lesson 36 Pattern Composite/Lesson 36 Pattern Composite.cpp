// Lesson 36 Pattern Composite , Decorator, Fasade, Observer.cpp 

#include <iostream>
#include <vector>
#include <algorithm>

#include "Component.h"
#include "Product.h"
#include "Box.h"
#include "Order.h"

#include "IceCream.h"
#include "IceCreamDecorator.h"
#include "VanillaIceCream.h"
#include "ChocolateTopingDecorator.h"
#include "CaramelToppingDecorator.h"

#include "Car.h"
#include "Engine.h"
#include "Lights.h"

#include "Observer.h"
#include "WeatherStation.h"
#include "Radio.h"
#include "SMS.h"

using namespace std;

int main()
{
	Product* product1 = new Product(12.5);
	Product* product2 = new Product(27.5);
	Product* product3 = new Product(42.5);
	Product* product4 = new Product(1.5);

	Box* box1 = new Box();
	box1->add(product1);
	box1->add(product2);

	Box* box2 = new Box();
	box2->add(product3);
	box2->add(box1);

	Order* order = new Order({ box2, product4 });

	float total_price = order->caculateTotalPrice();
	//cout<< "Total order price: " << total_price << endl;

	cout << "__________________________________________________\n\n";

	IceCream* v = new VanillaIceCream();
	IceCream* c = new ChocolateTopingDecorator(new VanillaIceCream());
	IceCream* d = new CaramelToppingDecorator(new VanillaIceCream());
	IceCream* e = new CaramelToppingDecorator(new ChocolateTopingDecorator(new VanillaIceCream()));
	//cout << e->getDescription() << " " << e->cost() << endl;
	//cout << d->getDescription() << " " << d->cost() << endl;
	//cout << c->getDescription() << " " << c->cost() << endl;
	//cout << v->getDescription() << " " << v->cost() << endl;

	vector < IceCream*> orders;
	IceCream* vanilaIceCream = new VanillaIceCream();
	orders.push_back(vanilaIceCream);
	IceCream* chocolateIceCream = new ChocolateTopingDecorator(vanilaIceCream);
	orders.push_back(chocolateIceCream);
	IceCream* caramelIceCream = new CaramelToppingDecorator(chocolateIceCream);
	orders.push_back(caramelIceCream);
	
	//for_each(orders.begin(), orders.end(), [](IceCream* ic) {
	//	cout << "Order: " << ic->getDescription() << endl;
	//cout << "Price: " << ic->cost() << endl;
	//	});
	
	cout << "__________________________________________________\n\n";

	Car* car = new Car();

	/*car->starCar();
	cout << endl;
	car->stopCar();*/

	cout << "__________________________________________________\n\n";


	WeatherStation* weatherStation = new WeatherStation();
	Observer* sms = new SMS();
	Observer* radio = new Radio();

	weatherStation->registerObserver(radio);
	weatherStation->registerObserver(sms);

	weatherStation->setTemperature(31);
	weatherStation->setRain(true);
	weatherStation->setRain(false);
	weatherStation->setWind(7);

	return 0;
}
