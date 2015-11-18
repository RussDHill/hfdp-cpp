#include "stdafx.h"
#include "CeilingFanMediumCommand.h"
#include "CeilingFan.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(shared_ptr<CeilingFan> ceilingFan)
	:commandCeilingFan(ceilingFan)
{

}

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{

}

void CeilingFanMediumCommand::execute()
{
	prevSpeed = commandCeilingFan->getSpeed();
	commandCeilingFan->medium();
}

void CeilingFanMediumCommand::undo()
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

