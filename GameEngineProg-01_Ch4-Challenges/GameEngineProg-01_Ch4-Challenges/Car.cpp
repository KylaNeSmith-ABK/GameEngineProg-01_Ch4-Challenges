#include "Car.h"

Car::Car(std::string brand, int year, float miles, E_CAR_TYPE carType, bool isAllTerrain)
	: Vehicle(brand, year, miles)
	, bIsAllTerrain_(isAllTerrain)
	, CarType_(carType)
{
}

Car::~Car()
{
}

void Car::Display()
{
	Vehicle::Display();
	std::cout << "Is all-terrain: " << std::boolalpha << bIsAllTerrain_ << std::boolalpha << std::endl;
	std::cout << "Car type: ";
	switch (CarType_)
	{
		case ELECTRIC:
			std::cout << "Electric" << std::endl;;
			break;
		case DIESEL:
			std::cout << "Diesel" << std::endl;;;
			break;
		case GAS:
			std::cout << "Gas" << std::endl;;;
			break;
		case OTHER:
			std::cout << "Other" << std::endl;;;
			break;
	}
}

std::string Car::SoundEffect()
{
	if (Brand_.compare("Mazda") == 0)
	{
		return "zoom zoom";
	}

	switch (CarType_)
	{
		case ELECTRIC:
			return "voom voom";
			break;
		case DIESEL:
			return "VROOM VROOM";
			break;
		case GAS:
			return "Vroom Vroom";
			break;
		case OTHER:
			return "Voom Voom";
			break;
	}
}
