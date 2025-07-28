#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int validateNum(string temp) {
	int count = 0;
	int tempInt;
	for (int i = 0; i < temp.length(); i++) {
		if (!isdigit(temp[i])) {
			count++;
		}
	}
	if (count == 0) {
		tempInt = stoi(temp);
		return tempInt;
	}
	else {
		cout << "Invalid value, please try again." << endl;
		return 0;
	}
}

int main() {
	Vehicle vehicleInput;
	cout << "Vehicle Program\n" << endl;
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	string manufacturerTemp;
	getline(cin, manufacturerTemp);
	vehicleInput.setManufacturer(manufacturerTemp);
	string yearTemp;
	int year = 0;
	while (year == 0) {
		cout << "Enter the year built: ";
		getline(cin, yearTemp);
		year = validateNum(yearTemp);
	}
	vehicleInput.setYear(year);
	vehicleInput.displayInfo();
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
	while (doorsInput == 0) {
		cout << "Enter the number of doors: ";
		getline(cin, doorTemp);
		doorsInput = validateNum(doorTemp);
	}
	carInput.setDoors(doorsInput);
	carInput.displayInfo();
}