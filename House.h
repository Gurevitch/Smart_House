#pragma once
#include <string>
#include <string.h>
#include <iostream>

using namespace std;
class House
{
private:

public:
	string Housename;
	House() {};
	House(string username) {Housename = username;}

	void GetHouseName() { cout << Housename << "'s house" << endl; };


};

