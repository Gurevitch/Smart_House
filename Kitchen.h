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
	int Tempreture;
	bool LightMode = false;


public:
	Kitchen(string _Username)
	{
		UserKitchen = _Username+"'s Kitchen";
	}
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

