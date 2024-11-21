#include <iostream>
#include "passengerCar.h"

using namespace std;


// конструкторы

PassangerCar::PassangerCar() {
	this->setMake("-");
	this->setColor("-");
	this->setBodyType("-");
	this->setEngineVolume(0);
	this->setMileage(0);
	this->isSport = false;
}

// список инициализации

PassangerCar::PassangerCar(string brend, string color, string bodyType, double motorCapacity, int mileage, bool hasArmrest) :
	Car(brend, color, bodyType, motorCapacity, mileage),
	isSport(hasArmrest) {}

// делегирование конструкторов

PassangerCar::PassangerCar(string brend, string color, string bodyType, double motorCapacity, int mileage) : Car(brend, color, bodyType, motorCapacity, mileage),
isSport(false) {}
PassangerCar::PassangerCar(string brend, string color, string bodyType, double motorCapacity) : Car(brend, color, bodyType, motorCapacity, 0),
isSport(false) {}
PassangerCar::PassangerCar(string brend, string color, string bodyType) : Car(brend, color, bodyType, 0, 0),
isSport(false) {}
PassangerCar::PassangerCar(string brend, string color) : Car(brend, color, "-", 0, 0),
isSport(false) {}
PassangerCar::PassangerCar(string brend) : Car(brend, "-", "-", 0, 0),
isSport(false) {}

// сеттеры

void PassangerCar::setHasArmrest(bool hasArmrest) {
	this->isSport = hasArmrest;
}

// геттеры

bool PassangerCar::getHasArmrest() {
	return this->isSport;
}

// методы

void PassangerCar::displayPassangerCar() {
	cout << "Легковушка: " << this->getMake()
		<< " | Цвет: " << this->getColor()
		<< " | Тип кузова: " << this->getBodyType()
		<< " | Объем двигателя: " << this->getEngineVolume()
		<< " | Пробег: " << this->getMileage()
		<< " | Спортивная машина: " << boolalpha << this->isSport << endl;
}