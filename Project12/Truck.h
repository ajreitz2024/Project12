#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	int towingCapacity;
public:
	Truck() : Vehicle() { // default constructor
		manufacturer = "";
		yearBuilt = 0;
		towingCapacity = 0;
	}
	Truck(int towingCapacityInfo, string manufacturerInfo, int yearInfo) { // constructor for truck
		towingCapacity = towingCapacityInfo;
		manufacturer = manufacturerInfo;
		yearBuilt = yearInfo;
	}
	void setTowingCapacity(int towingCapacityInfo) { // setter for towing capacity
		towingCapacity = towingCapacityInfo;
	}
	int getTowingCapacity() { // getter for towing capacity
		return towingCapacity;
	}
	void displayInfo(int towingCapacity, int yearBuilt, string manufacturer) { // displays all information on truck
		Vehicle::displayInfo();
		cout << "Towing capacity: " << towingCapacity << endl;
	}
};

#endif