#pragma once
#include "Vehicle.h"

enum E_CAR_TYPE { ELECTRIC, DIESEL, GAS, OTHER };

class Car : public Vehicle
{
private:
	bool bIsAllTerrain_ = false;
	E_CAR_TYPE CarType_ = OTHER;

public:
	Car(std::string brand, int year = 1900, float miles = 0.0f, E_CAR_TYPE carType = OTHER, bool isAllTerrain = false);
	~Car();

	void Display() override;
	std::string SoundEffect() override;
};