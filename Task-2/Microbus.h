#pragma once
#include "Vehicle.h"

class Microbus : public Vehicle {

public:
	Microbus(int cap, int gasPerKM, std::string modName) : Vehicle(cap, gasPerKM, modName) {};
};