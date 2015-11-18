#pragma once

#include "IFace.h"

class State;

class GumballMachine : public enable_shared_from_this<GumballMachine>
{
public:
	void initialise();
	string toString() const ;
	shared_ptr<State> getWinnerState();
	shared_ptr<State> getSoldState();
	shared_ptr<State> getHasQuarterState();
	shared_ptr<State> getNoQuarterState();
	shared_ptr<State> getSoldOutState();
	shared_ptr<State> getState();
	void setState(shared_ptr<State> state);
	void releaseBall();
	string getLocation() const;
	int getCount() const;
	void refill(int count);
	void turnCrank();
	void ejectQuarter();
	void insertQuarter();
	GumballMachine(const string& location, int numberGumballs);
	GumballMachine();
	virtual ~GumballMachine();
private:
	shared_ptr<State> winnerState;
	shared_ptr<State> soldOutState;
	shared_ptr<State> noQuarterState;
	shared_ptr<State> hasQuarterState;
	shared_ptr<State> soldState;
	shared_ptr<State> state;
	int count;
	string machineLocation;

	GumballMachine(const GumballMachine&); 
	GumballMachine& operator=(const GumballMachine&);
};
