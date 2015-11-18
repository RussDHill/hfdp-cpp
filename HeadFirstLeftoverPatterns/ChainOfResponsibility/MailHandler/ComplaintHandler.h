#pragma once

#include "Handler.h"

class ComplaintHandler : public Handler  
{
public:
	virtual void handleRequest(shared_ptr<Email> email);
	ComplaintHandler();
	virtual ~ComplaintHandler();
};
