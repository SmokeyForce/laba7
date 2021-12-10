#include "PC.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
PC::PC() {
	cout << "PC created" << endl;
}
PC::~PC() {
	cout << "PC destroyed" << endl;
}
void PC::connectSystemUnit(SystemUnit* unit) {
	cout << "System Unit " + unit->brand + " " + unit->model + " is connected" << endl;
}
void PC::connectMonitor(Monitor* monitor) {
	cout << "Device " + monitor->brand + " " + monitor->model + " is connected" << endl;
}
void PC::connectMouse(Mouse* mouse) {
	cout << "Device " + mouse->getFullName() + " is connected" << endl;
}
void PC::connectGamingMouse(GamingMouse* gmouse) {
	cout << "Device " + gmouse->getFullName() + " is connected" << endl;
}