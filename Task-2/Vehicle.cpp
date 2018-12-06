#include "pch.h"
#include "Vehicle.h"

string Vehicle::getModelName()
{
	return modelName;
}

void Vehicle::setNumAvailable(int num)
{
	numAvailable = num;
}

void Vehicle::setPricePerHour(int price)
{
	pricePerHour = price;
}
