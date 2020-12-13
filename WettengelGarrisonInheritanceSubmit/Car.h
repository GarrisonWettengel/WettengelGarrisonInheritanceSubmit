#pragma once
#include <iostream>

#include "Vehicle.h"
  #include <string>
  using namespace std;

  // The Car class represents a car.
  class Car : public Vehicle
 {
  private:
         int doors;
    
  public:
         // Default constructor
             Car() : Vehicle()
             { doors = 0; }
    
             // Constructor #2
             Car(string carManu, int carYear, int carDoors) :
                 Vehicle(carManu, carYear)
             { doors = carDoors; }
    


             // Accessor for doors attribute
             int getDoors()
             {return doors; }

             void storeInfo(string autoManu, int autoYear, int carDoors);
             void displayInfo();

      };



