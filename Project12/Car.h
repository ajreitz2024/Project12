#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	int doors;
public:
	Car() : Vehicle() { // default constructor
		manufacturer = "";
		yearBuilt = 0;
		doors = 0;
	}
	Car(int doorsInfo, string manufacturerInfo, int yearInfo) { // constructor for car
		doors = doorsInfo;
		manufacturer = manufacturerInfo;
		yearBuilt = yearInfo;
	}
	void setDoors(int doorsInfo) { // setter for doors
		doors = doorsInfo;
	}
	int getDoors() { // getter for doors
		return doors;
	}
	void displayInfo() { // displays all information on car
		Vehicle::displayInfo();
		cout << "Doors: " << getDoors() << endl;
	}
};

#endif