#pragma once
#include <iostream>
#include "Car.h"

using namespace std;


class PassangerCar : public Car {
public:
	// конструкторы
	PassangerCar();
	PassangerCar(string make, string color, string bodyType, double engineVolume, int mileage, bool isSport);
	PassangerCar(string make, string color, string bodyType, double engineVolume, int mileage);
	PassangerCar(string make, string color, string bodyType, double engineVolume);
	PassangerCar(string make, string color, string bodyType);
	PassangerCar(string make, string color);
	PassangerCar(string make);

	// геттеры и сеттеры
	void setHasArmrest(bool hasArmrest);
	bool getHasArmrest();

	// методы
	void displayPassangerCar();

private:
	bool isSport;
};