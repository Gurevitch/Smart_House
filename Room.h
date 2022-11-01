#pragma once
#include <string.h>
#include <iostream>
#include "House.h"
using namespace std;

class Room:public House
{
private:
	bool LightMode=false;

public:
	
	string Username;
	Room()
	{
		LightMode = false;
	}
	virtual void SetRoomName(string Username) = 0;
	virtual void SetLightMode(bool LightMode) = 0;

	string LightConverter(bool LightMode);
};

