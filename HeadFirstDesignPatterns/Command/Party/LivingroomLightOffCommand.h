#pragma once

#include "IFace.h"

class Light;

class LivingroomLightOffCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	LivingroomLightOffCommand(shared_ptr<Light> light);
	virtual ~LivingroomLightOffCommand();
private:
	shared_ptr<Light> commandLight;

	DISABLE_COPY_AND_ASSIGN(LivingroomLightOffCommand)
};
