#include "animal.h"
#include "validators.h"
using namespace validators;

// ������������ �� �������

Animal::Animal() {
    this->name = "-";
    this->species = "-";
    this->color = "-";
    this->age = 0;
    this->weight = 0;
}


Animal::Animal(string name, string species, string color, int age, double weight)
    : name(validate(name)), species(validate(species)),
    color(validate(color)), age(validate(age)), weight(validate(weight)) {}



Animal::Animal(string name, string species, string color, int age) : Animal(name, species, color, age, 0) {}
Animal::Animal(string name, string species, string color) : Animal(name, species, color, 0, 0) {}
Animal::Animal(string name, string species) : Animal(name, species, "", 0, 0) {}
Animal::Animal(string name) : Animal(name, "", "", 0, 0) {}



void Animal::setAttributes(string newName, string newSpecies, string newColor, int newAge, double newWeight) {
    name = validate(newName);
    species = validate(newSpecies);
    color = validate(newColor);
    setAge(newAge);
    setWeight(newWeight);
}


string Animal::getName() { return name; }
string Animal::getSpecies() { return species; }
string Animal::getColor() { return color; }
int Animal::getAge() { return age; }
double Animal::getWeight() { return weight; }


void Animal::increaseWeight(int days) {
    weight += weight * 0.01 * days;
    std::cout << "�� ��������� �������� � ��� ���������� :) ���: " << weight << " ��" << std::endl;
}

void Animal::changeName(string newName) {
    name = newName;
    std::cout << "��� �������� ��: " << newName << std::endl;
}

void Animal::printInfo() {
    std::cout << "���: " << name << "\n";
    std::cout << "���: " << species << "\n";
    std::cout << "����: " << color << "\n";
    std::cout << "�������: " << age << " ���\n";
    std::cout << "���: " << weight << " ��\n";
    std::cout << "-----------------------------\n";

}

//// ��������� ������
Animal Animal::operator++(){
    
    weight += 52;
    return *this;

};

Animal Animal::operator--() {

    weight -= 52;
    return *this;

};

bool Animal::operator<(Animal other) {

    return this->weight < other.weight;

};


bool Animal::operator>(Animal other) {

    return this->weight > other.weight;

};

ostream& operator<< (ostream& output, Animal a) {

    output << "���: " << a.name << "\n"
        << "���: " << a.species << "\n"
        << "�����: " << a.color << "\n"
        << "�������: " << a.age << "\n"
        << "���: " << a.weight << "\n"
        << "--------------------------\n\n";
    return output;

};