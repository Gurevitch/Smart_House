#pragma once
#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include<functional>
using namespace std;
class Timer
{
private:
	int Tseconds = 0;
	int Tminutes = 0;
	int Thours = 0;
	int Ttime=0;

public:
    Timer() {};

	void TimerForwards();
	void TimerBackWards();
};

