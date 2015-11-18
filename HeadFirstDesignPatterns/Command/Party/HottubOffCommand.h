#pragma once

#include "IFace.h"

class Hottub;

class HottubOffCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	HottubOffCommand(shared_ptr<Hottub> hottub);
	virtual ~HottubOffCommand();
private:
	shared_ptr<Hottub> commandHottub;

	DISABLE_COPY_AND_ASSIGN(HottubOffCommand)
};
