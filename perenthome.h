#pragma once

#include <string>
#include <iostream>

#include "abstracthome.h"

class PerentHome : AbstractHome {
    friend std::istream& operator >>(std::istream& in, PerentHome& x);
    friend std::ostream& operator <<(std::ostream& out, PerentHome& x);
protected:
    int id;
    int number_house;
    int square;
    int floor;
    int count_room;
    std::string street;
public:
    PerentHome();

    void where_home() override;
};

