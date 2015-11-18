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
	commandHottub->setTemperature(98);
	commandHottub->hottubOff();
}

void HottubOffCommand::undo() {
	commandHottub->hottubOn();
}
