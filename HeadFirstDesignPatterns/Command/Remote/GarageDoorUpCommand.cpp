#include "stdafx.h"
#include "GarageDoorUpCommand.h"
#include "GarageDoor.h"


GarageDoorUpCommand::GarageDoorUpCommand(shared_ptr<GarageDoor> garageDoor)
	:commandGarageDoor(garageDoor)
{

}

GarageDoorUpCommand::~GarageDoorUpCommand()
{

}

void GarageDoorUpCommand::execute()
{
	commandGarageDoor->up();
}
