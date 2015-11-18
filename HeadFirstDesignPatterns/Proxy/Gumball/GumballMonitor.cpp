#include "stdafx.h"
#include "GumballMonitor.h"
#include "GumballMachine.h"

GumballMonitor::GumballMonitor(GumballMachine* gumballMachine)
	:machine(gumballMachine)
{

}

GumballMonitor::GumballMonitor()
{

}

GumballMonitor::~GumballMonitor()
{

}

void GumballMonitor::report() 
{
	string str = "\nGumball Machine: " + machine->getLocation() + "\nCurrent inventory: ";
	char buffer[80] = {0};
	sprintf(buffer, "%i", machine->getCount());
	str += buffer;
	str += " gumball";
	if (machine->getCount() != 1) {
		str += "s";
	}
	str += "\nCurrent state:  ";
	str += machine->getState()->toString();
	str += "\n";
	printf(str.c_str());
}