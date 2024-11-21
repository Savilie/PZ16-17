#include "Car.h"
#include "validators.h"
using namespace validators;

// ����������� �� ���������
Car::Car() : make("PRIORA"), color("PRIORA"), bodyType("PRIOA"), engineVolume(0.0), mileage(0) {}

// ����������� � �����������
Car::Car(string mk, string clr, string body, float engVol, int mil)
    : make(validate(mk)), color(validate(clr)), bodyType(validate(body)),
    engineVolume(validate(engVol)), mileage(validate(mil)) {}

Car::Car(string mk, string clr, string body, float engVol) : Car(mk, clr, body, engVol, 0) {}
Car::Car(string mk, string clr, string body) : Car(mk, clr, body, 0, 0) {}
Car::Car(string mk, string clr) : Car(mk, clr, "", 0, 0) {}
Car::Car(string mk) : Car(mk, "", "", 0, 0) {}

// ����������
Car::~Car() {}

// �������
string Car::getMake() { return make; }
string Car::getColor() { return color; }
string Car::getBodyType() { return bodyType; }
float Car::getEngineVolume() { return engineVolume; }
int Car::getMileage() { return mileage; }

// �������
void Car::setMake(string mk) { make = validate(mk); }
void Car::setColor(string clr) { color = validate(clr); }
void Car::setBodyType(string body) { bodyType = validate(body); }
void Car::setEngineVolume(float engVol) {
    if (engVol > 0) {
        engineVolume = engVol;
    }
    else {
        std::cout << "������: ����� ��������� ������ ���� ������ 0.\n";
    }
}
void Car::setMileage(int mil) {
    
    mileage = validate(mil);

}

float Car::calculateFuelConsumption()  {
    return (engineVolume / mileage) * 100000;
}
void Car::reduceMileage(int reduction) {
    if (mileage > reduction) {
        mileage -= reduction;
    }
    else {
        mileage = 0;
    }
}
void Car::printInfo()  {
    std::cout << "�����: " << make << "\n";
    std::cout << "����: " << color << "\n";
    std::cout << "��� ������: " << bodyType << "\n";
    std::cout << "����� ���������: " << engineVolume << "L\n";
    std::cout << "������: " << mileage << "km\n";
}

// ���������
 
Car Car::operator++() {
    ++engineVolume;
    return *this;
}

Car Car::operator--() {

    if (engineVolume > 1) {
        --engineVolume;
        return *this;
    }
    cout << "Error";
}

bool Car::operator<(Car other) {
    return this->engineVolume < other.engineVolume;
}

bool Car::operator>(Car other) {
    return this->engineVolume > other.engineVolume;
}


ostream& operator<< (ostream& output, Car c) {
    output << "����� ������: " << c.make << "\n"
        << "����: " << c.color << "\n"
        << "��� ������: " << c.bodyType << "\n"
        << "����� ���������: " << c.engineVolume << "\n"
        << "������: " << c.mileage << "\n"
        << "--------------------------\n\n";
    return output;
}
