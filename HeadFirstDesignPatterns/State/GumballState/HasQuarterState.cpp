#include "stdafx.h"
#include "HasQuarterState.h"
#include "GumballMachine.h"

HasQuarterState::HasQuarterState(shared_ptr<GumballMachine> machine)
	:gumballMachine(machine)
{

}

HasQuarterState::~HasQuarterState()
{

}

void HasQuarterState::insertQuarter()
{
	cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter()
{
	cout << "Quarter returned" << endl;
	shared_ptr<GumballMachine> machine = gumballMachine.lock();
	machine->setState(machine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	cout << "You turned..." << endl;
	shared_ptr<GumballMachine> machine = gumballMachine.lock();
	machine->setState(machine->getSoldState());
}

void HasQuarterState::dispense()
{
	cout << "No gumball dispensed" << endl;
}

string HasQuarterState::toString() const
{
	ostringstream result;
	result << "waiting for turn of crank" << endl;
	return result.str();
}