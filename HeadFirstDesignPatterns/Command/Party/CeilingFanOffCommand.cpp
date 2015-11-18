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
	prevSpeed = commandCeilingFan->getSpeed();
	commandCeilingFan->off();
}

void CeilingFanOffCommand::undo()
{
	switch (prevSpeed)
	{
		case CeilingFan::HIGH:
			commandCeilingFan->high();
			break;
		case CeilingFan::MEDIUM:
			commandCeilingFan->medium(); 
			break;
		case CeilingFan::LOW:
			commandCeilingFan->low(); 
			break;
		default:
			commandCeilingFan->off();
			break;
	}
}
