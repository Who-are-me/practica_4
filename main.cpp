#include "house.h"
#include "hotelroom.h"
#include "perenthome.h"
#include "abstracthome.h"

#include <iostream>

int main() {
    PerentHome* array_houses = new PerentHome[4];

    for (int i = 0; i < 4; i++) {
        int check;

        std::cout << "House(0) or hotel(1)?\n";
        std::cin >> check;

        if (check) {
            array_houses[i] = HotelRoom();
        }
        else {
            array_houses[i] = House();
        }
    }

    for (int i = 0; i < 4; i++) {
        std::cout << array_houses[i];
        array_houses[i].where_home();
    }

    return 0;
}