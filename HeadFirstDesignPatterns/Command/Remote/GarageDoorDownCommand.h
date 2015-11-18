#pragma once

#include "IFace.h"

class GarageDoor;

class GarageDoorDownCommand : public Command  
{
public:
	virtual void execute();
	GarageDoorDownCommand(shared_ptr<GarageDoor> garageDoor);
	virtual ~GarageDoorDownCommand();
private:
	shared_ptr<GarageDoor> commandGarageDoor;

	DISABLE_COPY_AND_ASSIGN(GarageDoorDownCommand)
};

