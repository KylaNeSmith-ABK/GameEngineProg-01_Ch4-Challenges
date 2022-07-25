#include "Vehicle.h"

Vehicle::Vehicle(std::string brand, int year, float miles)
	: Brand_(brand)
	, Year_(year)
	, Miles_(miles)
{
}

Vehicle::~Vehicle()
{
}

void Vehicle::Display()
{
	std::cout << "Brand name: " << Brand_ << std::endl;
	std::cout << "Year: " << Year_ << std::endl;
	std::cout << "Miles: " << Miles_ << std::endl;
}

void Vehicle::Travel(float distance)
{
	Miles_ += distance;
}
