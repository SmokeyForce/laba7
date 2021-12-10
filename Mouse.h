#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include "Devices.h"
using namespace std;
class Mouse : public Devices
{
protected:
	int numOfButtons;
	string backlight;
public:
	string colour;
	Mouse();
	Mouse(int, string, string);
	virtual ~Mouse();
	void setMouseInfo(int _numOfButtons, string _colour, string _backlight);
	void selfDescribe();
};

