#include "Devices.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
Devices::Devices() : Devices("Brand", "Model",100) {
	cout << "Device \"" << this->getFullName() << "\" was connected" << endl;
}
Devices::~Devices() {
	cout << "Device \"" << this->getFullName() << "\" was disconected" << endl;
}
Devices::Devices(string _brand,string _model,int _price){
	cout << "Device \"" << this->getFullName() << "\" was connected" << endl;
}
void Devices::setInfo(string _brand) {
	brand = _brand;
}
void Devices::setInfo(string _brand,string _model, int _price) {
	brand = _brand;
	model = _model;
	price = _price;
}
string Devices::getFullName() {
	return this->brand + " " + this->model;
}