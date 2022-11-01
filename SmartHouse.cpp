#include <iostream>
#include "Room.h"
#include "Kitchen.h"
#include <thread>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    
    Kitchen room1("Roii");
    room1.UseOven(true, 170, 2);

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
