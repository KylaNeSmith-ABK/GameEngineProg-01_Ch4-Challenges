#pragma once
#include <iostream>
#include <string>

class Vehicle
{
protected:
	std::string Brand_ = "N/A";
	int Year_ = 1900;
	float Miles_ = 0.0f;

public:
	Vehicle(std::string brand, int year = 1900, float miles = 0.0f);
	virtual ~Vehicle();
	
	void Travel(float distance);

	virtual void Display();

	virtual std::string SoundEffect() = 0;
};