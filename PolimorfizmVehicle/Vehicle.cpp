#include "Vehicle.hpp"
#include <iostream>


Vehicle::~Vehicle()
{
}

void Car::drive() const
{
	std::cout << "Car drives" << std::endl;
}

void Truck::drive() const
{
	std::cout << "Truck drives" << std::endl;
}
