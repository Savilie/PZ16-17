#include <iostream>
#include "child.h"

using namespace std;


// ������������

Child::Child() {
	this->setFirstName("-");
	this->setLastName("-");
	this->setAge(0);
	this->setWeight(0);
	this->setHeight(0);
	this->studyPlace = "-";
}

// ������ �������������

Child::Child(string firstName, string lastName, int age, double weight, double height, string studyPlace) :
	Human(firstName, lastName, age, weight, height),
	studyPlace(studyPlace) {}

// ������������� �������������

Child::Child(string firstName, string lastName, int age, double weight, double height) : Human(firstName, lastName, age, weight, height), studyPlace("-") {}
Child::Child(string firstName, string lastName, int age, double weight) : Human(firstName, lastName, age, weight, 0), studyPlace("-") {}
Child::Child(string firstName, string lastName, int age) : Human(firstName, lastName, age, 0, 0), studyPlace("-") {}
Child::Child(string firstName, string lastName) : Human(firstName, lastName, 0, 0, 0), studyPlace("-") {}
Child::Child(string firstName) : Human(firstName, "-", 0, 0, 0), studyPlace("-") {}

// �������

void Child::setStudyPlace(string studyPlace) {
	this->studyPlace = studyPlace;
}

// �������

string Child::getStudyPlace() {
	return this->studyPlace;
}

// ������

void Child::print() {
	cout << "�������: " << this->getFirstName() << " " << this->getLastName()
		<< " | �������: " << this->getAge()
		<< " | ���: " << this->getWeight()
		<< " | ����: " << this->getHeight()
		<< " | ����� �����: " << this->studyPlace << endl;
}