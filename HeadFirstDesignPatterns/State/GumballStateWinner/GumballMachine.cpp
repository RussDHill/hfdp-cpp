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

}

GumballMachine::GumballMachine(int numberGumballs)
	:count(numberGumballs)
{

}

GumballMachine::~GumballMachine()
{

}

void GumballMachine::initialise()
{
	soldOutState.reset(new SoldOutState(this->shared_from_this()));
	noQuarterState.reset(new NoQuarterState(this->shared_from_this()));
	hasQuarterState.reset(new HasQuarterState(this->shared_from_this()));
	soldState.reset(new SoldState(this->shared_from_this()));
	winnerState.reset(new WinnerState(this->shared_from_this()));

	if (count > 0) {
		state = noQuarterState;
	} else {
		state = soldOutState;
	}
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

void GumballMachine::setState(shared_ptr<State> state) 
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

shared_ptr<State> GumballMachine::getState() 
{
    return state;
}

shared_ptr<State> GumballMachine::getSoldOutState() 
{
    return soldOutState;
}

shared_ptr<State> GumballMachine::getNoQuarterState() 
{
    return noQuarterState;
}

shared_ptr<State> GumballMachine::getHasQuarterState() 
{
    return hasQuarterState;
}

shared_ptr<State> GumballMachine::getSoldState() 
{
    return soldState;
}
 
shared_ptr<State> GumballMachine::getWinnerState() 
{
    return winnerState;
}
 
string GumballMachine::toString() const
{
	ostringstream result;
	result << endl << "Mighty Gumball, Inc.";
	result << endl << "C++ enabled Standing Gumball Model #2004";
	result << "Inventory: " << count << " gumball";
	if (count != 1) {
		result << "s";
	}
	result << endl << "Machine is " << state->toString() << endl;

	return result.str();
}