#pragma once

#include "IFace.h"

class GumballMachine;

class SoldOutState : public State  
{
public:
	string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	SoldOutState(shared_ptr<GumballMachine> machine);
	virtual ~SoldOutState();
private:
	weak_ptr<GumballMachine> gumballMachine;

	DISABLE_COPY_AND_ASSIGN(SoldOutState)
};
