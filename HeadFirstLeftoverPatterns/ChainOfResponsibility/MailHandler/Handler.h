#pragma once

#include "Email.h"

class Email;

class Handler  
{
public:
	virtual void handleRequest(shared_ptr<Email> email);
	void setSuccessor(Handler* handler);
	Handler();
	virtual ~Handler();
protected:
	Handler* successor;
};
