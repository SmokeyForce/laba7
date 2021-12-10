#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include "Mouse.h"
class GamingMouse : public Mouse
{
protected:
	int numOfWeights;
public:
	GamingMouse();
	virtual ~GamingMouse();
	GamingMouse(int, string, string);
	void setWeights(int _numOfWeights);
	void selfDescribe();
};

