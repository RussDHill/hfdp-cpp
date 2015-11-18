#include "stdafx.h"
#include "TVOnCommand.h"
#include "TV.h"

TVOnCommand::TVOnCommand(shared_ptr<TV> tv)
	:commandTV(tv)
{

}

TVOnCommand::~TVOnCommand()
{

}

void TVOnCommand::execute() {
	commandTV->on();
	commandTV->setInputChannel();
}

void TVOnCommand::undo() {
	commandTV->off();
}
