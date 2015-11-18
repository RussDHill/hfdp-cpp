#pragma once

#include "IFace.h"

class GumballMachine;

class WinnerState : public State  
{
public:
	virtual string toString() const;
	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
	WinnerState(GumballMachine* machine);
	virtual ~WinnerState();
private:
	GumballMachine* gumballMachine;

	DISABLE_COPY_AND_ASSIGN(WinnerState)
};
