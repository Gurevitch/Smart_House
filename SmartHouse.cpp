#include <iostream>
#include "Room.h"
#include "Kitchen.h"
using namespace std;
int main()
{
    cout << "Hello World!\n";

    Kitchen room1("Roii");
    cout <<room1.GetRoomName()<<endl;
    room1.SetLightMode(true);
    cout <<room1.GetLightMode() << endl;

}

/*
TBD
Rooms:
-kitchen:light,name,oven
-livingroom:name,light,TV
-frontdoor:lock

-start func to run all the rooms together
front GUI
*/
