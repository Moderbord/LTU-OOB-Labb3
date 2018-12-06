#pragma once
#include <string>

namespace {
	using std::string;
}

class Vehicle
{
protected:
	int capacity;
	int pricePerHour;
	int gasPerKilometer;
	int numAvailable;
	string modelName;

public:
	// Constructor
	Vehicle(int cap, int gasPerKM) : capacity(cap), gasPerKilometer(gasPerKM) {} ;

	// Getters and setters
	int getCapacity();
	int getPriceperHour();
	int getGasPerKilometer();
	int getNumAvailable();
	string getModelName();

	// Functionality
	void decuctAvailable();

};

