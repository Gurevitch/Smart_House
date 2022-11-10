#include "LivingRoom.h"
#include "Enum.h"

void LivingRoom::ChangeTVMode(bool TVchannel)
{
	TVchannel = !TVchannel;
}

void LivingRoom::TvChannels()
{
	m_TVChannels.insert(pair<string, int>("Kan11",    11));
	m_TVChannels.insert(pair<string, int>("keshet12", 12));
	m_TVChannels.insert(pair<string, int>("reshet13", 13));
	m_TVChannels.insert(pair<string, int>("channel14",14));
	m_TVChannels.insert(pair<string, int>("sport1",   51));
	m_TVChannels.insert(pair<string, int>("sport2",   52));
	m_TVChannels.insert(pair<string, int>("sport5",   55));
}

void LivingRoom::AddChannel(string name, int channel)
{
	if(m_TVChannels.find(name) != m_TVChannels.end())
		m_TVChannels.insert(pair<string, int>(name, channel));
}

void LivingRoom::ActionOfTheItems()
{
	int TvChannel;
	cout << "want to watch TV? so chhose the channel" << endl;
	cin >> TvChannel;
	ChooseChannel(TvChannel);
}

void LivingRoom::ChooseChannel(short TvChannel)
{
	int channel;
	try
	{
		if (TVstatus == false)
			throw 10;
		cout << "you can choose the channel you want to watch" << endl;
		for(int i=0;i< m_TVChannels.size() ;i++)
		{
			cout << i << endl;
		}
		cin >> channel;
		//add streaming timer. will return the time of watch when turn off
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

