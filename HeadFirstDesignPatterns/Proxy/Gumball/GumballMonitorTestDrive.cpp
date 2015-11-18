// GumballMonitorTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "GumballMachineRemote.h"

int main(int argc, char* argv[])
{
	long status;

	GumballMachineRemote gumballMachineRemote[2] = {"localhost", "192.168.1.108"}; 
								
	status = gumballMachineRemote[0].report();

	if (status) {
		exit(status);
	}

	status = gumballMachineRemote[1].report();

	if (status) {
		exit(status);
	}

	return 0;
}
