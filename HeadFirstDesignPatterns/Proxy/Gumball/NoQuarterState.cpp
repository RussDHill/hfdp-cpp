#include "stdafx.h"
#include "NoQuarterState.h"
#include "GumballMachine.h"

NoQuarterState::NoQuarterState(GumballMachine* machine)
	:gumballMachine(machine)
{

}

NoQuarterState::~NoQuarterState()
{

}

void NoQuarterState::insertQuarter()
{
	cout << "You inserted a quarter" << endl;
	gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::dispense()
{
	cout << "You need to pay first" << endl;
}

string NoQuarterState::toString() const
{
	ostringstream result;
	result << "waiting for quarter" << endl;
	return result.str();
}