#pragma once

#include "IFace.h"

class GumballMachine;

class HasQuarterState : public State  
{
public:
	virtual string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	HasQuarterState(GumballMachine* machine);
	virtual ~HasQuarterState();
private:
	GumballMachine* gumballMachine;

	DISABLE_COPY_AND_ASSIGN(HasQuarterState)
};
