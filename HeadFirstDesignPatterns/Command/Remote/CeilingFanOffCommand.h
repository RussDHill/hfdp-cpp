#pragma once

#include "IFace.h"

class CeilingFan;

class CeilingFanOffCommand : public Command  
{
public:
	virtual void execute();
	CeilingFanOffCommand(shared_ptr<CeilingFan> ceilingFan);
	virtual ~CeilingFanOffCommand();
private:
	shared_ptr<CeilingFan> commandCeilingFan;

	DISABLE_COPY_AND_ASSIGN(CeilingFanOffCommand)
};
