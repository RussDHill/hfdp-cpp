#include "stdafx.h"
#include "HasQuarterState.h"
#include "GumballMachine.h"

HasQuarterState::HasQuarterState(GumballMachine* machine)
	:gumballMachine(machine)
{
	srand(time(0));
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
	gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	cout << "You turned..." << endl;
	int winner = rand() % 10;
	if ((winner == 0) && (gumballMachine->getCount() > 1)) {
		gumballMachine->setState(gumballMachine->getWinnerState());
	} else {
		gumballMachine->setState(gumballMachine->getSoldState());
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
