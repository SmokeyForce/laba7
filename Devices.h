#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Devices
{
protected:
	string brand;
	string model;
	int price;
public:
	Devices();
	Devices(string, string,int);
	virtual ~Devices();
	void setInfo(string _brand);
	void setInfo(string _brand, string _model, int _price);
	string getFullName();
	virtual void selfDescribe() = 0;
};

