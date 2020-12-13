// WettengelGarrisonInheritance
// CIS 1202
// December 11, 2020

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <String>
#include <fstream>

using namespace std;


int main()
{
  
	string autoManu;
	int autoYear;
	int carDoors;
	int truckTow;

	Vehicle vehicle;
	Car car;
	Truck truck;


	cout << "Vehicle:" << endl;

	cout << "Enter the manufacturer: " << endl;

	getline(cin, autoManu);

	cout << "Enter the Model Year: " << endl;

	cin >> autoYear;

	vehicle.storeInfo(autoManu, autoYear);


	cout << endl;

	cout << endl;

	cout << "Vehicle Information:" << endl;

	vehicle.displayInfo();


	cout << endl << endl;


	cin.ignore();

	cout << "Car:" << endl;

	cout << "Enter the manufacturer:" << endl;

	getline(cin, autoManu);

	cout << "Enter the Model Year: " << endl;

	cin >> autoYear;

	cout << "Enter the number of Doors: " << endl;

	cin >> carDoors;

	car.storeInfo(autoManu, autoYear, carDoors);

	cout << endl;
	
	cout << endl;

	cout << "Car Information:" << endl;

	car.displayInfo();



	cout << endl << endl;

	cin.ignore();

	cout << "Truck:" << endl;

	cout << "Enter the manufacturer:" << endl;

	getline(cin, autoManu);

	cout << "Enter the Model Year: " << endl;

	cin >> autoYear;

	cout << "Enter the Towing Capacity: " << endl;

	cin >> truckTow;

	truck.storeInfo(autoManu, autoYear, truckTow);

	cout << endl;

	cout << endl;

	cout << "Truck Information:" << endl;

	truck.displayInfo();




		return 0;

}
