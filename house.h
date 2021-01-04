#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include <iostream>

class House {
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
    ~House();

};

#endif // HOUSE_H
