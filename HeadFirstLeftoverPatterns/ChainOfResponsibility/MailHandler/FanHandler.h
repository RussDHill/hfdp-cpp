#pragma once

#include "Handler.h"

class FanHandler : public Handler  
{
public:
	virtual void handleRequest(shared_ptr<Email> email);
	FanHandler();
	virtual ~FanHandler();
};
