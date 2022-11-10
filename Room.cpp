#include "Room.h"

void Room::SwitchLightMode()
{
    m_isLightOn = !m_isLightOn;
}
//
//void Room::SetHouse(House house)
//{
//    this->m_house = house;
//}

void Room::AddItemToList(ElectricityItem elecitem)
{
    m_electricityitems[typeid(elecitem).name()] = elecitem;
}

template <typename T> T Room::GetItem()
{
    return m_electricityitems[typeid(T).name()];
}
