#pragma once
#include <iostream>

namespace age {

    // Перечисление возраста для класса Human
    enum HumanAge {
        CHILD = 0,
        TEENAGER = 13,
        ADULT = 18,
        SENIOR = 65
    };

    // Перечисление пробега для класса Car
    enum CarMileage {
        NEW = 0,       // Новый автомобиль, без пробега
        LOW = 10000,   // Низкий пробег
        MEDIUM = 50000,// Средний пробег
        HIGH = 100000  // Высокий пробег
    };

    // Перечисление возраста для класса Animal
    enum AnimalAge {
        INFANT = 0,
        JUVENILE = 1,
        MATURE = 5,
        OLD = 10
    };

}

