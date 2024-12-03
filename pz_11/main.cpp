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
//    double weight; // вес в фунтах
//    int height; // рост в дюймах
//
//public:
//    // метод для подсчета индекса массы тела (ИМТ)
//    double calculateBMI() const {
//        return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
//    }
//
//    // метод для вычисления года рождения
//    int calculateBirthYear(int currentYear) const {
//        return currentYear - age;
//    }
//
//    // метод для заполнения полей структуры
//    void setData(string fName, string lName, int a, double w, int h) {
//        firstName = fName;
//        lastName = lName;
//        age = a;
//        weight = w;
//        height = h;
//    }
//
//    // метод для вывода данных в консоль
//    void print() const {
//        cout << "Имя: " << firstName << ", Фамилия: " << lastName
//            << ", Возраст: " << age << ", Вес: " << weight
//            << " кг, Рост: " << height << " см" << endl;
//    }
//};


//struct Car {
//private:
//    const char* make;
//    const char* color;
//    const char* bodyType;
//    float engineVolume;
//    int mileage;
//    float secondFuel; // поле для второго заправленного количества топлива
//    int kilometers; // поле для пройденного расстояния
//
//public:
//    // Метод для заполнения полей структуры
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
//     //вот тут проблема - расход топлива это количество топлива, которое вы заправили во второй раз, нужно разделить на количество километров и умножить на 100, а значи т нужно больше полей :(    // эта формула более менее отражает реальность 
//      float calculateFuelConsumption() const {
//          return (engineVolume / mileage) * 100000;
//      }
//
//    // Метод для уменьшения пробега
//    void reduceMileage(int reduction) {
//        if (mileage > reduction) {
//            mileage -= reduction;
//        }
//        else {
//            mileage = 0;
//        }
//        cout << "Пробег скрутили на: " << reduction << " Текущий пробег: " << mileage << endl;
//    }
//
//    // Метод для вывода информации о машине
//    void printInfo() const {
//        cout << "Марка: " << make << "\n";
//        cout << "Цвет: " << color << "\n";
//        cout << "Тип кузова: " << bodyType << "\n";
//        cout << "Объем двигателя: " << engineVolume << "L\n";
//        cout << "Пробег: " << mileage << "km\n";
//        cout << "Средний расход топлива: " << calculateFuelConsumption() << " л/100км\n";
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
//    // Метод для заполнения полей структуры
//    void setData(const char* nm, const char* sp, const char* clr, int ag, double wt) {
//        name = nm;
//        species = sp;
//        color = clr;
//        age = ag;
//        weight = wt;
//    }
//
//    // Метод для увеличения веса
//    void increaseWeight(int days) {
//        weight += weight * 0.01 * days;
//        cout << "Вы покормили животное и оно потолстело :) вес: " << weight << endl;
//    }
//
//    // Метод для смены имени
//    void changeName(const char* newName) {
//        name = newName;
//        cout << "Имя изменено на: " << newName << endl;
//    }
//
//    // Метод для вывода информации о животном
//    void printInfo() const {
//        cout << "Имя: " << name << "\n";
//        cout << "Вид: " << species << "\n";
//        cout << "Окрас: " << color << "\n";
//        cout << "Возраст: " << age << " лет\n";
//        cout << "Вес: " << weight << " кг\n";
//    }
//};

