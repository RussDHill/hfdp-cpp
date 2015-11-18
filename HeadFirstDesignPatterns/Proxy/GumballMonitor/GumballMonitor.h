#pragma once

class GumballMachine;

class GumballMonitor  
{
public:
	void report();
	GumballMonitor(shared_ptr<GumballMachine> gumballMachine);
	GumballMonitor();
	virtual ~GumballMonitor();
private:
	shared_ptr<GumballMachine> machine;

	GumballMonitor(const GumballMonitor&); 
	GumballMonitor& operator=(const GumballMonitor&);
};
