#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle() { // default constructor
		manufacturer = "";
		yearBuilt = 0;
	}
	Vehicle(string manufacturerInfo, int yearInfo) { // constructor
		manufacturer = manufacturerInfo;
		yearBuilt = yearInfo;
	}
	void setManufacturer(string manufacturerInfo) { // setter for manufacturer
		manufacturer = manufacturerInfo;
	}
	void setYear(int yearInfo) { // setter for year built
		yearBuilt = yearInfo;
	}
	string getManufacturer() { // getter for manufacturer
		return manufacturer;
	}
	int getYear() { // getter for year built
		return yearBuilt;
	}
	void displayInfo() { // displays all info from class
		cout << "Vehicle Information:" << endl;
		cout << "Manufacturer: " << getManufacturer() << endl;
		cout << "Year Built: " << getYear() << endl;
	}
};

#endif