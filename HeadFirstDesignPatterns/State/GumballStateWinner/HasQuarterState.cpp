#include "stdafx.h"
#include "HasQuarterState.h"
#include "GumballMachine.h"

HasQuarterState::HasQuarterState(shared_ptr<GumballMachine> machine)
	:gumballMachine(machine)
{
	srand(static_cast<unsigned int>(time(0)));
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
	int winner = rand() % 10;
	shared_ptr<GumballMachine> machine = gumballMachine.lock();
	if ((winner == 0) && (machine->getCount() > 1)) {
		machine->setState(machine->getWinnerState());
	} else {
		machine->setState(machine->getSoldState());
	}
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