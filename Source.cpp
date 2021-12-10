#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <time.h>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include "Monitor.h"
#include "SystemUnit.h"
#include "Driver.h"
#include "Devices.h"
#include "Mouse.h"
#include "GamingMouse.h"
#include "PC.h"
#include "Math.h"
using namespace std;

int main() 
{
	srand(time(NULL));
	//task 5 static and dynamic objects
	Mouse mouse1;
	GamingMouse gmouse1;
	Monitor monitor1, monitor2, monitor3, monitor4, monitor5;
	SystemUnit unit1, unit2, unit3, unit4, unit5;
	Monitor* dynamicMonitor1 = new Monitor();
	Monitor* dynamicMonitor2 = new Monitor();
	Monitor* dynamicMonitor3 = new Monitor();
	Monitor* dynamicMonitor4 = new Monitor();
	Monitor* dynamicMonitor5 = new Monitor();
	SystemUnit* dynamicUnit1 = new SystemUnit();
	SystemUnit* dynamicUnit2 = new SystemUnit();
	SystemUnit* dynamicUnit3 = new SystemUnit();
	SystemUnit* dynamicUnit4 = new SystemUnit();
	SystemUnit* dynamicUnit5 = new SystemUnit();
	//task 6 2 mass of objects
	Monitor monitors[5];
	SystemUnit units[5];
	monitors[0] = monitor1; monitors[1] = monitor2;
	monitors[2] = monitor3; monitors[3] = monitor4;
	monitors[4] = monitor5;
	units[0] = unit1; units[1] = unit2;
	units[2] = unit3; units[3] = unit4;
	units[4] = unit5;
	Monitor* dynamicMonitors[5];
	SystemUnit* dynamicUnits[5];
	dynamicMonitors[0] = dynamicMonitor1; dynamicMonitors[1] = dynamicMonitor2;
	dynamicMonitors[2] = dynamicMonitor3; dynamicMonitors[3] = dynamicMonitor4;
	dynamicMonitors[4] = dynamicMonitor5;
	dynamicUnits[0] = dynamicUnit1; dynamicUnits[1] = dynamicUnit2;
	dynamicUnits[2] = dynamicUnit3; dynamicUnits[3] = dynamicUnit4;
	dynamicUnits[4] = dynamicUnit5;
	//task 7-8 demonstr of work
	for (int i = 0; i < 5; i++) // set info of monitor
	{
		monitors[i].setInfo("Acer", "x203w", 100, rand() % 50 + 100);
		monitors[i].setResolution(1650, 1050, 20);
		monitors[i].setOtherInfo(144, 4);
		dynamicMonitors[i]->setInfo("Acer", "x203w", 100,rand() % 50 + 100);
		dynamicMonitors[i]->setResolution(1650, 1050, 20);
		dynamicMonitors[i]->setOtherInfo(144, 4);
	}
	Monitor monitor = monitors[1];
	monitor.writeInfoInFile();
	Monitor anotherMonitor = Monitor::readInfoFromFile();
	anotherMonitor.show();
	for (int i = 0;i < 5;i++)
	{
		units[i].setUnitInfo("Papucious", "Vinnytsya", 100, "black", "mid-tower");
		units[i].setComponents("asusgromyako", "intelcorei14.1", 32);
		dynamicUnits[i]->setUnitInfo("Papucious", "Vinnytsya", 100, "black", "mid-tower");
		dynamicUnits[i]->setComponents("asusgromyako", "intelcorei14.1", 32);
	}
	SystemUnit unit = units[1];
	unit.writeUnitInfoInFile();
	SystemUnit anotherUnit = SystemUnit::readUnitInfoFromFile();
	anotherUnit.showUnit();
	unit.connectMonitor(dynamicMonitor1);
	Driver driver;
	driver.setDriver(&monitor,&unit);
	Mouse* dada = new Mouse(4, "Razer", "Deathhadder");
	Devices *pdevice;
	pdevice = new GamingMouse;
	pdevice->selfDescribe();
	delete pdevice;
	pdevice = new Mouse;
	pdevice->selfDescribe();
	delete pdevice;
	pdevice = new Monitor;
	pdevice->selfDescribe();
	delete pdevice;
	pdevice = &monitor;
	pdevice->selfDescribe();
	pdevice = (Devices*)&mouse1;
	pdevice->selfDescribe();
	pdevice = (Devices*)&gmouse1;
	pdevice->selfDescribe();
	Mouse mouse;
	GamingMouse gmouse;
	Devices* ptr;
	ptr = &mouse;
	ptr->selfDescribe();
	ptr = &gmouse;
	ptr->selfDescribe();
	ptr = &monitor;
	ptr->selfDescribe();
	try
	{
		driver.instalDriver("");
	}
	catch(exception e)
	{
		cout << e.what();
	}
	unit1 + 2;
	unit2 - 2;
	unit3 * 3;
	unit1 += 2;
	unit2 -= 2;
	unit3 *= 3;
	unit1[4] = 1;
	cout << "---------------------------------------------------------------------" << endl;
	cout << Math<int>::dil(25, 5);
	cout << "---------------------------------------------------------------------" << endl;
	vector<Monitor*> monik;
	vector<Mouse*> mous;
	monik.reserve(5);
	for (int i = 0; i <= 5; i++)
	{
		Monitor* mt = new Monitor("Brand" + std::to_string(i), "Model" + std::to_string(i));
		monik.push_back(mt);
	}
	for (int i = 0; i <= 5; i++)
	{
		Mouse* ms = new Mouse(4, "Razer" + std::to_string(i), "Deathhadder" + std::to_string(i));
		mous.push_back(ms);
	}
	Monitor* item = monik[3];
	for (vector<Monitor*>::iterator mt = monik.begin(); mt != monik.end(); mt++)
	{
		cout << (*(mt))->model;
	}

	list<Mouse*> list_mouse;
	for (int i = 0; i <= 5; i++)
	{
		Mouse* st = new Mouse(4, "Razer" + std::to_string(i), "Deathhadder" + std::to_string(i));
		list_mouse.push_front(st);
	}
	cout << "/***list**/" << endl;
	for (list<Mouse*>::iterator it = list_mouse.begin(); it != list_mouse.end(); it++)
	{

		cout << (**it).colour << endl;
	}
	list<Mouse*>::iterator it = list_mouse.begin();
	for (int i = 0; i < 4; i++)
	{
		it++;
	}

	random_shuffle(monik.begin(), monik.end());
	cout << "/***vector after random_shuffle*/" << endl;
	for (Monitor* mt : monik)
	{
		cout << (*mt).brand << endl;
	}
	deque<Monitor*> deque_st;
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			deque_st.push_back(monik[i]);
		}
		else deque_st.push_front(monik[i]);
	}
	cout << "/**deque***/" << endl;
	for (Monitor* mt : deque_st)
	{
		cout << (*mt).brand << endl;
	}
	set<Monitor*> set_mt;
	for (int i = 0; i < 6; i++)
	{
		set_mt.insert(monik[i]);
	}
	cout << "/**set***/" << endl;
	for (Monitor* mt : set_mt)
	{
		cout << (*mt).brand << endl;
	}
	multiset<Monitor*> mset_mt;
	for (int i = 0; i < 6; i++)
	{
		mset_mt.insert(monik[i]);
	}
	cout << "/**multiset***/" << endl;
	for (Monitor* mt : mset_mt)
	{
		cout << (*mt).brand << endl;
	}
	map<Monitor*, Mouse*> map_mm;
	list<Mouse*>::iterator lit = list_mouse.begin();
	for (int i = 0; i < 6; i++)
	{
		map_mm[monik[i]] = mous[i];
	}
	cout << "/**map***/" << endl;
	for (auto mst : map_mm)
	{
		cout << "Monitor " << (*(mst.first)).brand << "-> Mouse " << (*(mst.second)).colour << endl;
	}
	multimap<Monitor*, Mouse*> mmap_mm;
	list<Mouse*>::iterator lit1 = list_mouse.begin();
	for (int i = 0; i < 6; i++)
	{
		mmap_mm.insert(pair<Monitor*, Mouse*>(monik[i], mous[i]));
	}
	cout << "/**multimap***/" << endl;
	for (auto mst : mmap_mm)
	{
		cout << "Monitor " << (*(mst.first)).brand << "-> Mouse " << (*(mst.second)).colour << endl;
	}
	stack<Monitor*> stack_mt;
	for (int i = 0; i < 6; i++)
	{
		stack_mt.push(monik[i]);
	}
	cout << "/**stack***/" << endl;
	while (!stack_mt.empty())
	{
		cout << (*(stack_mt.top())).brand << endl;
		stack_mt.pop();
	}
	queue<Monitor*> queue_mt;
	for (int i = 0; i < 6; i++)
	{
		queue_mt.push(monik[i]);
	}
	cout << "/**queue***/" << endl;
	while (!queue_mt.empty())
	{
		cout<<(*(queue_mt.front())).brand << endl;
		queue_mt.pop();
	}
	priority_queue<Monitor*> pqueue_mt;
	for (int i = 0; i < 6; i++)
	{
		pqueue_mt.push(monik[i]);
	}
	cout << "/**priority_queue***/" << endl;
	while (!pqueue_mt.empty())
	{
		cout << (*(pqueue_mt.top())).brand << endl;
		pqueue_mt.pop();
	}
	reverse(monik.begin(), monik.end());
	for (Monitor* m : monik)
	{
		cout << m->brand << " ";
	}
	//task 9 dynamic memory
	int* array = monitor.allocRandomMemory();
	for (int i = 0; i < 5; i++)
	{
		array[i] = monitors[i].getNumber();
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (array[j] < array[i])swap(array[i], array[j]);
		}
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	//task 10
	Monitor* pointerMonitor = &monitor;
	pointerMonitor->show();
}