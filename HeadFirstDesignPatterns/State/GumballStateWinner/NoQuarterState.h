#pragma once

#include "IFace.h"

class GumballMachine;

class NoQuarterState : public State  
{
public:
	string toString();
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	NoQuarterState(shared_ptr<GumballMachine> machine);
	virtual ~NoQuarterState();
private:
	weak_ptr<GumballMachine> gumballMachine;

	DISABLE_COPY_AND_ASSIGN(NoQuarterState)
};
