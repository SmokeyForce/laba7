#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include "Devices.h"
#include "Monitor.h"
#include "SystemUnit.h"
#include "Mouse.h"
#include "GamingMouse.h"
class SystemUnit;
class Devices;
class Monitor;
class Mouse;
class GamingMouse;
class PC : public SystemUnit,public Devices
{
	PC();
	~PC();
	void connectMonitor(Monitor* monitor);
	void connectSystemUnit(SystemUnit* unit);
	void connectMouse(Mouse* mouse);
	void connectGamingMouse(GamingMouse* gmouse);
};

