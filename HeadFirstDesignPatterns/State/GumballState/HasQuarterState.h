#pragma once

#include "IFace.h"

class GumballMachine;

class HasQuarterState : public State  
{
public:
	string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	HasQuarterState(shared_ptr<GumballMachine> machine);
	virtual ~HasQuarterState();
private:
	weak_ptr<GumballMachine> gumballMachine;

	DISABLE_COPY_AND_ASSIGN(HasQuarterState)
};
