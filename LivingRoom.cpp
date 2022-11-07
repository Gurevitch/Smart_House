#include "LivingRoom.h"
#include "Enum.h"

/* Null, because instance will be initialized on demand. */
LivingRoom* LivingRoom::instance = 0;

//Ctor
LivingRoom::LivingRoom()
{}

LivingRoom* LivingRoom::getInstance()
{
	if (!instance)
	{
		instance = new LivingRoom();
	}

	return instance;
}
bool LivingRoom::SwitchTheLight(bool LightMode)
{
	if (!LivRoomLight)
		return LivRoomLight = true;
	return LivRoomLight = false;
}

void LivingRoom::ChangeTVMode(bool TVchannel)
{
	if (!TVchannel)
		TVchannel = true;
	else
		TVchannel = false;
}

void LivingRoom::ChooseChannel(short TvChannel)
{
	int channel;
	try
	{
		if (TVstatus == false)
			throw 10;
		cout << "you can choose the channel you want to watch" << endl;
		//for (auto x : TvChannelMap[MAX_TvChannelMap])
		for(int i=0;i< std::numeric_limits<enum TvChannelMap>::max();i++)
		{
			cout << i << endl;
		}
		cin >> channel;
	}
	catch (int x)
	{
		if (x == 10)
		{
			int  status;
			cout << "you cant choose the channel if the TV is closed.. you want to turn it first?"
				<< endl << "1 =yes " << endl << "2=no" << endl;
			cin >> status;
			if (status == 1)
				ChangeTVMode(TVstatus);
		}
	}
}

