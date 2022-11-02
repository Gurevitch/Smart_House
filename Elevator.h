#pragma once
#include "House.h"

class Elevator: public House
{
private:
	
	bool DoesDoorIsClose=true;
public:
	static short floor;

	Elevator();

	string GetFloor(short floor);
	void CallElevator(short Elevatorfloor,short Roomfloor);
	void OpenDoor();
};

