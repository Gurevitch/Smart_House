#include "Elevator.h"
#include <iostream>
#include "windows.h"
#include "Enum.h"

/* Null, because instance will be initialized on demand. */
Elevator* Elevator::instance = 0;
//Ctor
Elevator::Elevator()
{}

Elevator* Elevator::getInstance()
{
	if (instance == 0)
	{
		instance = new Elevator();
	}

	return instance;
}


void Elevator::GetFloor(short floor)
{
	bool status;
	cout << "elevator is at floor :" << floor << endl << " Do you want to call the elevator?"<<endl;
	cout << " choose yes or no" << endl;
	cin >> status;
	if (status == CallForElevator::yes)
		CallElevator(floor, 1);
		
}
void Elevator::CallElevator(short Elevatorfloor,short Roomfloor)
{
	try {
		if (Elevatorfloor == Roomfloor)
			throw 9;
		if (Roomfloor < 0 || Roomfloor>3)
			throw 90;
		if (Elevatorfloor < Roomfloor)
		{
			cout << "goin up!" << endl;
			for (int i = Elevatorfloor; i <= Roomfloor; i++)
			{
				cout << "Elevator is in floor :" << i << endl;
			}
			cout << "Elevator is here" << endl;
			OpenDoor();
		}
		else
		{
			cout << "goin down!" << endl;
			for (int i = Elevatorfloor; i >= Roomfloor; i--)
			{
				cout << "Elevator is in floor :" << i << endl;
			}
			cout << "Elevator is here" << endl;
			OpenDoor();

		}
	}
	catch (int x)
	{
		if (x == 9)
		{
			cout << "no need to call the elevator because you are i the same floor, i will open the door instade" << endl;
			OpenDoor();
		}
		if(x ==90)
			cout << "floor is not valid." << endl;
	}
}

void Elevator::OpenDoor()
{
	if (DoesDoorIsClose)
	{
		cout << "opening the door for 5 seconds" << endl;
		DoesDoorIsClose = false;
		Sleep(5);
		DoesDoorIsClose = true;
		cout << "door is closing " << endl;
	}
}
