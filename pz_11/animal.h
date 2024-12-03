#pragma once
#include <iostream>
#include <string>
#include "validators.h"

using namespace validators;
using namespace std;

class Animal {
private:
    string name;
    string species;
    string color;
    int age;
    double weight;

public:
    Animal();

    // ����������� � �����������
    Animal(string name, string species, string color, int age, double weight);

    Animal(string name, string species, string color, int age);

    Animal(string name, string species, string color);

    Animal(string name, string species);

    Animal(string name);

    // ����������
    ~Animal() {}

    // �������
    string getName();
    string getSpecies();
    string getColor();
    int getAge();
    double getWeight();

    // �������
    void setName(string newName) { name = validate(newName); }
    void setSpecies(string newSpecies) { species = validate(newSpecies); }
    void setColor(string newColor) { color = validate(newColor); }
    void setAge(int newAge) {
        age = validate(newAge);
    }
    void setWeight(double newWeight) {

        weight = validate(newWeight);

    }

    // ����� ��� ���������� �����
    void setAttributes(string newName, string newSpecies, string newColor, int newAge, double newWeight);

    // ����� ��� ���������� ����
    void increaseWeight(int days);

    // ����� ��� ����� �����
    void changeName(string newName);

    // ����� ��� ������ ���������� � ��������
    virtual void printInfo();

    //// ��������� ������
    Animal operator++();
    Animal operator--();

    bool operator<(Animal other);
    bool operator>(Animal other);

    friend ostream& operator<< (ostream& output, Animal a);

};