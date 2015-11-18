#include "stdafx.h"
#include "CeilingFanOnCommand.h"
#include "CeilingFan.h"

CeilingFanOnCommand::CeilingFanOnCommand(shared_ptr<CeilingFan> ceilingFan)
	:commandCeilingFan(ceilingFan)
{

}

CeilingFanOnCommand::~CeilingFanOnCommand()
{

}

void CeilingFanOnCommand::execute()
{
	commandCeilingFan->high();
}
