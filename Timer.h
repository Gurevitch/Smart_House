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
    thread th;

public:
    typedef chrono::milliseconds Interval;
    typedef function<void(void)> Timeout;
	bool running = false;
    Timer() {};
	//~Timer();

	void TimerForwards();
	void TimerBackWards();
	void GetTime(int hours, int minutes, int seconds);
    void start(const Interval& interval, const Timeout& timeout);
    void stop();
};

