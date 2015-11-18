#pragma once

#include "IFace.h"

class GumballMachine;

class SoldState : public State  
{
public:
	string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	SoldState(shared_ptr<GumballMachine> machine);
	virtual ~SoldState();
private:
	weak_ptr<GumballMachine> gumballMachine;

	DISABLE_COPY_AND_ASSIGN(SoldState)
};
