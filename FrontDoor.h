#pragma once
#include "House.h"
using namespace std;
class FrontDoor:public House
{
private:
	int CodeForDoor;
	bool DoorStatus;

public:
	FrontDoor() 
	{ 
		DoorStatus = true; 
		CodeForDoor = 1111;//default code
	}

	void GetDoorStatus(bool DoorStatus);
	void SetCodeForDoor(int _codefordoor) { CodeForDoor = _codefordoor; }
	void RestartDoorCode();

};

