#pragma once
#include "Vehicle.h"

class Boat : public Vehicle
{
private:
	bool bIsAfloat_ = true;

public:
	Boat(std::string brand, int year = 1900, float miles = 0.0f, bool isAfloat = true);
	~Boat();

	void Sink();

	void Display() override;
	std::string SoundEffect() override;
};