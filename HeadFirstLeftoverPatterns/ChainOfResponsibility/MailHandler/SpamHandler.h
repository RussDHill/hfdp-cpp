#pragma once

#include "Handler.h"

class SpamHandler : public Handler  
{
public:
	virtual void handleRequest(shared_ptr<Email> email);
	SpamHandler();
	virtual ~SpamHandler();
};
