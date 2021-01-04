#include "house.h"
#include "hotelroom.h"
#include "perenthome.h"

#include <iostream>

int main() {
    House ob_house;
    HotelRoom ob_hotelroom;
    PerentHome ob_perenthome;

    std::cin >> ob_house;
    std::cin >> ob_hotelroom;
    std::cin >> ob_perenthome;

    std::cout << ob_house << ob_hotelroom << ob_perenthome;

    return 0;
}