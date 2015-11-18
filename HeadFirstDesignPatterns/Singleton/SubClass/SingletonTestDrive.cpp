// SingletonTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HotterSingleton.h"
#include "CoolerSingleton.h"
#include "Singleton.h"

int main(int argc, char* argv[])
{
	CoolerSingleton* foo = (CoolerSingleton*)CoolerSingleton::getInstance();
	HotterSingleton* bar = (HotterSingleton*)HotterSingleton::getInstance();
	foo->setValue(5);
	bar->setValue(10);
	cout << foo->getValue() << endl;
	cout << bar->getValue() << endl;
	CoolerSingleton* foo2 = (CoolerSingleton*)CoolerSingleton::getInstance();
	cout << foo2->getValue() << endl;

	return 0;
}

