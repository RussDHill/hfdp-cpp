#include "stdafx.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFan.h"

CeilingFanOffCommand::CeilingFanOffCommand(shared_ptr<CeilingFan> ceilingFan)
	:commandCeilingFan(ceilingFan)
{

}

CeilingFanOffCommand::~CeilingFanOffCommand()
{

}

void CeilingFanOffCommand::execute()
{
	commandCeilingFan->off();
}
