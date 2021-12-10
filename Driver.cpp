#include "Driver.h"
#include <iostream>
#include <fstream>
#include <string>

void Driver::setDriver(Monitor* monitor, SystemUnit* unit)
{
	cout << "Drivers for " + unit->brand + " " + unit->model + "and " + monitor->brand + " " + monitor->model + " is installed";
	unit->connectMonitor (monitor);
}
Driver::Driver() : name("driver"), date("11.11.11")
{
	cout << this->name << "is created"<<endl;
}
void Driver::instalDriver(string _name)
{
	string s = "This driver " + this->name + " is installed";
	if (this->name == "")
	{
		throw std::exception("gg");
	}
}