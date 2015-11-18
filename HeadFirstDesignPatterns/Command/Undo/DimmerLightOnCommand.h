#pragma once

#include "IFace.h"

class Light;

class DimmerLightOnCommand : public Command  
{
public:
	virtual void undo();
	virtual void execute();
	DimmerLightOnCommand(shared_ptr<Light> light);
	virtual ~DimmerLightOnCommand();
private:
	shared_ptr<Light> commandLight;
	int prevLevel;

	DISABLE_COPY_AND_ASSIGN(DimmerLightOnCommand)
};
