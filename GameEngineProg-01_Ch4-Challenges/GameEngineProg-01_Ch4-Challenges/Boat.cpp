#include "Boat.h"

Boat::Boat(std::string brand, int year, float miles, bool isAfloat)
	: Vehicle(brand, year, miles)
	, bIsAfloat(isAfloat)
{
}

Boat::~Boat()
{
}

void Boat::Sink()
{
	std::cout << "Oh no!! Bloop..." << std::endl;
	bIsAfloat = false;
}

void Boat::Display()
{
	Vehicle::Display();
	std::cout << "Is afloat: " << std::boolalpha << bIsAfloat << std::boolalpha << std::endl;
}

std::string Boat::SoundEffect()
{
	return "splish splash";
}

