#include <iostream>
#include "human.h"
#include "car.h"
#include "animal.h"
#include "theme.h"
#include "child.h"
#include "adult.h"
#include "pet.h"
#include "wild.h"
#include "passengerCar.h"
#include "truck.h"
using namespace age;
using namespace std;



//struct Human {
//
//private:
//    string firstName;
//    string lastName;
//    int age;
//    double weight; // ��� � ������
//    int height; // ���� � ������
//
//public:
//    // ����� ��� �������� ������� ����� ���� (���)
//    double calculateBMI() const {
//        return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
//    }
//
//    // ����� ��� ���������� ���� ��������
//    int calculateBirthYear(int currentYear) const {
//        return currentYear - age;
//    }
//
//    // ����� ��� ���������� ����� ���������
//    void setData(string fName, string lName, int a, double w, int h) {
//        firstName = fName;
//        lastName = lName;
//        age = a;
//        weight = w;
//        height = h;
//    }
//
//    // ����� ��� ������ ������ � �������
//    void print() const {
//        cout << "���: " << firstName << ", �������: " << lastName
//            << ", �������: " << age << ", ���: " << weight
//            << " ��, ����: " << height << " ��" << endl;
//    }
//};


//struct Car {
//private:
//    const char* make;
//    const char* color;
//    const char* bodyType;
//    float engineVolume;
//    int mileage;
//    float secondFuel; // ���� ��� ������� ������������� ���������� �������
//    int kilometers; // ���� ��� ����������� ����������
//
//public:
//    // ����� ��� ���������� ����� ���������
//    void setData(const char* mk, const char* clr, const char* body, float engVol, int mil, float secFuel, int km) {
//        make = mk;
//        color = clr;
//        bodyType = body;
//        engineVolume = engVol;
//        mileage = mil;
//        secondFuel = secFuel;
//        kilometers = km;
//    }
//
//     //��� ��� �������� - ������ ������� ��� ���������� �������, ������� �� ��������� �� ������ ���, ����� ��������� �� ���������� ���������� � �������� �� 100, � ����� � ����� ������ ����� :(    // ��� ������� ����� ����� �������� ���������� 
//      float calculateFuelConsumption() const {
//          return (engineVolume / mileage) * 100000;
//      }
//
//    // ����� ��� ���������� �������
//    void reduceMileage(int reduction) {
//        if (mileage > reduction) {
//            mileage -= reduction;
//        }
//        else {
//            mileage = 0;
//        }
//        cout << "������ �������� ��: " << reduction << " ������� ������: " << mileage << endl;
//    }
//
//    // ����� ��� ������ ���������� � ������
//    void printInfo() const {
//        cout << "�����: " << make << "\n";
//        cout << "����: " << color << "\n";
//        cout << "��� ������: " << bodyType << "\n";
//        cout << "����� ���������: " << engineVolume << "L\n";
//        cout << "������: " << mileage << "km\n";
//        cout << "������� ������ �������: " << calculateFuelConsumption() << " �/100��\n";
//    }
//}; 

//struct Animal {
//private:
//    const char* name;
//    const char* species;
//    const char* color;
//    int age;
//    double weight;
//
//public:
//    // ����� ��� ���������� ����� ���������
//    void setData(const char* nm, const char* sp, const char* clr, int ag, double wt) {
//        name = nm;
//        species = sp;
//        color = clr;
//        age = ag;
//        weight = wt;
//    }
//
//    // ����� ��� ���������� ����
//    void increaseWeight(int days) {
//        weight += weight * 0.01 * days;
//        cout << "�� ��������� �������� � ��� ���������� :) ���: " << weight << endl;
//    }
//
//    // ����� ��� ����� �����
//    void changeName(const char* newName) {
//        name = newName;
//        cout << "��� �������� ��: " << newName << endl;
//    }
//
//    // ����� ��� ������ ���������� � ��������
//    void printInfo() const {
//        cout << "���: " << name << "\n";
//        cout << "���: " << species << "\n";
//        cout << "�����: " << color << "\n";
//        cout << "�������: " << age << " ���\n";
//        cout << "���: " << weight << " ��\n";
//    }
//};

