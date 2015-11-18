#pragma once

#include "IFace.h"

class GumballMachine;

class WinnerState : public State  
{
public:
	string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	WinnerState(shared_ptr<GumballMachine> machine);
	virtual ~WinnerState();
private:
	weak_ptr<GumballMachine> gumballMachine;

	DISABLE_COPY_AND_ASSIGN(WinnerState)
};
