#include "hotelroom.h"

HotelRoom::HotelRoom() {
    std::cin >> id >> number_house >> floor >> count_room >> street;
}

HotelRoom::HotelRoom(int id, int number_house, int floor, int count_room, std::string street) {
    this->id = id;
    this->number_house = number_house;
    this->floor = floor;
    this->count_room = count_room;
    this->street = street;
}

HotelRoom::HotelRoom(const HotelRoom& object) {
    id = object.id;
    number_house = object.number_house;
    floor = object.floor;
    count_room = object.count_room;
    street = object.street;
}

void HotelRoom::where_home() {
    std::cout << "Street " << street
        << " home " << number_house
        << " floor " << floor << std::endl;
}

HotelRoom::~HotelRoom() {

}

std::istream& operator >>(std::istream& in, HotelRoom& x) {
    in >> x.id >> x.number_house >> x.floor >> x.count_room >> x.street;
    return in;
}

std::ostream& operator <<(std::ostream& out, HotelRoom& x) {

    out << "id\t\t" << x.id
        << "\nnumber room\t" << x.number_house
        << "\nfloor\t\t" << x.floor
        << "\ncount rooms\t" << x.count_room
        << "\nstreet\t\t" << x.street << "\n-----------\n";

    return out;
}

bool operator == (HotelRoom& l, HotelRoom& r) {
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