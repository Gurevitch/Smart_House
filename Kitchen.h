#pragma once
#include "Room.h"
#include <iostream>
#include "Timer.h"
#include "windows.h"
#include <string.h>
#include <thread>
using namespace std;
class Kitchen :public Room
{
private:

	string UserKitchen;
	bool Oven=false;
	bool LightMode = false;
	const short KitchenFloor = 1;
	
	/* Here will be the instance stored. */
	static Kitchen* instance;

	/* Private constructor to prevent instancing. */
	Kitchen();
public:

	
	/* Static access method. */
	static Kitchen* getInstance();

	void SetRoomName(string Username) { UserKitchen = Username + "'s Kitchen"; };/*from Room.h*/
	void SetRoomName() { UserKitchen = Username + "'s Kitchen"; };
	
	void SetLightMode(bool LM) { LightMode = LM; }
	string GetRoomName() { return UserKitchen; }
	string GetLightMode() { return LightConverter(LightMode); }

	void CheckTimer();
	void UseOven(int _temp);
	void TurnOvenOn();
	void TurnOvenOff();
	bool CheckOvenStatus(bool Oven) { return Oven; }
};

