#pragma once
#include <string.h>
#include <map>
#include <iostream>
//#include "House.h"
#include "ElectricityItemInterface.h"
using namespace std;


class Room
{
private:
	bool   m_isLightOn=false;
	short  m_floor;
	string m_roomName;
	map<string ,ElectricityItem> m_electricityitems;
public:

	Room(short floor,string name) 
	{
		this->m_floor = floor;
		this->m_roomName = name;
	};
	void SwitchLightMode();
	//void SetHouse(House house);
	void AddItemToList(ElectricityItem elecitem);
	template <typename T> T GetItem();
};

