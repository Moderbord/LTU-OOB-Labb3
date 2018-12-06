#pragma once
#include "Vehicle.h"

class Jeep : public Vehicle {

public:
	Jeep(int cap, int gasPerKM, std::string modName) : Vehicle(cap, gasPerKM, modName) {};
};