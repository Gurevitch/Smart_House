#pragma once
#include "Room.h"
#include <string>
#include <vector>

class LivingRoom:public Room
{
private:
	string UserLivingroom;

	bool TVstatus = false;
	short TVchannel;
	const short LivingRoomFloor = 2;
	bool LivRoomLight = false;
	/* Here will be the instance stored. */
	static LivingRoom* instance;

	/* Private constructor to prevent instancing. */
	LivingRoom();

public:

	/* Static access method. */
	static LivingRoom* getInstance();

	//LivingRoom(string _Username) { UserLivingroom = _Username + "'s Living Room"; };
	void SetRoomName(string Username) { UserLivingroom = Username + "'s Kitchen"; };/*from Room.h*/
	void SetRoomName() { UserLivingroom = Username + "'s Kitchen"; };
	void SetLightMode(bool LightMode) { LivRoomLight = LightMode; };
	bool SwitchTheLight(bool LightMode);
	void ChooseChannel(short TvChannel);
	void ChangeTVMode(bool TVchannel);

};