int main() {
    setlocale(LC_ALL, "RUSSIAN.1251");
    // ������������� ������� ���� �������� ��� ���������!!!
    //Human person1;
    //person1.firstName = "����";
    //person1.lastName = "������";
    //person1.age = 30;
    //person1.weight = 180.0;
    //person1.height = 70.0;

    Human person1("����", "������", 30, 180, 192); // ��� ��� ������!!!

    // ������ ������������� 
    Human person2{ "������", "�������", 25, 82.0, 180 };

    // ������������� ������������� ����� ������
    Human person3 = { "�����", "�������", 28, 55.0, 170 };

    // ������������ �������������
    Human* person4 = new Human{ "����", "���������", 22, 52.0, 165 };

    //OPERATORS HEREEE
    ++*person4;
    cout << person4->getHeight() << "\n";

    --*person4;
    cout << person4->getHeight() << "\n";

    if (person3 > *person4) cout << "������� - " << person3.getFirstName() << " ������\n";
    else if (person3 < *person4) cout << "������� - " << person4->getFirstName() << "������\n";
    else cout << "���� ����������� �����\n";
    cout << *person4;
    // ������� ��� ��� ���������� ���� ��������
    int currentYear = 2024;

    Child child("������", "�������������", 14, 50, 165, "����� �44");

    Adult* adult = new Adult("����", "������������", 41, 80, 185, "��� \"������\"");
    // ��������� ������� �������
    Human** people = new Human * [6] { &person1, & person2, & person3, person4, & child, adult};

    for (int i = 0; i < 6; ++i) {
        people[i]->print();
        std::cout << "���: " << people[i]->calculateBMI() << std::endl;
        std::cout << "��� ��������: " << people[i]->calculateBirthYear(currentYear) << std::endl;
        std::cout << "---------------------------" << std::endl;
    }


    delete adult;

    // ������������ ����������� ���������� ������
    delete person4;

    // 2. �������� ����������� ��������

    // ������������� ������� ���� �������� ��� ���������
    //Car car1;
    //car1.make = "Toyota";
    //car1.color = "�������";
    //car1.bodyType = "�����";
    //car1.engineVolume = 1.8;
    //car1.mileage = 15000;

    Car car1("Ford", "�������", "�����", 1.6, 50000); // ������������� ��� ������!!!

    // ������������� �������
    Car car2 = { "Ford", "�����", "���������", 2.5, 30000 };

    // ������������� �������������
    Car car3{ "Honda", "������", "����", 2.0, 20000 };

    // �������� ������������� �������
    Car* car4 = new Car{ "Chevrolet", "�����", "�������", 1.4, 50000 };

    ++*car4;

    //cout << "New engine volumEEEE: " << car4->getEngineVolume() << "\n";

    --*car4;

    //cout << "New engine volumEEEE: " << car4->getEngineVolume() << "\n";

    //if (car3 > *car4) cout << "������� - " << car3.getMake() << " �����\n\n";
    //else if (car3 < *car4) cout << "������� - " << car4->getMake() << " �����\n\n";
    //else cout << "������� ����������.\n\n";
    //cout << *car4;

    PassangerCar passangerCar("������", "������", "�����", 1.5, 34654, false);

    Truck truckCar("MAN", "�����", "��������", 2.4, 123400, false);

    // ��������� ������� �������
    Car** cars = new Car*[6] { &car1, &car2, &car3, car4, &passangerCar, &truckCar };

    for (int i = 0; i < 6; ++i) {
        cars[i]->printInfo();
        cout << "������ �������: " << cars[i]->calculateFuelConsumption() << endl;
        cars[i]->reduceMileage(5000); cout << "\n";
        cout << "---------------------------" << endl;
    }


    // ������������ ������
    delete car4;

    // 3. �������� ����������� ��������

    // ������������� ������� ���� �������� ��� ���������
    //Animal animal1;
    //animal1.name = "������";
    //animal1.species = "�����";
    //animal1.color = "������";
    //animal1.age = 3;
    //animal1.weight = 4.5;

    //// ������������� �������
    //Animal animal2 = { "�����", "������", "����������", 5, 20.0 };

    //// ������������� �������������
    //Animal animal3{ "����", "�������", "�������", 2, 0.5 };

    //// 3. �������� ������������� �������
    //Animal* animal4 = new Animal{ "�����", "����", "�����", 4, 7.0 };

    //// ��������� ������� �������
    //Animal* animals[] = { &animal1, &animal2, &animal3, animal4 };
    //for (Animal* animal : animals) {
    //    animal->printInfo();
    //    animal->increaseWeight(10); // ��������� ��� �� 10 ���� ��������
    //    animal->changeName("��� ���� ��������� ����� ���");
    //    cout << "---------------------------";
    //}

    // ������������ ������
    //delete animal4;


    // ��� ��� �� ����� �� ��� � ��� ������������� �� �������� ��� ������, �� � ������� ����� ��� ��� 13 ��

    // �������� ������������ �������
    //Animal cat;
    //cat.setAttributes("�����", "�����", "������", 3, 4.5);
    //std::cout << "���������� � ����������� �������:" << std::endl;
    //cat.printInfo();
    //cat.increaseWeight(5);
    //cat.changeName("����");

    //// �������� ������������� �������
    //Animal* dog = new Animal();
    //dog->setAttributes("�����", "������", "����������", 5, 20.0);
    //std::cout << "\n���������� � ������������ �������:" << std::endl;
    //dog->printInfo();
    //dog->increaseWeight(10);
    //dog->changeName("�����");

    //// ����������� ������ ��� ������������� �������
    //delete dog;


    // �������� ������� � ������� ������������������ ������������
    Animal animal2("�����", "ϸ�", "�����", 6, 10.0);

    // ������������ �������� ��������
    Animal* animal3 = new Animal("�����", "���", "�����", 3, 4.0);

    Animal* animal4 = new Animal("�����", "�����", "������", 2, 3.0);

    // �������� �������� � �������������
    animal4->setAge(-1); // ������
    animal4->setWeight(-2.0); // � ��� ���� ���������

    ++*animal4;

    cout << "������ �������� ������� �����: " << animal4->getWeight() << " ��\n";

    --*animal4;
    
    cout << "������ �������� ����� �����: " << animal4->getWeight() << " ��\n";
    
    //if (*animal3 > *animal4) cout << "�������� - " << animal3->getName() << " �������\n\n";
    //else if (*animal3 < *animal4) cout << "�������� - " << animal4->getName() << " �������\n\n";
    //else cout << "�������� ����� ���������.\n\n";
    //cout << *animal4;

    Pet* pet = new Pet("������", "���", "���������", 2, 7);
    pet->setOwner("����");

    Wild wild("����", "���", "������", 10, 500, "������");

    Animal** animals = new Animal*[5] { &animal2, animal3, animal4, pet, &wild };

    for (int i = 0; i < 5; ++i) {
        animals[i]->printInfo();
    }

    // ������������ ������
    delete pet;
    delete animal3;
    delete animal4;

    // ������������� NAMESPACE AGE � ENUM
    HumanAge myAge = ADULT;
    CarMileage myCarMileage = LOW;
    AnimalAge myPetAge = MATURE;

    cout << "\n\nAge: " << myAge << endl;
    cout << "Mileage: " << myCarMileage << endl;
    cout << "Animal AAAAge: " << myPetAge << endl;

    return 0;
}

