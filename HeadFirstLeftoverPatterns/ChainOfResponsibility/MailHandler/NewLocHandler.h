#pragma once

#include "Handler.h"

class NewLocHandler : public Handler  
{
public:
	virtual void handleRequest(shared_ptr<Email> email);
	NewLocHandler();
	virtual ~NewLocHandler();
};
