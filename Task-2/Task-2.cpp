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
void filterVehicles(vector<Vehicle> &vehicles, vector<Vehicle*> &filter, vector<Vehicle*> &rented);
void enterVehicles(vector<Vehicle*> &filtered, vector<Vehicle*> &rented);

int main()
{
	vector<Vehicle> vehicleList;
	vector<Vehicle*> filteredVehiclesList;
	vector<Vehicle*> rentedVehicles;

	Microbus vMicrobus(10, 100, "Microbus");
	Sedan vSedan(4, 75, "Sedan");
	Jeep vJeep(6, 120, "Jeep");

	vehicleList.push_back(vMicrobus);
	vehicleList.push_back(vSedan);
	vehicleList.push_back(vJeep);

	while (true)
	{
		string input;

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
			break;
		case '2':
			filterVehicles(vehicleList, filteredVehiclesList, rentedVehicles);
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
	int num;

	while (looping)
	{
		string input;

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

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void filterVehicles(vector<Vehicle> &vehicles, vector<Vehicle*> &filtered, vector<Vehicle*> &rented)
{
	bool looping = true;
	int rentMax, numPeople;

	while (looping)
	{
		string input;

		for (Vehicle v : vehicles)
		{
			v.print();
		}

		cout << "1: Enter renters requirements" << endl;
		cout << "0: Go back" << endl;
		cout << ">>";

		getline(cin, input);

		switch (input[0])
		{
		case '1':
			cout << "Enter a maximun rent per hour\n>>";
			cin >> rentMax;

			cout << "Enter a minimun number of seats\n>>";
			cin >> numPeople;

			for (Vehicle v : vehicles)
			{
				if (v.getPriceperHour() <= rentMax && v.getCapacity() >= numPeople) 
				{
					filtered.push_back(&v);

				}
			}

			enterVehicles(filtered, rented);
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		case '0':
			return;
		default:
			break;
		}
	}

}

void enterVehicles(vector<Vehicle*> &filtered, vector<Vehicle*> &rented)
{
	int i;

	cout << "Available Vehicles based on user requirements" << endl;
	for (Vehicle *v : filtered)
	{
		v->print();
	}

	cout << "Enter Vehicle to be rented or go back (0)" << endl;

	cin >> i;

	try {
		filtered.at(i)->decuctAvailable();

		rented.push_back(filtered.at(i));
	}
	catch (const std::exception &error) {
		std::cerr << error.what();
	}

	filtered.clear();
}