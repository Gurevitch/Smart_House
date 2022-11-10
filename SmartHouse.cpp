#include <iostream>
#include "Room.h"
#include "Kitchen.h"
#include <thread>
#include "LivingRoom.h"
#include "Elevator.h"
using namespace std;

int main()
{
	char room;
	int quit = 0;
	cout << "hello there," << endl<<"welcome to my smart house, plesase choose the room you want to go."<<endl;
	while (!quit)
	{
		cin >> room;
		switch (room)
		{
			case 'k'://kitchen
			{
				//Kitchen* l = Kitchen::getInstance(); // Ok
				break;
			}
			case 'l'://livingroom
			{
				//LivingRoom* l = LivingRoom::getInstance(); // Ok
				break;
			}
			case'e'://elevator
			{
				//Elevator* e = Elevator::getInstance(); // Ok
				break;
			}
			case'q':
			{
				quit = 1;
				break;
			}
			default:
			{
				//LivingRoom* l = LivingRoom::getInstance(); // should be the same unit as the other option4
				break;
			}
		}
	}
}