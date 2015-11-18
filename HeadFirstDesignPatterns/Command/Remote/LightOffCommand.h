#pragma once

#include "IFace.h"

class Light;

class LightOffCommand : public Command  
{
public:
	virtual void execute();
	LightOffCommand(shared_ptr<Light> light);
	virtual ~LightOffCommand();
private:
	shared_ptr<Light> commandLight;

	DISABLE_COPY_AND_ASSIGN(LightOffCommand)
};
