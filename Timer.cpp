#include "Timer.h"
#include <stdlib.h>
#include <iostream>
#include "windows.h"
using namespace std;
void Timer::TimerForwards()
{
	int hours, minutes;
	cout << "Enter Minutes::";
	cin >> minutes;
	cout << "Enter hours::  ";
	cin >> hours;

	while (Thours <= hours && Tminutes < minutes )
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
	cout << "******************* \n time ended!" << endl << "Stoped at :" << Thours << " : "<<Tminutes <<endl
		<< "********************" << endl;
}
void Timer::TimerBackWards()
{
	do {
		cout << "Enter Seconds::  ";
		cin >> Tseconds;
	} while (Tseconds > 59);
	do {
		cout << "Enter Minutes::";
		cin >> Tminutes;

	} while (Tminutes > 59);

	Ttime = (Tminutes != 0) ? Tminutes * 60 : 0; 
	Ttime += Tseconds;

	for (int i = 0; i >0 ; i--)
	{
		system("cls");
		cout << "The time remaining is 0:" << Tminutes <<" : "
			<<Tseconds<< endl;
		Tminutes = (i % 60 == 0) ? --Tminutes : Tminutes;
		Tseconds = (Tseconds == 0) ? 59 : --Tseconds;
	
		system("TIMEOUT 1");
	}
	system("cls");
	cout << "******************* \n time ended!" << endl << "Last for :" << Ttime<<endl
		<<"********************"<<endl;
}
