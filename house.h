#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include <iostream>
#include "perenthome.h"

class House : PerentHome {
private:
    int id;
    int number_house;
    int square;
    int floor;
    int count_room;
    std::string street;

    friend std::istream& operator >>(std::istream& in, House& x);
    friend std::ostream& operator <<(std::ostream& out, House& x);
    friend bool operator == (House& l, House& r);
public:
    House();
    House(int id, int number_house, int square, int floor, int count_room, std::string street);
    House(const House& object);
    
    void where_home() override;

    ~House();
};

#endif // HOUSE_H
