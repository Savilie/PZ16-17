#include <iostream>
#include "pet.h"

using namespace std;


// ������������

Pet::Pet() {
	this->setName("-");
	this->setSpecies("-");
	this->setColor("-");
	this->setAge(0);
	this->setWeight(0);
	this->owner = "-";
}

// ������ �������������

Pet::Pet(string name, string species, string color, int age, double weight, string owner) :
	Animal(name, species, color, age, weight),
	owner(owner) {}

// ������������� �������������

Pet::Pet(string name, string species, string color, int age, double weight) : Animal(name, species, color, age, weight),
owner("-") {}
Pet::Pet(string name, string species, string color, int age) : Animal(name, species, color, age, 0),
owner("-") {}
Pet::Pet(string name, string species, string color) : Animal(name, species, color, 0, 0),
owner("-") {}
Pet::Pet(string name, string species) : Animal(name, species, "-", 0, 0),
owner("-") {}
Pet::Pet(string name) : Animal(name, "-", "-", 0, 0),
owner("-") {}

// �������

void Pet::setOwner(string owner) {
	this->owner = owner;
}

// �������

string Pet::getOwner() {
	return this->owner;
}

// ������

void Pet::displayPet() {
	cout << "�������: " << this->getName()
		<< " | ���: " << this->getSpecies()
		<< " | �����: " << this->getColor()
		<< " | �������: " << this->getAge()
		<< " | ���: " << this->getWeight()
		<< " | ��������: " << this->owner << endl;
}