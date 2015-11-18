#pragma once

#include "IFace.h"

class Light;

class DimmerLightOffCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	DimmerLightOffCommand(shared_ptr<Light> light);
	virtual ~DimmerLightOffCommand();
private:
	shared_ptr<Light> commandLight;
	int prevLevel;

	DISABLE_COPY_AND_ASSIGN(DimmerLightOffCommand)
};
