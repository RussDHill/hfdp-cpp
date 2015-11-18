#include "stdafx.h"

#include "GumballRemote_h.h"
#include "GumballMachineRemote.h"

GumballMachineRemote::GumballMachineRemote(const string& location)
	:remoteLocation(location)
{

}

GumballMachineRemote::GumballMachineRemote()
{

}

GumballMachineRemote::~GumballMachineRemote()
{

}

long GumballMachineRemote::report()
{
	RPC_STATUS status = RPC_S_OK;

	unsigned char* stringbinding = NULL;

	TCHAR location[MAX_PATH] = {0};
	lstrcpy(location, remoteLocation.c_str());

	status = RpcStringBindingCompose(NULL, // UUID to bind to.
		reinterpret_cast<unsigned char*>("ncacn_ip_tcp"), // Use TCP/IP protocol.
		reinterpret_cast<unsigned char*>(location), // TCP/IP network address to use.
		reinterpret_cast<unsigned char*>("4747"), // TCP/IP port to use.
		NULL, // Protocol dependent network options to use.
		&stringbinding); // String binding output.

	if (status) {
		return (long)status;
	}

	status = RpcBindingFromStringBinding(stringbinding, &gumballRemoteBinding);

	if (status) {
		return (long)status;
	}

	unsigned char buffer[256];
	short count;
				  
	RpcTryExcept
	{
		getLocation(buffer);
		cout << buffer << endl;

		getCount(&count);
		cout << count << endl;

		getStateString(buffer);
		cout << buffer << endl;

	}
	RpcExcept(1) {
 
		status = RpcExceptionCode();
		//printf("RpcExceptionCode=%lu\n", status);
		cout << "RpcExceptionCode=" << status << endl;

	} RpcEndExcept

	RpcBindingFree(&gumballRemoteBinding);

	return (long)status;
}

void GumballMachineRemote::SetLocation(const string& location)
{
	this->remoteLocation = location;
}

void __RPC_FAR * __RPC_API midl_user_allocate(size_t len)
{
    return(malloc(len));
}

void __RPC_API midl_user_free(void __RPC_FAR * ptr)
{
    free(ptr);
}
