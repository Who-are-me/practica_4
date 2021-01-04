#pragma once

#include <string>
#include <iostream>

class PerentHome {
protected:
    int id;
    int number_house;
    int floor;
    int count_room;
    std::string street;

    friend std::istream& operator >>(std::istream& in, PerentHome& x);
    friend std::ostream& operator <<(std::ostream& out, PerentHome& x);
    friend bool operator == (PerentHome& l, PerentHome& r);
public:
    PerentHome();
};

