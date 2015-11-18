#pragma once

#include "IFace.h"

class NoCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	NoCommand();
	virtual ~NoCommand();

	DISABLE_COPY_AND_ASSIGN(NoCommand)
};

