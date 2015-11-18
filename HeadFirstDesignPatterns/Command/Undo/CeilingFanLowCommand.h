#pragma once

#include "IFace.h"

class CeilingFan;

class CeilingFanLowCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	CeilingFanLowCommand(shared_ptr<CeilingFan> ceilingFan);
	virtual ~CeilingFanLowCommand();
private:
	shared_ptr<CeilingFan> commandCeilingFan;
	int prevSpeed;

	DISABLE_COPY_AND_ASSIGN(CeilingFanLowCommand)
};
