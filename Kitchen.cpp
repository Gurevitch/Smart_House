#include "Kitchen.h"
#include "windows.h"
#include <string.h>
#include <iostream>
#include <thread>

using namespace std;

void Kitchen::CheckTimer(int KitchHour,int TimerMinutes)
{
	cout << "Prepering oven";
	thread ThreadOven (&Timer::Clock, KitchHour, TimerMinutes);
	//ThreadOven.join();
	//Sleep(Timer);
}
void Kitchen::UseOven(bool _oven, int _temp, int _timer)
{
	_oven = true;
	Tempreture = _temp;
	kitchMinutes = _timer;

	if (kitchMinutes > 60)
	{
		KitchHour = kitchMinutes % 60;
		while (kitchMinutes >= 60)
		{
			kitchMinutes -= 60;
			if (kitchMinutes == 60)
			{
				kitchMinutes = 0;
				break;
			}
		}
	}
	CheckTimer(KitchHour,kitchMinutes);
	cout << " turning the oven on, the temp will rise to " << Tempreture << " for " << Timer << "seconds" << endl;

	return;
}

