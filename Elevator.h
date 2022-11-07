#pragma once
#include "House.h"


class Elevator: public House
{
private:
	bool DoesDoorIsClose=true;
	/* Here will be the instance stored. */
	static Elevator* instance;

	/* Private constructor to prevent instancing. */
	Elevator();
public:

	/* Static access method. */
	static Elevator* getInstance();

	static short floor;

	void GetFloor(short floor);
	void CallElevator(short Elevatorfloor,short Roomfloor);
	void OpenDoor();
};

