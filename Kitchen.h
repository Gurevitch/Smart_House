#pragma once
#include "Room.h"
#include <iostream>
#include "Timer.h"
using namespace std;
class Kitchen :public Room
{
private:

	string UserKitchen;
	bool Oven=false;
	int Tempreture;
	int Timer;
	bool LightMode = false;
	int KitchHour = 0;
	int kitchMinutes = 0;
	int KitchSeconds = 0;

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

	void CheckTimer(int KitchHour, int TimerMinutes);
	void UseOven(bool _oven, int _temp, int _timer);
};

