#include "Car.h"

void Car::storeInfo(string autoManu, int autoYear, int carDoors)
{
	Vehicle::storeInfo(autoManu, autoYear);

	doors = carDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors on the Car: " << doors << endl;
}