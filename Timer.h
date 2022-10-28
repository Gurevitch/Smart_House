#pragma once
#include <thread>
#include <string>
using namespace std;
class Timer
{
private:
	int Tseconds = 0;
	int Tminutes = 0;
	int Thours = 0;

public:
	Timer() noexcept{};
	~Timer();

	void Clock(int hours,int minutes);
	void GetTime(int hours, int minutes, int seconds);
};

