#include "stdafx.h"
#include "HottubOnCommand.h"
#include "Hottub.h"

HottubOnCommand::HottubOnCommand(shared_ptr<Hottub> hottub)
	:commandHottub(hottub)
{

}

HottubOnCommand::~HottubOnCommand()
{

}

void HottubOnCommand::execute()
{
	commandHottub->hottubOn();
	commandHottub->setTemperature(104);
	commandHottub->circulate();
}

void HottubOnCommand::undo() {
	commandHottub->hottubOff();
}
