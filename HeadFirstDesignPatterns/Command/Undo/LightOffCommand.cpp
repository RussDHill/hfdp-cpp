#include "stdafx.h"
#include "LightOffCommand.h"
#include "Light.h"


LightOffCommand::LightOffCommand(shared_ptr<Light> light)
	:commandLight(light)
{

}

LightOffCommand::~LightOffCommand()
{

}

void LightOffCommand::execute()
{
	commandLight->off();
}

void LightOffCommand::undo()
{
	commandLight->on();	
}
