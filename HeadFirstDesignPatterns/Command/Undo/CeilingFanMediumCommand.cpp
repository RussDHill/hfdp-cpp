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
