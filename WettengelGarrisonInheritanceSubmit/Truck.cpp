#include "Truck.h"

void Truck::storeInfo(string autoManu, int autoYear, int truckTow)
{
	Vehicle::storeInfo(autoManu, autoYear);

	tow = truckTow;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Truck Towing Capacity: " << tow << endl;
}