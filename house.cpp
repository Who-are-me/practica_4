#include "house.h"

House::House() {
    id = 0;
    number_house = 0;
    square = 0;
    floor = 0;
    count_room = 0;
    street = "";
}

House::House(int id, int number_house, int square, int floor, int count_room, std::string street) {
    this->id = id;
    this->number_house = number_house;
    this->square = square;
    this->floor = floor;
    this->count_room = count_room;
    this->street = street;
}

House::House(const House& object) {
    id = object.id;
    number_house = object.number_house;
    square = object.square;
    floor = object.floor;
    count_room = object.count_room;
    street = object.street;
}

House::~House() {

}

std::istream& operator >>(std::istream& in, House& x) {

    in >> x.id >> x.number_house >> x.square >> x.floor >> x.count_room >> x.street;

    return in;
}

std::ostream& operator <<(std::ostream& out, House& x) {

    out << "id\t\t" << x.id
        << "\nnumber room\t" << x.number_house
        << "\nsquare\t\t" << x.floor
        << "\ncount rooms\t" << x.count_room
        << "\nstreet\t\t" << x.street << "\n-----------\n";

    return out;
}

bool operator == (House& l, House& r) {

    bool res = false;

    if (l.id == r.id && 
        l.number_house == r.number_house && 
        l.floor == r.floor && 
        l.count_room == r.count_room && 
        l.street == r.street) 
    {
        res = true;
    }

    return res;
}
