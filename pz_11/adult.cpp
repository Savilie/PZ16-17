#include <iostream>
#include "adult.h"

using namespace std;


// конструкторы

Adult::Adult() {
	this->setFirstName("-");
	this->setLastName("-");
	this->setAge(0);
	this->setWeight(0);
	this->setHeight(0);
	this->workPlace = "-";
}

// список инициализации

Adult::Adult(string firstName, string lastName, int age, double weight, double height, string workPlace) :
	Human(firstName, lastName, age, weight, height),
	workPlace(workPlace) {}

// делегирование конструкторов

Adult::Adult(string firstName, string lastName, int age, double weight, double height) : Human(firstName, lastName, age, weight, height), workPlace("-") {}
Adult::Adult(string firstName, string lastName, int age, double weight) : Human(firstName, lastName, age, weight, 0), workPlace("-") {}
Adult::Adult(string firstName, string lastName, int age) : Human(firstName, lastName, age, 0, 0), workPlace("-") {}
Adult::Adult(string firstName, string lastName) : Human(firstName, lastName, 0, 0, 0), workPlace("-") {}
Adult::Adult(string firstName) : Human(firstName, "-", 0, 0, 0), workPlace("-") {}

// сеттеры

void Adult::setWorkPlace(string workPlace) {
	this->workPlace = workPlace;
}

// геттеры

string Adult::getWorkPlace() {
	return this->workPlace;
}

// методы

void Adult::displayAdult() {
	cout << "Взрослый: " << this->getFirstName() << " " << this->getLastName()
		<< " | Возраст: " << this->getAge()
		<< " | Вес: " << this->getWeight()
		<< " | Рост: " << this->getHeight()
		<< " | Место работы: " << this->workPlace << endl;
}