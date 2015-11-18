#pragma once

class GumballMachine;

class GumballMonitor  
{
public:
	void report();
	GumballMonitor(GumballMachine* gumballMachine);
	GumballMonitor();
	virtual ~GumballMonitor();
private:
	GumballMachine* machine;
};
