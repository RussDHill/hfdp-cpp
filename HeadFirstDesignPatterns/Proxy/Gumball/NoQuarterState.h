#pragma once

#include "IFace.h"

class GumballMachine;

class NoQuarterState : public State  
{
public:
	virtual string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	NoQuarterState(GumballMachine* machine);
	virtual ~NoQuarterState();
private:
	GumballMachine* gumballMachine;

	DISABLE_COPY_AND_ASSIGN(NoQuarterState)
};
