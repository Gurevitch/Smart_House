#pragma once
#include <string>
#include <string.h>
#include <iostream>
#include "Room.h"
#include <list>
using namespace std;
class House
{
private:
	string m_houseName;
	list<Room> m_rooms;
public:
	House() {};
	House(string houseName) 
	{ 
		m_houseName = houseName;
	}
	void addRoom(Room room);
	void GetHouseName() { cout << m_houseName << "'s house" << endl; };
	void SetHouse(House house);
};

