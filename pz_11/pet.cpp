#include <iostream>
#include "pet.h"

using namespace std;


// конструкторы

Pet::Pet() {
	this->setName("-");
	this->setSpecies("-");
	this->setColor("-");
	this->setAge(0);
	this->setWeight(0);
	this->owner = "-";
}

// список инициализации

Pet::Pet(string name, string species, string color, int age, double weight, string owner) :
	Animal(name, species, color, age, weight),
	owner(owner) {}

// делегирование конструкторов

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

// сеттеры

void Pet::setOwner(string owner) {
	this->owner = owner;
}

// геттеры

string Pet::getOwner() {
	return this->owner;
}

// методы

void Pet::displayPet() {
	cout << "Питомец: " << this->getName()
		<< " | Вид: " << this->getSpecies()
		<< " | Окрас: " << this->getColor()
		<< " | Возраст: " << this->getAge()
		<< " | Вес: " << this->getWeight()
		<< " | Владелец: " << this->owner << endl;
}