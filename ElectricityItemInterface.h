#pragma once
#include <string>
using namespace std;
class ElectricityItem
{
private:
	bool m_isPowerON = false;
	string m_name;
	//list of items in the house?

public:
	ElectricityItem() {};
	ElectricityItem(string name) 
	{
		this->m_name = name;
	}
	void SwitchPowerMode() 
	{
		m_isPowerON = !m_isPowerON;
	}
	void ActionOfTheItems() {};
};