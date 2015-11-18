#pragma once

#include "IFace.h"

class Command;

class SimpleRemoteControl  
{
public:
	void buttonWasPressed();
	void setCommand(shared_ptr<Command> command);
	SimpleRemoteControl();
	virtual ~SimpleRemoteControl();
private:
	shared_ptr<Command> slot;

	SimpleRemoteControl(const SimpleRemoteControl&); 
	SimpleRemoteControl& operator=(const SimpleRemoteControl&);
};
