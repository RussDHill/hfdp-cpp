#pragma once

#include "IFace.h"

class GarageDoor;

class GarageDoorOpenCommand : public Command  
{
public:
	void execute();
	GarageDoorOpenCommand(shared_ptr<GarageDoor> garageDoor);
	virtual ~GarageDoorOpenCommand();
private:
	shared_ptr<GarageDoor> commandGarageDoor;

	GarageDoorOpenCommand(const GarageDoorOpenCommand&); 
	GarageDoorOpenCommand& operator=(const GarageDoorOpenCommand&);
};
