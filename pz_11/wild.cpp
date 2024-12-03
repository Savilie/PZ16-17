#include <iostream>
#include "Wild.h"

using namespace std;


// ������������

Wild::Wild() {
	this->setName("-");
	this->setSpecies("-");
	this->setColor("-");
	this->setAge(0);
	this->setWeight(0);
	this->country = "-";
}

// ������ �������������

Wild::Wild(string name, string species, string color, int age, double weight, string country) :
	Animal(name, species, color, age, weight),
	country(country) {}

// ������������� �������������

Wild::Wild(string name, string species, string color, int age, double weight) : Animal(name, species, color, age, weight),
country("-") {}
Wild::Wild(string name, string species, string color, int age) : Animal(name, species, color, age, 0),
country("-") {}
Wild::Wild(string name, string species, string color) : Animal(name, species, color, 0, 0),
country("-") {}
Wild::Wild(string name, string species) : Animal(name, species, "-", 0, 0),
country("-") {}
Wild::Wild(string name) : Animal(name, "-", "-", 0, 0),
country("-") {}

// �������

void Wild::setCountry(string country) {
	this->country = country;
}

// �������

string Wild::getCountry() {
	return this->country;
}

// ������

void Wild::printInfo() {
	cout << "�����: " << this->getName()
		<< " | ���: " << this->getSpecies()
		<< " | ����: " << this->getColor()
		<< " | �������: " << this->getAge()
		<< " | ���: " << this->getWeight()
		<< " | ����� ��������: " << this->country << endl;
}