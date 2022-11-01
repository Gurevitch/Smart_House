#include "Kitchen.h"


using namespace std;

void Kitchen::CheckTimer(int TimerHour,int TimerMinutes)
{
	cout << "Prepering oven"<<endl;
	int static Htimefromuser = TimerHour;
	int static Mtimefromuser = TimerMinutes;
	int static Hourtime = 0;
	int static Minutestime = 0;
	int static Secondstime = 0;
	int static counter = 0;
	//Timer tmr1;
	//tmr1.start(chrono::milliseconds(100),//1000
	//[] {cout << "Hello!" << endl;
	//system("cls");
	//cout << Hourtime << " : " << Minutestime << " : " << Secondstime << endl;
	//Secondstime++;
	//if (Secondstime == 60)
	//{
	//	Minutestime++;
	//	Secondstime = 0;
	//	if (Minutestime == 60)
	//	{
	//		Hourtime++;
	//		Minutestime = 0;
	//		if (Hourtime == 24)
	//		{
	//			Secondstime = 0;
	//			Minutestime = 0;
	//			Hourtime = 0;
	//		}
	//	}
	//}
	//	if (Minutestime == Mtimefromuser && Hourtime == Htimefromuser) 
	//	{
	//		//running = false;
	//		return;
	//	}
	//	cout << "testing :" << counter++ << endl;
	//});
	Timer tmr1;
	std::thread first(&Timer::TimerBackWards, ref(tmr1));
	first.join();
	thread second(&(Timer::TimerForwards), ref(tmr1));
	second.join();
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
	//CheckTimer(KitchHour,kitchMinutes);
	CheckTimer(0, 1);
	cout << " turning the oven on, the temp will rise to " << Tempreture << " for " << kitchMinutes << "seconds" << endl;

	return;
}

