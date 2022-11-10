#pragma once
#include "Room.h"
#include <iostream>
#include "Timer.h"
#include "windows.h"
#include <string.h>
#include <thread>

using namespace std;
class Kitchen :public Room,public ElectricityItem
{
private:

	string UserKitchen;
	bool m_isOvenOn=false;
	//const short KitchenFloor = 1;
	int m_temp;
public:

	void SetRoomName() {};
	void CheckTimer();
	void UseOven(int _temp);
	bool CheckOvenStatus(bool Oven) { return Oven; }
	void ActionOfTheItems();
	void SwitchOvenMode();
};

