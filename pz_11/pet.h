#pragma once
#include <iostream>
#include "Animal.h"

using namespace std;


class Pet : public Animal {
public:
	// ������������
	Pet();
	Pet(string name, string species, string color, int age, double weight, string owner);
	Pet(string name, string species, string color, int age, double weight);
	Pet(string name, string species, string color, int age);
	Pet(string name, string species, string color);
	Pet(string name, string species);
	Pet(string name);


	// ������� � �������
	void setOwner(string owner);
	string getOwner();

	// ������
	void printInfo();

private:
	string owner;
};