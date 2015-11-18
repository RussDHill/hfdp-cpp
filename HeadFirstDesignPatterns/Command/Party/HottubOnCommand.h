#pragma once

#include "IFace.h"

class Hottub;

class HottubOnCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	HottubOnCommand(shared_ptr<Hottub> hottub);
	virtual ~HottubOnCommand();
private:
	shared_ptr<Hottub> commandHottub;

	DISABLE_COPY_AND_ASSIGN(HottubOnCommand)
};
