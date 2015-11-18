#pragma once

#include "IFace.h"

class Light;

class LivingroomLightOnCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	LivingroomLightOnCommand(shared_ptr<Light> light);
	virtual ~LivingroomLightOnCommand();
private:
	shared_ptr<Light> commandLight;

	DISABLE_COPY_AND_ASSIGN(LivingroomLightOnCommand)
};
