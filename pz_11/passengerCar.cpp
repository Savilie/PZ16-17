#include <iostream>
#include "passengerCar.h"

using namespace std;


// ������������

PassangerCar::PassangerCar() {
	this->setMake("-");
	this->setColor("-");
	this->setBodyType("-");
	this->setEngineVolume(0);
	this->setMileage(0);
	this->isSport = false;
}

// ������ �������������

PassangerCar::PassangerCar(string brend, string color, string bodyType, double motorCapacity, int mileage, bool hasArmrest) :
	Car(brend, color, bodyType, motorCapacity, mileage),
	isSport(hasArmrest) {}

// ������������� �������������

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

// �������

void PassangerCar::setHasArmrest(bool hasArmrest) {
	this->isSport = hasArmrest;
}

// �������

bool PassangerCar::getHasArmrest() {
	return this->isSport;
}

// ������

void PassangerCar::displayPassangerCar() {
	cout << "����������: " << this->getMake()
		<< " | ����: " << this->getColor()
		<< " | ��� ������: " << this->getBodyType()
		<< " | ����� ���������: " << this->getEngineVolume()
		<< " | ������: " << this->getMileage()
		<< " | ���������� ������: " << boolalpha << this->isSport << endl;
}