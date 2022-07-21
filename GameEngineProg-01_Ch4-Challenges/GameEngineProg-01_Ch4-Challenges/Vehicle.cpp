#include "Vehicle.h"

Vehicle::Vehicle(std::string brand, int year, float miles)
	: Brand(brand)
	, Year(year)
	, Miles(miles)
{
}

Vehicle::~Vehicle()
{
}

void Vehicle::Display()
{
	std::cout << "Brand name: " << Brand << std::endl;
	std::cout << "Year: " << Year << std::endl;
	std::cout << "Miles: " << Miles << std::endl;
}

void Vehicle::Travel(float distance)
{
	Miles += distance;
}
