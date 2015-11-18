#pragma once

#include "IFace.h"

class Hottub;

class HottubOnCommand : public Command  
{
public:
	virtual void execute();
	HottubOnCommand(shared_ptr<Hottub> hottubIn);
	virtual ~HottubOnCommand();
private:
	shared_ptr<Hottub> commandHottub;

	DISABLE_COPY_AND_ASSIGN(HottubOnCommand)
};

