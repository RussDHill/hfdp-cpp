#include "stdafx.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFan.h"

CeilingFanHighCommand::CeilingFanHighCommand(shared_ptr<CeilingFan> ceilingFan)
	:commandCeilingFan(ceilingFan)
{

}

CeilingFanHighCommand::~CeilingFanHighCommand()
{

}

void CeilingFanHighCommand::execute()
{
	prevSpeed = commandCeilingFan->getSpeed();
	commandCeilingFan->high();
}

void CeilingFanHighCommand::undo()
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

