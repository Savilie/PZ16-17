#include <iostream>
#include "Truck.h"

using namespace std;


// конструкторы

Truck::Truck() {
	this->setMake("-");
	this->setColor("-");
	this->setBodyType("-");
	this->setEngineVolume(0);
	this->setMileage(0);
	this->isAmerican = false;
}

// список инициализации

Truck::Truck(string brend, string color, string bodyType, double motorCapacity, int mileage, bool isAmerican) :
	Car(brend, color, bodyType, motorCapacity, mileage),
	isAmerican(isAmerican) {}

// делегирование конструкторов

Truck::Truck(string brend, string color, string bodyType, double motorCapacity, int mileage) : Car(brend, color, bodyType, motorCapacity, mileage),
isAmerican(false) {}
Truck::Truck(string brend, string color, string bodyType, double motorCapacity) : Car(brend, color, bodyType, motorCapacity, 0),
isAmerican(false) {}
Truck::Truck(string brend, string color, string bodyType) : Car(brend, color, bodyType, 0, 0),
isAmerican(false) {}
Truck::Truck(string brend, string color) : Car(brend, color, "-", 0, 0),
isAmerican(false) {}
Truck::Truck(string brend) : Car(brend, "-", "-", 0, 0),
isAmerican(false) {}

// сеттеры

void Truck::setHasTrailer(bool hasTrailer) {
	this->isAmerican = hasTrailer;
}

// геттеры

bool Truck::getHasTrailer() {
	return this->isAmerican;
}

// методы

void Truck::printInfo() {
	cout << "Грузовичок: " << this->getMake()
		<< "\n | Цвет: " << this->getColor()
		<< "\n | Тип кузова: " << this->getBodyType()
		<< "\n | Объем двигателя: " << this->getEngineVolume()
		<< "\n | Пробег: " << this->getMileage()
		<< "\n | Американский тип кузова: " << boolalpha << this->isAmerican << endl;
}