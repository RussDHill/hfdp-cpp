#pragma once

#include "IFace.h"

class CeilingFan;

class CeilingFanMediumCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	CeilingFanMediumCommand(shared_ptr<CeilingFan> ceilingFan);
	virtual ~CeilingFanMediumCommand();
private:
	shared_ptr<CeilingFan> commandCeilingFan;
	int prevSpeed;

	DISABLE_COPY_AND_ASSIGN(CeilingFanMediumCommand)
};
