#pragma once
#include <iostream>
#include "Car.h"

using namespace std;


class Truck : public Car {
public:
	// ������������
	Truck();
	Truck(string make, string color, string bodyType, double engineVolume, int mileage, bool isAmerican);
	Truck(string make, string color, string bodyType, double engineVolume, int mileage);
	Truck(string make, string color, string bodyType, double engineVolume);
	Truck(string make, string color, string bodyType);
	Truck(string make, string color);
	Truck(string make);

	// ������� � �������
	void setHasTrailer(bool hasTrailer);
	bool getHasTrailer();

	// ������
	void displayTruck();

private:
	bool isAmerican;
};