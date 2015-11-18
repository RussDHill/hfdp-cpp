#pragma once

class State;

class GumballMachine  
{
public:
	string getStateString() const;
	string toString() const;
	State* getWinnerState();
	State* getSoldState();
	State* getHasQuarterState();
	State* getNoQuarterState();
	State* getSoldOutState();
	State* getState();
	void setState(State* state);
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
	State* winnerState;
	State* soldOutState;
	State* noQuarterState;
	State* hasQuarterState;
	State* soldState;
	State* state;
	int count;
	string location;

	GumballMachine(const GumballMachine&); 
	GumballMachine& operator=(const GumballMachine&);
};