int main() {
    setlocale(LC_ALL, "RUSSIAN.1251");
    // Инициализация каждого поля отдельно ДЛЯ СТРУКТУРЫ!!!
    //Human person1;
    //person1.firstName = "Иван";
    //person1.lastName = "Иванов";
    //person1.age = 30;
    //person1.weight = 180.0;
    //person1.height = 70.0;

    Human person1("Иван", "Иванов", 30, 180, 192); // ЭТО ДЛЯ КЛАССА!!!

    // Список инициализации 
    Human person2{ "Андрей", "Сидоров", 25, 82.0, 180 };

    // Универсальная инициализация через список
    Human person3 = { "Мария", "Петрова", 28, 55.0, 170 };

    // Динамическая инициализация
    Human* person4 = new Human{ "Анна", "Васильева", 22, 52.0, 165 };

    //OPERATORS HEREEE
    ++*person4;
    cout << person4->getHeight() << "\n";

    --*person4;
    cout << person4->getHeight() << "\n";

    if (person3 > *person4) cout << "Человек - " << person3.getFirstName() << " больше\n";
    else if (person3 < *person4) cout << "Человек - " << person4->getFirstName() << "больше\n";
    else cout << "Люди одинакового роста\n";
    cout << *person4;
    // Текущий год для вычисления года рождения
    int currentYear = 2024;

    Child child("Джамал", "Съелшоколадов", 14, 50, 165, "Школа №44");

    Adult* adult = new Adult("Ваня", "Нунурминский", 41, 80, 185, "ООО \"Паньки\"");
    // Обработка каждого объекта
    Human** people = new Human * [6] { &person1, & person2, & person3, person4, & child, adult};

    for (int i = 0; i < 6; ++i) {
        people[i]->print();
        std::cout << "ИМТ: " << people[i]->calculateBMI() << std::endl;
        std::cout << "Год рождения: " << people[i]->calculateBirthYear(currentYear) << std::endl;
        std::cout << "---------------------------" << std::endl;
    }


    delete adult;

    // Освобождение динамически выделенной памяти
    delete person4;

    // 2. Создание статических объектов

    // Инициализация каждого поля отдельно ДЛЯ СТРУКТУРЫ
    //Car car1;
    //car1.make = "Toyota";
    //car1.color = "Красный";
    //car1.bodyType = "Седан";
    //car1.engineVolume = 1.8;
    //car1.mileage = 15000;

    Car car1("Ford", "Красный", "Седан", 1.6, 50000); // Инициализация ДЛЯ КЛАССА!!!

    // Инициализация списком
    Car car2 = { "Ford", "Синий", "Универсал", 2.5, 30000 };

    // Универсальная инициализация
    Car car3{ "Honda", "Черный", "Купе", 2.0, 20000 };

    // Создание динамического объекта
    Car* car4 = new Car{ "Chevrolet", "Белый", "Хэтчбэк", 1.4, 50000 };

    ++*car4;

    //cout << "New engine volumEEEE: " << car4->getEngineVolume() << "\n";

    --*car4;

    //cout << "New engine volumEEEE: " << car4->getEngineVolume() << "\n";

    //if (car3 > *car4) cout << "Машинка - " << car3.getMake() << " круче\n\n";
    //else if (car3 < *car4) cout << "Машинка - " << car4->getMake() << " круче\n\n";
    //else cout << "Машинки одинаковые.\n\n";
    //cout << *car4;

    PassangerCar passangerCar("Приора", "Чорная", "Седан", 1.5, 34654, false);

    Truck truckCar("MAN", "Белый", "Грузовик", 2.4, 123400, false);

    // Обработка каждого объекта
    Car** cars = new Car*[6] { &car1, &car2, &car3, car4, &passangerCar, &truckCar };

    for (int i = 0; i < 6; ++i) {
        cars[i]->printInfo();
        cout << "Расход топлива: " << cars[i]->calculateFuelConsumption() << endl;
        cars[i]->reduceMileage(5000); cout << "\n";
        cout << "---------------------------" << endl;
    }


    // Освобождение памяти
    delete car4;

    // 3. Создание статических объектов

    // Инициализация каждого поля отдельно ДЛЯ СТРУКТУРЫ
    //Animal animal1;
    //animal1.name = "Барсик";
    //animal1.species = "Кошка";
    //animal1.color = "Черный";
    //animal1.age = 3;
    //animal1.weight = 4.5;

    //// Инициализация списком
    //Animal animal2 = { "Шарик", "Собака", "Коричневый", 5, 20.0 };

    //// Универсальная инициализация
    //Animal animal3{ "Кеша", "Попугай", "Зеленый", 2, 0.5 };

    //// 3. Создание динамического объекта
    //Animal* animal4 = new Animal{ "Рыжик", "Лиса", "Рыжий", 4, 7.0 };

    //// Обработка каждого объекта
    //Animal* animals[] = { &animal1, &animal2, &animal3, animal4 };
    //for (Animal* animal : animals) {
    //    animal->printInfo();
    //    animal->increaseWeight(10); // Увеличить вес за 10 дней кормежки
    //    animal->changeName("Тут надо придумать новое имя");
    //    cout << "---------------------------";
    //}

    // Освобождение памяти
    //delete animal4;


    // ТУТ ЧТО ТО ПОШЛО НЕ ТАК И ЭТА ИНИЦИАЛИЗАЦИЯ НЕ РАБОТАЕТ ДЛЯ КЛАССА, НО Я НАПИСАЛ НОВУЮ ЭТО ДЛЯ 13 ПЗ

    // Создание статического объекта
    //Animal cat;
    //cat.setAttributes("Мурка", "Кошка", "Черный", 3, 4.5);
    //std::cout << "Информация о статическом объекте:" << std::endl;
    //cat.printInfo();
    //cat.increaseWeight(5);
    //cat.changeName("Киса");

    //// Создание динамического объекта
    //Animal* dog = new Animal();
    //dog->setAttributes("Бобик", "Собака", "Коричневый", 5, 20.0);
    //std::cout << "\nИнформация о динамическом объекте:" << std::endl;
    //dog->printInfo();
    //dog->increaseWeight(10);
    //dog->changeName("Шарик");

    //// Освобождаем память для динамического объекта
    //delete dog;


    // Создание объекта с помощью параметризованного конструктора
    Animal animal2("Шарик", "Пёс", "Белый", 6, 10.0);

    // Динамическое создание объектов
    Animal* animal3 = new Animal("Рыжик", "Кот", "Рыжий", 3, 4.0);

    Animal* animal4 = new Animal("Мурка", "Кошка", "Черная", 2, 3.0);

    // Проверка сеттеров с ограничениями
    animal4->setAge(-1); // Ошибка
    animal4->setWeight(-2.0); // и тут тоже ерорррррр

    ++*animal4;

    cout << "Теперь животное толстое капец: " << animal4->getWeight() << " кг\n";

    --*animal4;
    
    cout << "Теперь животное худое капец: " << animal4->getWeight() << " кг\n";
    
    //if (*animal3 > *animal4) cout << "Животное - " << animal3->getName() << " крупнее\n\n";
    //else if (*animal3 < *animal4) cout << "Животное - " << animal4->getName() << " крупнее\n\n";
    //else cout << "Животные весят одинаково.\n\n";
    //cout << *animal4;

    Pet* pet = new Pet("Персик", "кот", "рыженький", 2, 7);
    pet->setOwner("Иван");

    Wild wild("Лион", "Лев", "желтый", 10, 500, "Африка");

    Animal** animals = new Animal*[5] { &animal2, animal3, animal4, pet, &wild };

    for (int i = 0; i < 5; ++i) {
        animals[i]->printInfo();
    }

    // Освобождение памяти
    delete pet;
    delete animal3;
    delete animal4;

    // ИСПОЛЬЗОВАНИЕ NAMESPACE AGE и ENUM
    HumanAge myAge = ADULT;
    CarMileage myCarMileage = LOW;
    AnimalAge myPetAge = MATURE;

    cout << "\n\nAge: " << myAge << endl;
    cout << "Mileage: " << myCarMileage << endl;
    cout << "Animal AAAAge: " << myPetAge << endl;

    return 0;
}

