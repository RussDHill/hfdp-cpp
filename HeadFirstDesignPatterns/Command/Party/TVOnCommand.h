#pragma once

#include "IFace.h"

class TV;

class TVOnCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	TVOnCommand(shared_ptr<TV> tv);
	virtual ~TVOnCommand();
private:
	shared_ptr<TV> commandTV;

	DISABLE_COPY_AND_ASSIGN(TVOnCommand)
};
