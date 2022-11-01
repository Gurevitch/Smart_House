#include "Room.h"

string Room::LightConverter(bool LightMode)
{
    if (LightMode)
        return "turn on";
    return "turn off";   
}
