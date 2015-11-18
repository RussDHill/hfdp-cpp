#include "stdafx.h"
#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "WinnerState.h"

GumballMachine::GumballMachine()
	:count(0)
{
	soldOutState = new SoldOutState(this);
	noQuarterState = new NoQuarterState(this);
	hasQuarterState = new HasQuarterState(this);
	soldState = new SoldState(this);
	winnerState = new WinnerState(this);
	state = soldOutState;
}

GumballMachine::GumballMachine(const string& machineLocation, int numberGumballs)
	:location(machineLocation), count(numberGumballs)
{
	soldOutState = new SoldOutState(this);
	noQuarterState = new NoQuarterState(this);
	hasQuarterState = new HasQuarterState(this);
	soldState = new SoldState(this);
	winnerState = new WinnerState(this);

	if (count > 0) {
		state = noQuarterState;
	}
}

GumballMachine::~GumballMachine()
{
	delete soldOutState;
	delete noQuarterState;
	delete hasQuarterState;
	delete soldState;
	delete winnerState;
}

void GumballMachine::insertQuarter()
{
	state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	state->turnCrank();
	state->dispense();
}

void GumballMachine::setState(State* state)
{
	this->state = state;
}

void GumballMachine::releaseBall()
{
	cout << "A gumball comes rolling out the slot..." << endl;
	if (count != 0) {
		count--;
	}
}

int GumballMachine::getCount() const
{
	return count;
}

void GumballMachine::refill(int count)
{
	this->count = count;
	state = noQuarterState;
}

string GumballMachine::getLocation() const
{
	return location;
}

string GumballMachine::getStateString() const
{
    return state->toString();
}

State* GumballMachine::getState()
{
    return state;
}

State* GumballMachine::getSoldOutState()
{
    return soldOutState;
}

State* GumballMachine::getNoQuarterState()
{
    return noQuarterState;
}

State* GumballMachine::getHasQuarterState()
{
    return hasQuarterState;
}

State* GumballMachine::getSoldState()
{
    return soldState;
}

State* GumballMachine::getWinnerState()
{
    return winnerState;
}
 
string GumballMachine::toString() const
{
	ostringstream result;
	result << endl << "Mighty Gumball, Inc." << endl << "C++ enabled Standing Gumball Model #2004";
	result << endl << "Inventory: " << count << " gumball";

	if (count != 1) {
		cout << "s";
	}
	result << endl << "Machine is " << state->toString() << endl << endl;

	return result.str();
}