#include <iostream>
#include "Truck.h"

using namespace std;


// ������������

Truck::Truck() {
	this->setMake("-");
	this->setColor("-");
	this->setBodyType("-");
	this->setEngineVolume(0);
	this->setMileage(0);
	this->isAmerican = false;
}

// ������ �������������

Truck::Truck(string brend, string color, string bodyType, double motorCapacity, int mileage, bool isAmerican) :
	Car(brend, color, bodyType, motorCapacity, mileage),
	isAmerican(isAmerican) {}

// ������������� �������������

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

// �������

void Truck::setHasTrailer(bool hasTrailer) {
	this->isAmerican = hasTrailer;
}

// �������

bool Truck::getHasTrailer() {
	return this->isAmerican;
}

// ������

void Truck::printInfo() {
	cout << "����������: " << this->getMake()
		<< "\n | ����: " << this->getColor()
		<< "\n | ��� ������: " << this->getBodyType()
		<< "\n | ����� ���������: " << this->getEngineVolume()
		<< "\n | ������: " << this->getMileage()
		<< "\n | ������������ ��� ������: " << boolalpha << this->isAmerican << endl;
}