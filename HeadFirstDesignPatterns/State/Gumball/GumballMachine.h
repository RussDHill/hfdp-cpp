#pragma once

class GumballMachine  
{
public:
	string toString() const;
	void refill(int numGumBalls);
	void dispense();
	void turnCrank();
	void ejectQuarter();
	void insertQuarter();
	GumballMachine(int gumballs);
	GumballMachine();
	virtual ~GumballMachine();
private:
	int state;
	int count;
	enum states { SOLD_OUT, NO_QUARTER, HAS_QUARTER, SOLD };

	GumballMachine(const GumballMachine&); 
	GumballMachine& operator=(const GumballMachine&);
};
