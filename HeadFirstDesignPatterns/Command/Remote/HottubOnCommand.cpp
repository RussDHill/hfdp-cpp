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
	commandHottub->cool();
	commandHottub->hottubOn();
}
