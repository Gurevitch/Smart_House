#include "Kitchen.h"
#include "windows.h"
#include <string.h>
#include <iostream>
#include <thread>

using namespace std;

void Kitchen::CheckTimer(int Timer)
{
	cout << "Prepering oven";
	Sleep(Timer);
}
void Kitchen::UseOven(bool _oven, int _temp, int _timer)
{
	_oven = true;
	Tempreture = _temp;
	Timer = _timer;
	//thread CheckTimer(Timer);
	//CheckTimer.join();
	cout << " turning the oven on, the temp will rise to " << Tempreture << " for " << Timer << "seconds" << endl;
	return;
}

