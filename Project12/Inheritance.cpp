#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
	Vehicle vehicleInput;
	cout << "Vehicle Program\n" << endl;
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	string manufacturerTemp;
	getline(cin, manufacturerTemp);
	vehicleInput.setManufacturer(manufacturerTemp);
	string yearTemp;
	bool done = false;
	int count = 0;
	int year;
	while (!done) {
		cout << "Enter the year built: ";
		getline(cin, yearTemp);
		for (int i = 0; i < yearTemp.length(); i++) {
			if (!isdigit(yearTemp[i])) {
				count++;
			}
		}
		if (count == 0) {
			year = stoi(yearTemp);
			done = true;
		}
		else if (count != 0) {
			cout << "Invalid value, please try again." << endl;
		}
	}
	vehicleInput.setYear(year);
	vehicleInput.displayInfo();
}