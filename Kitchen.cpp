#include "Kitchen.h"

using namespace std;

void Kitchen::CheckTimer()
{
	cout << "Prepering oven"<<endl;
	Timer tmr1;
	std::thread first(&Timer::TimerBackWards, ref(tmr1));
	first.join();
	thread second(&(Timer::TimerForwards), ref(tmr1));
	second.join();
	

	TurnOvenOff();
}
void Kitchen::UseOven(int _temp)
{
	TurnOvenOn();
	cout << " turning the oven on, the temp will rise to " << Tempreture << "now choose to timer for the oven" << endl;
	Tempreture = _temp;
	CheckTimer();

}
void Kitchen::TurnOvenOn()
{
	Oven = true;
}
void Kitchen::TurnOvenOff()
{
	Oven = false;
}

