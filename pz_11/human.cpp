#include "human.h"
#include "validators.h"
#include <iostream>

using namespace std;
using namespace validators;


// конструкторы по умолчанию

Human::Human() {
    this->firstName = "-";
    this->lastName = "-";
    this->age = 0;
    this->weight = 0;
    this->height = 0;
}


Human::Human(string fName, string lName, int a, double w, int h)
    : firstName(validate(fName)), lastName(validate(lName)),
    age(validate(a)), weight(validate(w)), height(validate(h)) {}

Human::Human(string fName, string lName, int a, double w) : Human(fName, lName, a, w, 0) {}

Human::Human(string fName, string lName, int a) : Human(fName, lName, a, 0, 0) {}

Human::Human(string fName, string lName) : Human(fName, lName, 0, 0, 0) {}

Human::Human(string fName) : Human(fName, "", 0, 0, 0) {}


// Деструктор
Human::~Human() {}

// Геттеры
const string Human::getFirstName() { return firstName; }
const string Human::getLastName() { return lastName; }
int Human::getAge() { return age; }
double Human::getWeight() { return weight; }
int Human::getHeight() { return height; }

// Сеттеры
void Human::setFirstName(string fn) { firstName = validate(fn); }
void Human::setLastName(string ln) { lastName = validate(ln); }
void Human::setAge(int age) { age = validate(age); }
void Human::setWeight(double w) { weight = validate(w); }
void Human::setHeight(int h) { height = validate(h); }


double Human::calculateBMI() {
    return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
}

int Human::calculateBirthYear(int currentYear) {
    return currentYear - age;
}

void Human::print() {
    cout << "Имя: " << firstName << ", Фамилия: " << lastName
        << ", Возраст: " << age << ", Вес: " << weight
        << " кг, Рост: " << height << " см" << endl;
}

// ОПЕРАТОРЫ ++ -- И ПРОЧЕЕ Г

Human Human::operator++() {
    
    height+=10;

    return *this;

}

Human Human::operator--() {

    if (height > 10) {
        height -= 10;
        return *this;
    }
    cout << "Error";
}

bool Human::operator<(Human other) {
    return this->height < other.height;
}

bool Human::operator>(Human other) {
    return this->height > other.height;
} 

ostream& operator<< (ostream& output, Human h) {
    output << "Имя человека: " << h.firstName << "\n"
        << "Возраст: " << h.age << "\n"
        << "Вес: " << h.weight << "\n"
        << "Рост: " << h.height << "\n"
        << "--------------------------\n";
    return output;
}
