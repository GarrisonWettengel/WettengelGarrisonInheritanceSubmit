#pragma once
#include "Vehicle.h"
#include <iostream>

 #include <string>
  using namespace std;

  // The Truck class represents a truck.
  class Truck : public Vehicle
  {
  private:
      int tow;
    
  public:
         // Default constructor
             Truck() : Vehicle()
             { tow = 0; }
    
             // Constructor #2
             Truck(string truckManu, int truckYear, int truckTow) :
                Vehicle(truckManu, truckYear)
             { tow = truckTow; }
    
             // Accessor for driveType attribute
             int getTowing()
             { return tow; }

             void storeInfo(string autoManu, int autoYear, int truckTow);
             void displayInfo();
      };
