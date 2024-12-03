#pragma once 

#include <iostream> 
#include <string>

using namespace std;

class Car {
private:
    string make;
    string color;
    string bodyType;
    double engineVolume;
    int mileage;

public:
    // Конструктор по умолчанию
    Car();

    // Конструктор с параметрами
    Car(string mk, string clr, string body, float engVol, int mil);

    Car(string mk, string clr, string body, float engVol);

    Car(string mk, string clr, string body);

    Car(string mk, string clr);

    Car(string mk);


    // Деструктор
    ~Car();

    // Геттеры
    string getMake();
    string getColor();
    string getBodyType();
    float getEngineVolume();
    int getMileage();

    // Сеттеры
    void setMake(string mk);
    void setColor(string clr);
    void setBodyType(string body);
    void setEngineVolume(float engVol);
    void setMileage(int mil);

    float calculateFuelConsumption();
    void reduceMileage(int reduction);
    virtual void printInfo();

    //// ОПЕРАТОРЫ ВСЯКИЕ
    Car operator++();
    Car operator--();

    bool operator<(Car other);
    bool operator>(Car other);

    friend ostream& operator<< (ostream& output, Car c);

}; 