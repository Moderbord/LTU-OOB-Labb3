#pragma once
#include "Vehicle.h"

class Sedan : public Vehicle {

public:
	Sedan(int cap, int gasPerKM, std::string modName) : Vehicle(cap, gasPerKM, modName) {};
};