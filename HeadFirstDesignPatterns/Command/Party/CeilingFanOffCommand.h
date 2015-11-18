#pragma once

#include "IFace.h"

class CeilingFan;

class CeilingFanOffCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	CeilingFanOffCommand(shared_ptr<CeilingFan> ceilingFan);
	virtual ~CeilingFanOffCommand();
private:
	shared_ptr<CeilingFan> commandCeilingFan;
	int prevSpeed;

	DISABLE_COPY_AND_ASSIGN(CeilingFanOffCommand)
};
