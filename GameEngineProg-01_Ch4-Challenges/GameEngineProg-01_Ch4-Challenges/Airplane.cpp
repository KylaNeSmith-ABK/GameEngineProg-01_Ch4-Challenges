#include "Airplane.h"

Airplane::Airplane(std::string brand, int year, float miles, float altitude)
	: Vehicle(brand, year, miles)
	, Altitude_(altitude)
{
}

Airplane::~Airplane()
{
}

void Airplane::SetAltitude(float altitude)
{
	Altitude_ = altitude;
}

void Airplane::Display()
{
	Vehicle::Display();
	std::cout << "Altitude: " << Altitude_ << std::endl;
}

std::string Airplane::SoundEffect()
{
	return " ------- ";
}

