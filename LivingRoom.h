#pragma once
#include "Room.h"
#include <string>
#include <vector>

class LivingRoom:public Room,public ElectricityItem
{
private:
	string UserLivingroom;

	bool TVstatus = false;
	short TVchannel;
	//const short LivingRoomFloor = 2;
	map<string, int> m_TVChannels;

public:
	void ChooseChannel(short TvChannel);
	void ChangeTVMode(bool TVchannel);
	void TvChannels();
	void AddChannel(string name, int channel);
	void ActionOfTheItems();


};

