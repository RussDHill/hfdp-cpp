#include "stdafx.h"
#include "SoldState.h"
#include "GumballMachine.h"

SoldState::SoldState(shared_ptr<GumballMachine> machine)
	:gumballMachine(machine)
{

}

SoldState::~SoldState()
{

}

void SoldState::insertQuarter()
{
	cout << "Please wait, we're already giving you a gumball" << endl;
}

void SoldState::ejectQuarter()
{
	cout << "Sorry, you already turned the crank" << endl;
}

void SoldState::turnCrank()
{
	cout << "Turning twice doesn't get you another gumball!" << endl;
}

void SoldState::dispense()
{
	shared_ptr<GumballMachine> machine = gumballMachine.lock();
	machine->releaseBall();
	if (machine->getCount() > 0) {
		machine->setState(machine->getNoQuarterState());
	} else {
		cout << "Oops, out of gumballs!" << endl;
		machine->setState(machine->getSoldOutState());
	}
}

string SoldState::toString() const
{
	ostringstream result;
	result << "dispensing a gumball" << endl;
	return result.str();
}