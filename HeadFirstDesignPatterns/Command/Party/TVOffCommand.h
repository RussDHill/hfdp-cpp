#pragma once

#include "IFace.h"

class TV;

class TVOffCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	TVOffCommand(shared_ptr<TV> tv);
	virtual ~TVOffCommand();
private:
	shared_ptr<TV> commandTV;

	DISABLE_COPY_AND_ASSIGN(TVOffCommand)
};
