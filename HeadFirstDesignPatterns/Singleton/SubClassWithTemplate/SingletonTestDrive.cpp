// SingletonTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HotterSingleton.h"
#include "CoolerSingleton.h"
#include "Singleton.h"

int main(int argc, char* argv[])
{
	shared_ptr<CoolerSingleton> foo = CoolerSingleton::getInstance();
	shared_ptr<HotterSingleton> bar = HotterSingleton::getInstance();
	foo->setValue(5);
	bar->setValue(10);
	cout << foo->getValue() << endl;
	cout << bar->getValue() << endl;
	shared_ptr<CoolerSingleton> foo2 = CoolerSingleton::getInstance();
	cout << foo2->getValue() << endl;

	return 0;
}

