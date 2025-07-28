// Abigail Reitz
// CIS 1202 803
// July 28, 2025

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int validateNum(string temp) { // validates integer number input 
	int count = 0;
	int tempInt;
	for (int i = 0; i < temp.length(); i++) { // runs until the length of the string input
		if (!isdigit(temp[i])) { // if the character is not a digit:
			count++; // adds to counter
		}
	}
	if (count == 0) { // if the counter is at zero:
		tempInt = stoi(temp); // turn string to integer
		return tempInt; // return integer value
	}
	else { // if counter is not at zero:
		cout << "Invalid value, please try again." << endl; // error message
		return 0; // returns zero 
	}
}

int main() {
	Vehicle vehicleInput;
	cout << "Vehicle Program\n" << endl;
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	string manufacturerTemp;
	getline(cin, manufacturerTemp); // allows user to input manufacturer name
	vehicleInput.setManufacturer(manufacturerTemp); // inputs manufacturer user input
	string yearTemp;
	int year = 0;
	while (year == 0) { // while the year built is 0
		cout << "Enter the year built: "; 
		getline(cin, yearTemp); // allows user to input year value
		year = validateNum(yearTemp); // validates user input and returns value
	}
	vehicleInput.setYear(year); // sets year user input
	vehicleInput.displayInfo(); // displays information inputted
	cout << endl;
	Car carInput;
	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	string manufacturerTempCar;
	getline(cin, manufacturerTempCar);
	carInput.setManufacturer(manufacturerTempCar);
	string yearTempCar;
	int yearCar = 0;
	while (yearCar == 0) {
		cout << "Enter the year built: ";
		getline(cin, yearTempCar);
		yearCar = validateNum(yearTempCar);
	}
	carInput.setYear(yearCar);
	string doorTemp;
	int doorsInput = 0;
	while (doorsInput == 0) { // while the amount of doors is zero:
		cout << "Enter the number of doors: "; 
		getline(cin, doorTemp); // allows user to input value
		doorsInput = validateNum(doorTemp); // validates doors amount and returns user input if valid
	}
	carInput.setDoors(doorsInput); // sets user input into doors 
	carInput.displayInfo(); // displays all car information inputted by user
	cout << endl;
	Truck truckInput;
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	string manufacturerTempTruck;
	getline(cin, manufacturerTempTruck);
	truckInput.setManufacturer(manufacturerTempTruck);
	string yearTempTruck;
	int yearTruck = 0;
	while (yearTruck == 0) {
		cout << "Enter the year built: ";
		getline(cin, yearTempTruck);
		yearTruck = validateNum(yearTempTruck);
	}
	truckInput.setYear(yearTruck);
	string towingCapacityTemp;
	int towingInput = 0;
	while (towingInput == 0) { // while the towing capacity is zero:
		cout << "Enter the towing capacity: ";
		getline(cin, towingCapacityTemp); // allows user to input a towing capacity
		towingInput = validateNum(towingCapacityTemp); // validates user input and returns value if valid
	}
	truckInput.setTowingCapacity(towingInput); // sets user input for towing capactity to the variable
	truckInput.displayInfo(); // displays all truck information inputted by user
	cout << endl;
}