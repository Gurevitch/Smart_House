#include "House.h"

void House::addRoom(Room room)
{
	m_rooms.push_back(room);
	//room.SetHouse(*this);
}

//void House::SetHouse(House house)
//{
//    this->m_house = house;
//}
