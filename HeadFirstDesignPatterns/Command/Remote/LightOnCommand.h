#pragma once

#include "IFace.h"

class Light;

class LightOnCommand : public Command  
{
public:
	virtual void execute();
	LightOnCommand(shared_ptr<Light> light);
	virtual ~LightOnCommand();
private:
	shared_ptr<Light> commandLight;

	DISABLE_COPY_AND_ASSIGN(LightOnCommand)
};

