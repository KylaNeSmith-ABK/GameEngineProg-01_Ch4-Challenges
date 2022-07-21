#include "Airplane.h"

Airplane::Airplane(std::string brand, int year, float miles, float altitude)
	: Vehicle(brand, year, miles)
	, Altitude(altitude)
{
}

Airplane::~Airplane()
{
}

void Airplane::SetAltitude(float altitude)
{
	Altitude = altitude;
}

void Airplane::Display()
{
	Vehicle::Display();
	std::cout << "Altitude: " << Altitude << std::endl;
}

std::string Airplane::SoundEffect()
{
	return " ------- ";
}

