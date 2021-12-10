#include "GamingMouse.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
GamingMouse::GamingMouse() : GamingMouse(4, "Brand", "Model") {
	cout << "Device \"" << this->getFullName() << "\" was connected" << endl;
}
GamingMouse::~GamingMouse() {
	cout << "Device \"" << this->getFullName() << "\" was disconected" << endl;
}
GamingMouse::GamingMouse(int _numOfButtons, string _brand, string _model) {
	cout << "Device \"" << this->getFullName() << "\" was connected" << endl;
}
void GamingMouse::setWeights(int _numOfWeights) {
	numOfWeights = _numOfWeights;
}
void GamingMouse::selfDescribe()
{
	cout << "It's device " << this->getFullName() << endl;
}
