#pragma once
#include <iostream>

namespace age {

    // ������������ �������� ��� ������ Human
    enum HumanAge {
        CHILD = 0,
        TEENAGER = 13,
        ADULT = 18,
        SENIOR = 65
    };

    // ������������ ������� ��� ������ Car
    enum CarMileage {
        NEW = 0,       // ����� ����������, ��� �������
        LOW = 10000,   // ������ ������
        MEDIUM = 50000,// ������� ������
        HIGH = 100000  // ������� ������
    };

    // ������������ �������� ��� ������ Animal
    enum AnimalAge {
        INFANT = 0,
        JUVENILE = 1,
        MATURE = 5,
        OLD = 10
    };

}

