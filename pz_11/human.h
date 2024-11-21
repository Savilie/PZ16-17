#pragma once
#include <string>

using namespace std;

class Human {
private:
    string firstName;
    string lastName;
    int age;
    double weight; // вес в фунтах
    int height; // рост в дюймах

public:    
        
    Human();

    // Конструктор с параметрами
    Human(string fName, string lName, int a, double w, int h);

    Human(string fName, string lName, int a, double w);

    Human(string fName, string lName, int a);

    Human(string fName, string lName);

    Human(string fName);


    // Деструктор
    ~Human();

    // Геттеры
    const string getFirstName();
    const string getLastName();
    int getAge();
    double getWeight();
    int getHeight();

    // Сеттеры
    void setFirstName(string fn);
    void setLastName(string ln);
    void setAge(int age);
    void setWeight(double w);
    void setHeight(int h);

    double calculateBMI();
    
    int calculateBirthYear(int currentYear);
    
    void print();

    // ОПЕРАТОРЫ ++ -- И ПРОЧЕЕ Г
    Human operator++();
    Human operator--();

    bool operator<(Human other);
    bool operator>(Human other);
    
    friend ostream& operator<< (ostream& output, Human h);
};
