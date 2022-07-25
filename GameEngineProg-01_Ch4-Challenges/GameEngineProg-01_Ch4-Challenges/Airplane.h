#pragma once
#include "Vehicle.h"

class Airplane : public Vehicle
{
private:
	float Altitude_ = 0.0f;

public:
	Airplane(std::string brand, int year = 1900, float miles = 0.0f, float altitude = 0.0f);
	~Airplane();

	void SetAltitude(float altitude);

	void Display() override;
	std::string SoundEffect() override;
};