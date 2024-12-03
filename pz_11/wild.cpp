#include <iostream>
#include "Wild.h"

using namespace std;


// конструкторы

Wild::Wild() {
	this->setName("-");
	this->setSpecies("-");
	this->setColor("-");
	this->setAge(0);
	this->setWeight(0);
	this->country = "-";
}

// список инициализации

Wild::Wild(string name, string species, string color, int age, double weight, string country) :
	Animal(name, species, color, age, weight),
	country(country) {}

// делегирование конструкторов

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

// сеттеры

void Wild::setCountry(string country) {
	this->country = country;
}

// геттеры

string Wild::getCountry() {
	return this->country;
}

// методы

void Wild::printInfo() {
	cout << "Зверь: " << this->getName()
		<< " | Вид: " << this->getSpecies()
		<< " | Цвет: " << this->getColor()
		<< " | Возраст: " << this->getAge()
		<< " | Вес: " << this->getWeight()
		<< " | Среда обитания: " << this->country << endl;
}