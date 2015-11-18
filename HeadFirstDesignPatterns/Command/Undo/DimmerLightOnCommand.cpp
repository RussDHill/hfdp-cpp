#include "stdafx.h"
#include "DimmerLightOnCommand.h"
#include "Light.h"


DimmerLightOnCommand::DimmerLightOnCommand(shared_ptr<Light> light)
	:commandLight(light)
{

}

DimmerLightOnCommand::~DimmerLightOnCommand()
{

}

void DimmerLightOnCommand::execute()
{
	prevLevel = commandLight->getLevel();
	commandLight->dim(75);
}

void DimmerLightOnCommand::undo()
{
	commandLight->dim(prevLevel);
}
