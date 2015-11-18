#include "stdafx.h"
#include "HottubOffCommand.h"
#include "Hottub.h"

HottubOffCommand::HottubOffCommand(shared_ptr<Hottub> hottub)
	:commandHottub(hottub)
{
	
}

HottubOffCommand::~HottubOffCommand()
{

}

void HottubOffCommand::execute()
{
	commandHottub->cool();
	commandHottub->hottubOff();
}
