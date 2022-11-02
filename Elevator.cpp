#include "Elevator.h"
#include <iostream>
#include "windows.h"
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
