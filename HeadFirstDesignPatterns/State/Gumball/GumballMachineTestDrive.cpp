// GumballMachineTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GumballMachine.h"

int main(int argc, char* argv[])
{
	shared_ptr<GumballMachine> gumballMachine(new GumballMachine(5));

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->ejectQuarter();
	gumballMachine->turnCrank();

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->ejectQuarter();

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	printf(gumballMachine->toString().c_str());

	return 0;
}

