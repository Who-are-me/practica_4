#include "perenthome.h"

PerentHome::PerentHome() {
    id = 0;
    number_house = 0;
    floor = 0;
    count_room = 0;
    street = "";
}

std::istream& operator >>(std::istream& in, PerentHome& x) {
    in >> x.id >> x.number_house >> x.floor >> x.count_room >> x.street;
    return in;
}

std::ostream& operator <<(std::ostream& out, PerentHome& x) {

    out << "id\t\t" << x.id
        << "\nnumber room\t" << x.number_house
        << "\nfloor\t\t" << x.floor
        << "\ncount rooms\t" << x.count_room
        << "\nstreet\t\t" << x.street << "\n-----------\n";

    return out;
}

bool operator == (PerentHome& l, PerentHome& r) {
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