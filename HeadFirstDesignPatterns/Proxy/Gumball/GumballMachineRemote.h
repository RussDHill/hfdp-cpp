#pragma once

class GumballMachineRemote  
{
public:
	void SetLocation(const string& location);
	long report();
	GumballMachineRemote(const string& location);
	GumballMachineRemote();
	virtual ~GumballMachineRemote();
private:
	string remoteLocation;
};
