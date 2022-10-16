#include "Room.h"

string Room::LightConverter(bool LightMode)
{
    if (LightMode)
        return "turn on";
    else
        return "turn off";   
}
