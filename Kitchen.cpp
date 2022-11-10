#include "Kitchen.h"

using namespace std;

void Kitchen::CheckTimer()
{
	cout << "Prepering oven"<<endl;
	Timer tmr1;
	std::thread first(&Timer::TimerBackWards, ref(tmr1));
	first.join();

	SwitchOvenMode();
}
void Kitchen::UseOven(int _temp)
{
	try {
		if (_temp > 50)
		{
			SwitchOvenMode();
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

void Kitchen::ActionOfTheItems()
{
	cout << "enter the tempriture for the oven" << endl;
	cin >> m_temp;
	UseOven(m_temp);
}

void Kitchen::SwitchOvenMode()
{
	m_isOvenOn = !m_isOvenOn;
}
