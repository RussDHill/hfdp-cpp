#include "stdafx.h"
#include "GumballMonitor.h"
#include "GumballMachine.h"

GumballMonitor::GumballMonitor(shared_ptr<GumballMachine> machine)
	:machine(machine)
{

}

GumballMonitor::~GumballMonitor()
{

}

void GumballMonitor::report() 
{
	cout << endl << "Gumball Machine: " << machine->getLocation();
	cout << endl << "Current inventory: " << machine->getCount() << " gumball";
	if (machine->getCount() != 1) {
		printf("s");
	}
	cout << endl << "Current state:  " << machine->getState()->toString() << endl;
}