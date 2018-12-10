#include "pch.h"
#include "Vehicle.h"
#include <iostream>

string Vehicle::getModelName()
{
	return modelName;
}

int Vehicle::getNumAvailable()
{
	return numAvailable;
}

int Vehicle::getCapacity()
{
	return capacity;
}

int Vehicle::getGasPerKilometer()
{
	return gasPerKilometer;
}

int Vehicle::getPriceperHour()
{
	return pricePerHour;
}

void Vehicle::setNumAvailable(int num)
{
	numAvailable = num;
}

void Vehicle::setPricePerHour(int price)
{
	pricePerHour = price;
}

void Vehicle::decuctAvailable()
{
	numAvailable--;
}

void Vehicle::print()
{
	std::cout << modelName << " (Available: " << numAvailable << ", Capacity: " << capacity;
	std::cout << ", Hourly rate: " << pricePerHour << ", Consumption/km: " << gasPerKilometer << std::endl;
}
