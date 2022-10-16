#pragma once
#include <string.h>
#include <iostream>

using namespace std;

class Room
{
private:
	bool LightMode;

public:
	
	string Username;
	Room();
	Room(string _roomname)
	{
		Username = _roomname;
		LightMode = false;
	}
	virtual void SetRoomName(string Username) = 0;
	virtual void SetLightMode(bool LightMode) = 0;


	//void SetLightMode(bool LM)
	//{
	//	LightMode = LM;
	//}
	string LightConverter(bool LightMode);
};

