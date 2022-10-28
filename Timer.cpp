#include "Timer.h"
#include <stdlib.h>
#include <iostream>
#include "windows.h"
using namespace std;
void Timer::Clock(int hours, int minutes)
{
	while (Thours <= hours && Tminutes <= minutes )
	{
		system("cls");
		cout << Thours << " : " << Tminutes << " : " << Tseconds << endl;
		Tseconds++;
		if (Tseconds == 60)
		{
			Tminutes++;
			Tseconds = 0;
			if (Tminutes == 60)
			{
				Thours++;
				Tminutes = 0;
				if (Thours == 24)
				{
					Tseconds = 0;
					Tminutes = 0;
					Thours = 0;
				}
			}
		}
		Sleep(1);
	}
}

void Timer::GetTime(int hours , int minutes, int seconds)
{
	cout << "the time remain is:" << endl << hours - Thours << " : " << minutes - Tminutes << " : " << seconds - Tseconds << endl;
	return;
}
