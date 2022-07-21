#pragma once
#include <iostream>
#include <string>

class Vehicle
{
protected:
	std::string Brand = "N/A";
	int Year = 1900;
	float Miles = 0.0f;

public:
	Vehicle(std::string brand, int year = 1900, float miles = 0.0f);
	~Vehicle();
	
	void Travel(float distance);

	virtual void Display();

	virtual std::string SoundEffect() = 0;
};