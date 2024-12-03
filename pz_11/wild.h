#pragma once
#include <iostream>
#include "Animal.h"

using namespace std;


class Wild : public Animal {
public:
	// конструкторы
	Wild();
	Wild(string name, string species, string color, int age, double weight, string country);
	Wild(string name, string species, string color, int age, double weight);
	Wild(string name, string species, string color, int age);
	Wild(string name, string species, string color);
	Wild(string name, string species);
	Wild(string name);


	// геттеры и сеттеры
	void setCountry(string habitat);
	string getCountry();

	// методы
	void printInfo();

private:
	string country;
};