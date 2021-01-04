#include "house.h"
#include <iostream>

int main() {
    House ob1, ob2, ob3;

    std::cin >> ob1 >> ob2 >> ob3;

    if (ob1 == ob2) {
        std::cout << "\nob1 == ob2\n";
    }
    else {
        std::cout << "\nob1 != ob2\n";
    }

    std::cout << ob1 << ob2 << ob3;

    return 0;
}