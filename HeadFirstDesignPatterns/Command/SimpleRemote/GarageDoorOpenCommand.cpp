#include "stdafx.h"
#include "GarageDoorOpenCommand.h"
#include "GarageDoor.h"


GarageDoorOpenCommand::GarageDoorOpenCommand(shared_ptr<GarageDoor> garageDoor)
	:commandGarageDoor(garageDoor)
{

}

GarageDoorOpenCommand::~GarageDoorOpenCommand()
{

}

void GarageDoorOpenCommand::execute()
{
	commandGarageDoor->up();
}
