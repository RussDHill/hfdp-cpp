#include "stdafx.h"
#include "WinnerState.h"
#include "GumballMachine.h"

WinnerState::WinnerState(GumballMachine* machine)
	:gumballMachine(machine)
{

}

WinnerState::~WinnerState()
{

}

void WinnerState::insertQuarter()
{
	cout << "Please wait, we're already giving you a gumball" << endl;
}

void WinnerState::ejectQuarter()
{
	cout << "Sorry, you already turned the crank" << endl;
}

void WinnerState::turnCrank()
{
	cout << "Turning twice doesn't get you another gumball!" << endl;
}

void WinnerState::dispense()
{
	cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << endl;
	gumballMachine->releaseBall();
	if (gumballMachine->getCount() == 0) {
		gumballMachine->setState(gumballMachine->getSoldOutState());
	} else {
		gumballMachine->releaseBall();
		if (gumballMachine->getCount() > 0) {
			gumballMachine->setState(gumballMachine->getNoQuarterState());
		} else {
			cout << "Oops, out of gumballs!" << endl;
			gumballMachine->setState(gumballMachine->getSoldOutState());
		}
	}
}

string WinnerState::toString() const
{
	ostringstream result;
	result << "despensing two gumballs for your quarter, because YOU'RE A WINNER!" << endl;
	return result.str();
}