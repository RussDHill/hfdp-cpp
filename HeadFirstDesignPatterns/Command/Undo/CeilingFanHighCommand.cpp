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

