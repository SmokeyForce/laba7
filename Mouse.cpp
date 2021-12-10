#include "Mouse.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
Mouse::Mouse() : Mouse(4, "Brand", "Model") {
	
}
Mouse::~Mouse() {
	cout << "Device \"" << this->getFullName() << "\" was disconected" << endl;
}
Mouse::Mouse(int _numOfButtons, string _brand, string _model) {
	numOfButtons = _numOfButtons;
	brand = _brand;
	model = _model;
	cout << "Device \"" << this->getFullName() << "\" was connected" << endl;
}
void Mouse::setMouseInfo(int _numOfButtons, string _colour, string _backlight) {
	numOfButtons = _numOfButtons;
	colour = _colour;
	backlight = _backlight;
}
void Mouse::selfDescribe()
{
	cout << "It's device " << this->getFullName() << endl;
}