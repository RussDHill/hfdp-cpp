#pragma once

#include "IFace.h"

class CeilingFan;

class CeilingFanHighCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	CeilingFanHighCommand(shared_ptr<CeilingFan> ceilingFan);
	virtual ~CeilingFanHighCommand();
private:
	shared_ptr<CeilingFan> commandCeilingFan;
	int prevSpeed;

	DISABLE_COPY_AND_ASSIGN(CeilingFanHighCommand)
};
