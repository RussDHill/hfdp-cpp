#pragma once

#include "IFace.h"

class GumballMachine;

class SoldOutState : public State  
{
public:
	virtual string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	SoldOutState(GumballMachine* machine);
	virtual ~SoldOutState();
private:
	GumballMachine* gumballMachine;

	DISABLE_COPY_AND_ASSIGN(SoldOutState)
};
