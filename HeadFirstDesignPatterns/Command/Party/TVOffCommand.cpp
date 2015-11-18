#include "stdafx.h"
#include "TVOffCommand.h"
#include "TV.h"

TVOffCommand::TVOffCommand(shared_ptr<TV> tv)
	:commandTV(tv)
{

}

TVOffCommand::~TVOffCommand()
{

}

void TVOffCommand::execute() {
	commandTV->off();
}

void TVOffCommand::undo() {
	commandTV->on();
}
