#include "stdafx.h"
#include "GarageDoorDownCommand.h"
#include "GarageDoor.h"

GarageDoorDownCommand::GarageDoorDownCommand(shared_ptr<GarageDoor> garageDoor)
	:commandGarageDoor(garageDoor)
{
	
}

GarageDoorDownCommand::~GarageDoorDownCommand()
{

}

void GarageDoorDownCommand::execute()
{
	commandGarageDoor->down();
}
