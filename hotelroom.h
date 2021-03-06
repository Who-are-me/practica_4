#pragma once

#include <string>
#include <iostream>

#include "perenthome.h"

class HotelRoom : public PerentHome {
private:
	friend std::istream& operator >>(std::istream& in, HotelRoom& x);
	friend std::ostream& operator <<(std::ostream& out, HotelRoom& x);
	friend bool operator == (HotelRoom& l, HotelRoom& r);
public:
	HotelRoom();
	HotelRoom(int id, int number_house, int floor, int count_room, std::string street);
	HotelRoom(const HotelRoom& object);

	void where_home() override;

	~HotelRoom();
};

