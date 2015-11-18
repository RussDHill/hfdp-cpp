#include "stdafx.h"
#include "CeilingFanLowCommand.h"
#include "CeilingFan.h"

CeilingFanLowCommand::CeilingFanLowCommand(shared_ptr<CeilingFan> ceilingFan)
	:commandCeilingFan(ceilingFan)
{

}

CeilingFanLowCommand::~CeilingFanLowCommand()
{

}

void CeilingFanLowCommand::execute()
{
	prevSpeed = commandCeilingFan->getSpeed();
	commandCeilingFan->low();
}

void CeilingFanLowCommand::undo()
{
	if (prevSpeed == CeilingFan::HIGH) {
		commandCeilingFan->high();
	} else if (prevSpeed == CeilingFan::MEDIUM) {
		commandCeilingFan->medium();
	} else if (prevSpeed == CeilingFan::LOW) {
		commandCeilingFan->low();
	} else if (prevSpeed == CeilingFan::OFF) {
		commandCeilingFan->off();
	}	
}
