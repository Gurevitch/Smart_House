#include "Kitchen.h"

using namespace std;


/* Null, because instance will be initialized on demand. */
Kitchen* Kitchen::instance = 0;
//Ctor
Kitchen::Kitchen()
{}

Kitchen* Kitchen::getInstance()
{
	if (instance == 0)
	{
		instance = new Kitchen();
	}

	return instance;
}
void Kitchen::CheckTimer()
{
	cout << "Prepering oven"<<endl;
	Timer tmr1;
	std::thread first(&Timer::TimerBackWards, ref(tmr1));
	first.join();

	TurnOvenOff();
}
void Kitchen::UseOven(int _temp)
{
	try {
		if (_temp > 50)
		{
			TurnOvenOn();
			cout << " turning the oven on, the temp will rise to " << _temp << "now choose to timer for the oven" << endl;
			CheckTimer();
		}
		else
			throw 99;
	}
	catch (int x)
	{
		cout << "There is no point in turn on the oven for this, error :" << x << endl;
	}
}
void Kitchen::TurnOvenOn()
{
	Oven = true;
}
void Kitchen::TurnOvenOff()
{
	Oven = false;
}

