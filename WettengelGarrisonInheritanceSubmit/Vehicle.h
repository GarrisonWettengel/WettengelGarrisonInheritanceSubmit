#pragma once


#include <iostream>

  #include <string>
  using namespace std;

  
  class Vehicle
  {
  private:
	     string manu;      
	     int year;   	 
	 
	
  public:
	  // Default constructor
	  Vehicle()
	  {
		  manu = "";
		  year = 0;
	  }

	
		     // Constructor
	  Vehicle(string autoManu, int autoYear)
	  {
		  manu = autoManu;
		  year = autoYear;
	  }
	      
	
		     // Accessors
		     string getManu() const
		     { return manu; }
	
		     int getModel() const
		     { return year; }
	
			 void storeInfo(string autoManu, int autoYear);
			 void displayInfo();
	  };
 
