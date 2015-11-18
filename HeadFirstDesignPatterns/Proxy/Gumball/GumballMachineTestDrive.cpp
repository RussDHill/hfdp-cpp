// GumballMachineTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "GumballRemote_h.h"
#include "GumballMachine.h"

GumballMachine* gumballMachine = NULL;

void getLocation(unsigned char* location)
{
	lstrcpy((char*)location, gumballMachine->getLocation().c_str());
}

void getCount(short* count)
{
	short i = gumballMachine->getCount();
	*count = i;
}

void getStateString(unsigned char* stateString)
{
	lstrcpy((char*)stateString, gumballMachine->getStateString().c_str());
}

int main(int argc, char* argv[])
{
	if (argc < 2) {
		cout << "GumballMachine <name> <inventory>" << endl;
 		exit(1);
	}

	char location[MAX_PATH] = {0};
	int count = atoi(argv[2]);

	lstrcpy(location, argv[1]);

	gumballMachine = new GumballMachine(location, count);

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	printf(gumballMachine->toString().c_str());

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	printf(gumballMachine->toString().c_str());

	RPC_STATUS status;

	// Uses the protocol combined with the endpoint for receiving
	// remote procedure calls.
	status = RpcServerUseProtseqEp(
		reinterpret_cast<unsigned char*>("ncacn_ip_tcp"), // Use TCP/IP protocol.
		RPC_C_PROTSEQ_MAX_REQS_DEFAULT, // Backlog queue length for TCP/IP.
		reinterpret_cast<unsigned char*>("4747"), // TCP/IP port to use.
		NULL); // No security.

	if (status) {
		exit(status);
	}

	// Registers the GumballRemote interface.
	status = RpcServerRegisterIf(
		GumballRemote_v1_0_s_ifspec, // Interface to register.
		NULL, // Use the MIDL generated entry-point vector.
		NULL); // Use the MIDL generated entry-point vector.

	if (status) {
		exit(status);
	}

	// Start to listen for remote procedure calls for all registered interfaces.
	// This call will not return until RpcMgmtStopServerListening is called.
	status = RpcServerListen(
		1, // Recommended minimum number of threads.
		RPC_C_LISTEN_MAX_CALLS_DEFAULT, // Recommended maximum number of threads.
		FALSE); // Start listening now.

	if (status) {
		exit(status);
	}

	return 0;
}

void __RPC_FAR *__RPC_API midl_user_allocate ( size_t len )
{
	return malloc(len);
}

void __RPC_API midl_user_free( void __RPC_FAR *ptr )
{
	free(ptr);
}
  