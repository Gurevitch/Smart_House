#pragma once
#include "Room.h"
#include <iostream>

using namespace std;
class Kitchen :public Room
{

private:

	string UserKitchen;
	bool Oven=false;
	int Tempreture;
	int Timer;
	bool LightMode = false;

public:
	Kitchen()
	{
		UserKitchen = Username+"'s Kitchen";	
	}
	void SetRoomName(string Username) {};/*from Room.h*/
	void SetRoomName() { UserKitchen = UserKitchen; };
	void SetLightMode(bool LM) { LightMode = LM; }
	string GetRoomName() { return UserKitchen; }
	string GetLightMode() { return LightConverter(LightMode); }

	void CheckTimer(int Timer);
	void UseOven(bool _oven, int _temp, int _timer);
};

