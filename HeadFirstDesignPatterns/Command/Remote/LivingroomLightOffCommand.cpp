#include "stdafx.h"
#include "LivingroomLightOffCommand.h"
#include "Light.h"


LivingroomLightOffCommand::LivingroomLightOffCommand(shared_ptr<Light> light)
	:commandLight(light)
{

}

LivingroomLightOffCommand::~LivingroomLightOffCommand()
{

}

void LivingroomLightOffCommand::execute()
{
	commandLight->off();
}
