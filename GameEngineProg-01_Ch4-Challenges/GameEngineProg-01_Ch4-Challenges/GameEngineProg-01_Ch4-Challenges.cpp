#include <iostream>
#include <stdlib.h>

#include "Car.h"
#include "Boat.h"
#include "Airplane.h"

int LargestValue(int intArr[], int arrSize);

int main()
{
    std::cout << "-- LARGEST VALUE OF AN ARRAY --" << std::endl;

    constexpr int ArrSize = 12;
    int IntArr[ArrSize] { 0 };

    std::cout << "Array is ";
    for (int i = 0; i < ArrSize; i++)
    {
        IntArr[i] = rand() % 100;
        std::cout << IntArr[i];
        if (i < ArrSize - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;

    std::cout << "Largest value is " << LargestValue(IntArr, ArrSize);

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "-- POLYMORPHISM --" << std::endl;

    std::cout << "CAR" << std::endl;
    Car* carTest = new Car("Renault", 2021, 10, E_CAR_TYPE::ELECTRIC);
    carTest->Display();
    std::cout << "The car goes " << carTest->SoundEffect() << std::endl;
    carTest->Travel(100.0f);
    carTest->Display();
    delete carTest;

    std::cout << std::endl;
    carTest = new Car("Mazda", 2017, 500, E_CAR_TYPE::GAS);
    carTest->Display();
    std::cout << "The car goes " << carTest->SoundEffect() << std::endl;
    carTest->Travel(20.0f);
    carTest->Display();
    delete carTest;
    carTest = nullptr;

    std::cout << std::endl;

    std::cout << "BOAT" << std::endl;
    Boat* boatTest = new Boat("Yamaha", 2018, 20);
    boatTest->Display();
    std::cout << "The boat goes " << boatTest->SoundEffect() << std::endl;
    boatTest->Travel(150.0f);
    boatTest->Sink();
    boatTest->Display();
    delete boatTest;
    boatTest = nullptr;

    std::cout << std::endl;

    std::cout << "AIRPLANE" << std::endl;
    Airplane* airplaneTest = new Airplane("Airbus", 2020, 400000);
    airplaneTest->Display();
    std::cout << "The airplane goes " << airplaneTest->SoundEffect() << std::endl;
    airplaneTest->Travel(100000.0f);
    airplaneTest->SetAltitude(30000.0f);
    airplaneTest->Display();
    delete airplaneTest;
    airplaneTest = nullptr;

    std::cout << std::endl;
}

int LargestValue(int intArr[], int arrSize)
{
    int largestValue = intArr[0];

    for (int i = 1; i < arrSize; i++)
    {
        if (intArr[i] > largestValue)
        {
            largestValue = intArr[i];
        }
    }

    return largestValue;
}
