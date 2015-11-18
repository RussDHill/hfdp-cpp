#pragma once

#include "IFace.h"

class GarageDoor;

class GarageDoorUpCommand : public Command  
{
public:
	virtual void execute();
	GarageDoorUpCommand(shared_ptr<GarageDoor> garageDoor);
	virtual ~GarageDoorUpCommand();
private:
	shared_ptr<GarageDoor> commandGarageDoor;

	DISABLE_COPY_AND_ASSIGN(GarageDoorUpCommand)
};

