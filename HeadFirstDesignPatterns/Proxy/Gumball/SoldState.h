#pragma once

#include "IFace.h"

class GumballMachine;

class SoldState : public State  
{
public:
	virtual string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	SoldState(GumballMachine* machine);
	virtual ~SoldState();
private:
	GumballMachine* gumballMachine;

	DISABLE_COPY_AND_ASSIGN(SoldState)
};
