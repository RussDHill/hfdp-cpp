#include "stdafx.h"
#include "DimmerLightOffCommand.h"
#include "Light.h"


DimmerLightOffCommand::DimmerLightOffCommand(shared_ptr<Light> light)
	:commandLight(light)
{
	prevLevel = 100;
}

DimmerLightOffCommand::~DimmerLightOffCommand()
{

}

void DimmerLightOffCommand::execute()
{
	commandLight->off();
}

void DimmerLightOffCommand::undo()
{
	prevLevel = commandLight->getLevel();
	commandLight->dim(prevLevel);
}
