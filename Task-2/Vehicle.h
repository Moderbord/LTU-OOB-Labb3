#pragma once
#include <string>

namespace {
	using std::string;
}

class Vehicle
{
protected:
	string modelName;
	int numAvailable;
	int capacity;
	int gasPerKilometer;
	int pricePerHour;

public:
	// Constructor
	Vehicle(int cap, int gasPerKM, string modName) : capacity(cap), gasPerKilometer(gasPerKM), modelName(modName) {} ;

	// Getters and setters
	string getModelName();
	int getNumAvailable();
	int getCapacity();
	int getGasPerKilometer();
	int getPriceperHour();
	void setNumAvailable(int num);
	void setPricePerHour(int price);

	// Functionality
	void decuctAvailable();

};

