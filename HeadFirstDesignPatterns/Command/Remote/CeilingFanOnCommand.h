#pragma once

#include "IFace.h"

class CeilingFan;

class CeilingFanOnCommand : public Command  
{
public:
	virtual void execute();
	CeilingFanOnCommand(shared_ptr<CeilingFan> ceilingFan);
	virtual ~CeilingFanOnCommand();
private:
	shared_ptr<CeilingFan> commandCeilingFan;

	DISABLE_COPY_AND_ASSIGN(CeilingFanOnCommand)
};

