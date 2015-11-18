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
