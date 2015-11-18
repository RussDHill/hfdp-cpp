// GumballMonitorTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GumballMachine.h"
#include "GumballMonitor.h"

int main(int argc, char* argv[])
{
	shared_ptr<GumballMachine> gumballMachine(new GumballMachine("London", 5));
	gumballMachine->initialise();

	shared_ptr<GumballMonitor> monitor(new GumballMonitor(gumballMachine));

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	printf(gumballMachine->toString().c_str());

	monitor->report();

	return 0;
}

