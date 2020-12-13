#include "Vehicle.h"


void Vehicle::storeInfo(string autoManu, int autoYear)
{
	manu = autoManu;

	year = autoYear;
}
void Vehicle::displayInfo()
{
	cout << "Manufacturer- " << manu << endl;
	cout << "Make Year- " << year << endl;

}