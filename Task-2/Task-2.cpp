#include "pch.h"
#include "Microbus.h"
#include "Sedan.h"
#include "Jeep.h"
#include <iostream>
#include <vector>

namespace {
	using std::cout;
	using std::endl;
	using std::cin;
	using std::getline;
	using std::vector;
}

void registerVehicles(vector<Vehicle> &vector);

int main()
{
	string input;
	vector<Vehicle> vehicleList;
	vector<Vehicle> filteredVehicles;
	vector<Vehicle> rentedVehicles;

	Microbus vMicrobus(10, 100, "Microbus");
	Sedan vSedan(4, 75, "Sedan");
	Jeep vJeep(6, 120, "Jeep");

	vehicleList.push_back(vMicrobus);
	vehicleList.push_back(vSedan);
	vehicleList.push_back(vJeep);

	while (true)
	{
		cout << "Car Rental System Menu" << endl;
		cout << "1: Register Vehicles" << endl;
		cout << "2: Rent Vehicles" << endl;
		cout << "0: Quit" << endl;
		cout << ">>";

		getline(cin, input);
		
		switch (input[0])
		{
		case '1':
			registerVehicles(vehicleList);
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		case '2':
			break;
		case '0':
			cout << "Rented cars:" << endl;
			return false;
		default:
			break;
		}

	}

}

void registerVehicles(vector<Vehicle> &vector)
{
	Vehicle *selectedVehicle = nullptr;				// Nullpointer for initialization
	bool looping = true;
	string input;
	int num;

	while (looping)
	{
		cout << "Select Vehicle" << endl;
		cout << "1: Microbus" << endl;
		cout << "2: Sedan" << endl;
		cout << "3: Jeep" << endl;
		cout << "0: Go back" << endl;
		cout << ">>";

		getline(cin, input);

		switch (input[0])
		{
		case '1':
			selectedVehicle = &vector[0];
			looping = false;
			break;
		case '2':
			selectedVehicle = &vector[1];
			looping = false;
			break;
		case '3':
			selectedVehicle = &vector[2];
			looping = false;
			break;
		case '0':
			return;
		default:
			break;
		}
	}

	cout << "Number of " << selectedVehicle->getModelName() << " available:" << endl;
	cin >> num;
	selectedVehicle->setNumAvailable(num);

	cout << "Hourly price for renting " << selectedVehicle->getModelName() << ":" << endl;
	cin >> num;
	selectedVehicle->setPricePerHour(num);
}
